unit FileTypes;

{$mode objfpc}{$H+}
interface
  type CharArray = array of string;
  type ThornWriterFile = record
     Title: string;
     Author: string;
     Website: string;
     Description: string;
     CustomCharacters: CharArray;
     RtfData: string;
  end;

  procedure SaveWriterFile(writer_file: ThornWriterFile; path: string);

  function ReadWriterFile(path: string) : ThornWriterFile;
  function ReadSafeString(source: string) : string;
  function WriteSafeString(source: string) : string;
  function AddCharacterToWriterFile(writer_file: ThornWriterFile; value: string) : CharArray;
  function RemoveCharacterToWriterFile(writer_file: ThornWriterFile; value: string) : CharArray;

implementation
 uses SysUtils,Dialogs,IniFiles,Classes;
 const
   UNIX_LINE : string = AnsiChar(#10);
   WINDOWS_LINE : string = AnsiString(#13#10);

 function StringListFromStrings(const Strings: array of string): TStringList;
  var
    i: Integer;
  begin
    Result := TStringList.Create;
    for i := low(Strings) to high(Strings) do
      Result.Add(Strings[i]);
  end;

  function StringsFromStringList(strings: TStringList): CharArray;
  var
    i: Integer;
  begin
    SetLength(Result, strings.Count);

    for i := 0 to strings.Count -1 do
      Result[i]:=strings[i];
  end;

  function AddCharacterToWriterFile(writer_file: ThornWriterFile; value: string) : CharArray;
  var temp: TStringList;
  begin
    temp := StringListFromStrings(writer_file.CustomCharacters);
    temp.Add(value);

    Result := StringsFromStringList(temp);
  end;

  function RemoveCharacterToWriterFile(writer_file: ThornWriterFile; value: string): CharArray;
  var temp: TStringList; found_index: Integer;
  begin
    temp := StringListFromStrings(writer_file.CustomCharacters);
    if temp.Find(value,found_index) then temp.Delete(found_index);

    Result := StringsFromStringList(temp);
  end;

  procedure SaveWriterFile(writer_file: ThornWriterFile; path: string);
  var output: TextFile;
  begin
    AssignFile(output, path);
  end;

  function ReadWriterFile(path: string) : ThornWriterFile;
  var
    ret: ThornWriterFile;
    INI: TINIFile;
    char_pos: Integer;
  begin
    try
      if FileExists(path) then
      begin
        INI := TINIFile.Create(path);
        ret.Author := ReadSafeString(INI.ReadString('Properties','Author',''));
        ret.Description := ReadSafeString(INI.ReadString('Properties','Description',''));
        ret.Title := ReadSafeString(INI.ReadString('Properties','Title',''));
        ret.Website := ReadSafeString(INI.ReadString('Properties','Website',''));
        ret.CustomCharacters := INI.ReadString('Properties','Characters','').Split('|',TStringSplitOptions.ExcludeEmpty);
        ret.RtfData := ReadSafeString(INI.ReadString('Document','Page0',''));

        for char_pos:=0 to Length(ret.CustomCharacters)-1 do
        begin
          ret.CustomCharacters[char_pos] := ReadSafeString(ret.CustomCharacters[char_pos]);
        end;
      end;
    except
      on E: EInOutError do
       ShowMessage('File handling error occurred. Details: ' + E.Message);
    end;

    INI.Free;
    result := ret;
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
    temp := temp.Replace(WINDOWS_LINE,'&win32');
    temp := temp.Replace(UNIX_LINE,'&unix');
    temp := temp.Replace(' ','&sp');

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
    temp := temp.Replace('&win32',WINDOWS_LINE);
    temp := temp.Replace('&unix',UNIX_LINE);
    temp := temp.Replace('&sp',' ');

    result := temp;
  end;
end.

