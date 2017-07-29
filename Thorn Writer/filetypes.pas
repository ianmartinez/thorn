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

implementation
  uses SysUtils,Dialogs,IniFiles,Classes;
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
  begin
    AssignFile(input, path);
    try
      reset(input); // open file

      while not eof(input) do
      begin
        readln(input, data);
      end;

      if data.Contains('<;~rtf-content~;>') then
      begin
        header:= data.Split('<;~rtf-content~;>')[0];
        rtf_data:= data.Split('<;~rtf-content~;>')[1];

        // Create the object, specifying the the ini file that contains the settings
        INIStream.Create(rtf_data,TEncoding.Unicode);
        INI := TINIFile.Create(rtf_data);
        try
          ret.Author := INI.ReadString('data','Author','');
          ret.Title := INI.ReadString('data','Title','');
          ret.Website := INI.ReadString('data','Website','');
          ret.Description := INI.ReadString('data','Description','');
        finally
          INI.Free;
        end;

      end;

      CloseFile(input);
    except
      on E: EInOutError do
       ShowMessage('File handling error occurred. Details: ' + E.Message);
    end;
  end;
end.

