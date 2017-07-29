unit FileTypes;

{$mode objfpc}{$H+}
interface
  type ThornWriterFile = record
     Title: string;
     Author: string;
     Website: string;
     Description: string;
     CustomCharacters: array of string;
     RtfData: string;
  end;
  procedure SaveWriterFile(writer_file: ThornWriterFile; path: string);
  function ReadWriterFile(path: string) : ThornWriterFile;
  function ReadSafeString(source: string) : string;
  function WriteSafeString(source: string) : string;

implementation
  uses SysUtils,Dialogs,IniFiles,Classes;
 const
   UNIX_LINE : string = AnsiChar(#10);
   WINDOWS_LINE : string = AnsiString(#13#10);
  procedure SaveWriterFile(writer_file: ThornWriterFile; path: string);
  var output: TextFile;
  begin
    AssignFile(output, path);

  end;

  function ReadWriterFile(path: string) : ThornWriterFile;
  var
    ret: ThornWriterFile;
    data: string;
    input: TextFile;
    header: string;
    rtf_data: string;
    INI: TINIFile;
    INIStream: TStringStream;
    safe_count: Integer;
  begin
    AssignFile(input, path);
    try
      reset(input); // open file

      while not eof(input) do
      begin
        readln(input, data);
      end;

      // Is a valid  Extended RTF File
      if data.Contains('<=rtf-content=>') then
      begin
        header := data.Split('<=rtf-content=>')[0];
        rtf_data := data.Split('<=rtf-content=>')[1];
        ret.RtfData := ReadSafeString(rtf_data);

        // Create the object, specifying the the ini file that contains the settings
        INIStream.Create(header);
        INI := TINIFile.Create(INIStream);
        try
          ret.Author := INI.ReadString('Document','Author','');
          ret.Title := INI.ReadString('Document','Title','');
          ret.Website := INI.ReadString('Document','Website','');
          ret.Description := INI.ReadString('Document','Description','');
          ret.CustomCharacters := INI.ReadString('Document','Characters','').Split('|',TStringSplitOptions.ExcludeEmpty);

          // Replace safe characters with their original values
          for safe_count:=0 to Length(ret.CustomCharacters)-1 do
          begin
            ret.CustomCharacters[safe_count] := ReadSafeString(ret.CustomCharacters[safe_count]);
          end;
        finally
          INI.Free;
          result := ret;
        end;
      end;

      CloseFile(input);
    except
      on E: EInOutError do
       ShowMessage('File handling error occurred. Details: ' + E.Message);
    end;
  end;

  function WriteSafeString(source: string) : string;
  var
    temp: string;
  begin
    temp := source;
    temp := temp.Replace('[','&lsbr');
    temp := temp.Replace(']','&rsbr');
    temp := temp.Replace('=','&eq');
    temp := temp.Replace('<','&lt');
    temp := temp.Replace('>','&gt');
    temp := temp.Replace(';','&sc');
    temp := temp.Replace('|','&bar');
    temp := temp.Replace(UNIX_LINE,'&unix');
    temp := temp.Replace(WINDOWS_LINE,'&win32');

    result := temp;
  end;

  function ReadSafeString(source: string) : string;
  var
    temp: string;
  begin
    temp := source;
    temp := temp.Replace('&lsbr','[');
    temp := temp.Replace('&rsbr',']');
    temp := temp.Replace('&eq','=');
    temp := temp.Replace('&lt','<');
    temp := temp.Replace('&gt','>');
    temp := temp.Replace('&sc',';');
    temp := temp.Replace('&bar','|');
    temp := temp.Replace('&unix',UNIX_LINE);
    temp := temp.Replace('&win32',WINDOWS_LINE);

    result := temp;
  end;
end.

