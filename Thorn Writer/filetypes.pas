unit FileTypes;

{$mode objfpc}{$H+}
interface
  const WRITER_VERSION: integer = 1;
  const UNIX_LINE: string = AnsiChar(#10);
  const WINDOWS_LINE: string = AnsiString(#13#10);

  type CharArray = array of string;
  type PathArray = array of string;
  type ThornWriterFile = record
     Title: string;
     Author: string;
     Website: string;
     Description: string;
     CustomCharacters: CharArray;
     RtfData: string;
     BackgroundColor: string;
     PageCount: integer;
     WriterVersion: integer;
  end;

  type ThornWriterSettings = record
     ShowStartScreen: boolean;
     CustomCharacters: CharArray;
     RecentFiles: PathArray;
  end;

  function ReadWriterFile(const path: string) : ThornWriterFile;
  procedure SaveWriterFile(const writer_file: ThornWriterFile; const path: string);
  function ReadWriterSettings(const path: string) : ThornWriterSettings;
  procedure SaveWriterSettings(const writer_settings: ThornWriterSettings; const path: string);

  function ReadSafeString(const source: string) : string;
  function WriteSafeString(const source: string) : string;
  function AddCharacterToCharArray(const char_array: CharArray; const value: string) : CharArray;
  function RemoveCharacterFromCharArray(const char_array: CharArray; const value: string) : CharArray;
  function RemoveCharacterFromCharArrayAt(const char_array: CharArray; const position: integer): CharArray;

implementation
 uses SysUtils,Dialogs,IniFiles,Classes;

 function StringListFromStrings(const Strings: array of string): TStringList;
  var
    i: Integer;
  begin
    Result := TStringList.Create;
    for i := low(Strings) to high(Strings) do
      Result.Add(Strings[i]);
  end;

  function StringsFromStringList(const strings: TStringList): CharArray;
  var
    i: Integer;
  begin
    SetLength(Result, strings.Count);

    for i := 0 to strings.Count -1 do
      Result[i]:=strings[i];
  end;

  function AddCharacterToCharArray(const char_array: CharArray; const value: string) : CharArray;
  var temp: TStringList;
  begin
    temp := StringListFromStrings(char_array);
    temp.Add(value);

    Result := StringsFromStringList(temp);
  end;

  function RemoveCharacterFromCharArray(const char_array: CharArray; const value: string): CharArray;
  var temp: TStringList;
  begin
    temp := StringListFromStrings(char_array);
    if not temp.IndexOf(value) = -1 then temp.Delete(temp.IndexOf(value));

    Result := StringsFromStringList(temp);
  end;

  function RemoveCharacterFromCharArrayAt(const char_array: CharArray; const position: integer): CharArray;
  var temp: TStringList;
  begin
    temp := StringListFromStrings(char_array);
    temp.Delete(position);

    Result := StringsFromStringList(temp);
  end;

  function ReadWriterSettings(const path: string) : ThornWriterSettings;
  var
    ret: ThornWriterSettings;
    INI: TINIFile;
    char_pos: Integer;
    file_pos: Integer;
  begin
   if FileExists(path) then
     try
        begin
          INI := TINIFile.Create(path);
          ret.ShowStartScreen:= INI.ReadBool('Settings','ShowStartScreen',true);
          ret.CustomCharacters := INI.ReadString('Settings','Characters','').Split('|',TStringSplitOptions.ExcludeEmpty);
          ret.RecentFiles := INI.ReadString('Settings','RecentFiles','').Split('|',TStringSplitOptions.ExcludeEmpty);

          for char_pos:=0 to Length(ret.CustomCharacters)-1 do
          begin
            ret.CustomCharacters[char_pos] := ReadSafeString(ret.CustomCharacters[char_pos]);
          end;

          for file_pos:=0 to Length(ret.RecentFiles)-1 do
          begin
            ret.RecentFiles[file_pos] := ReadSafeString(ret.RecentFiles[file_pos]);
          end;
        end

       finally
          INI.Free;
       end
    else
    begin
      ret.ShowStartScreen:=true;
    end;

    result := ret;
   end;

  procedure SaveWriterSettings(const writer_settings: ThornWriterSettings; const path: string);
  var
    INI: TINIFile;
    char_pos: Integer;
    char_string: string;
    file_pos: Integer;
    file_string: string;
  begin
    try
      INI := TINIFile.Create(path);

      INI.WriteBool('Settings','ShowStartScreen',writer_settings.ShowStartScreen);

      for char_pos := 0 to Length(writer_settings.CustomCharacters) -1 do
      begin
         char_string := char_string + WriteSafeString(writer_settings.CustomCharacters[char_pos]) + '|';
      end;
      INI.WriteString('Settings','Characters',char_string);

      for file_pos := 0 to Length(writer_settings.RecentFiles) -1 do
      begin
         file_string := file_string + WriteSafeString(writer_settings.RecentFiles[file_pos]) + '|';
      end;
      INI.WriteString('Settings','RecentFiles',file_string);

      INI.UpdateFile;
   finally
      INI.Free;
    end;
  end;

  function ReadWriterFile(const path: string) : ThornWriterFile;
  var
    ret: ThornWriterFile;
    INI: TINIFile;
    char_pos: Integer;
  begin
    if FileExists(path) then
    begin
      try
        INI := TINIFile.Create(path);
        ret.WriterVersion := INI.ReadInteger('Data','ThornWriterVersion',1);
        ret.Author := ReadSafeString(INI.ReadString('Properties','Author',''));
        ret.Description := ReadSafeString(INI.ReadString('Properties','Description',''));
        ret.Title := ReadSafeString(INI.ReadString('Properties','Title',''));
        ret.Website := ReadSafeString(INI.ReadString('Properties','Website',''));
        ret.CustomCharacters := INI.ReadString('Properties','Characters','').Split('|',TStringSplitOptions.ExcludeEmpty);
        ret.PageCount:=INI.ReadInteger('Properties','PageCount',1);
        ret.RtfData := ReadSafeString(INI.ReadString('Document','Page0',''));
        ret.BackgroundColor:= ReadSafeString(INI.ReadString('Document','Page0Background','')); ;

        for char_pos:=0 to Length(ret.CustomCharacters)-1 do
        begin
          ret.CustomCharacters[char_pos] := ReadSafeString(ret.CustomCharacters[char_pos]);
        end;
       finally
          INI.Free;
       end;
     end;

    result := ret;
  end;

  procedure SaveWriterFile(const writer_file: ThornWriterFile; const path: string);
  var
    INI: TINIFile;
    char_pos: Integer;
    char_string: string;
  begin
    try
      INI := TINIFile.Create(path);
      INI.WriteInteger('Data','ThornWriterVersion', WRITER_VERSION);

      INI.WriteString('Properties','Title',WriteSafeString(writer_file.Title));
      INI.WriteString('Properties','Author',WriteSafeString(writer_file.Author));
      INI.WriteString('Properties','Website',WriteSafeString(writer_file.Website));
      INI.WriteString('Properties','Description',WriteSafeString(writer_file.Description));

      for char_pos := 0 to Length(writer_file.CustomCharacters) -1 do
      begin
         char_string := char_string + WriteSafeString(writer_file.CustomCharacters[char_pos]) + '|';
      end;

      INI.WriteString('Properties','Characters',char_string);
      INI.WriteInteger('Properties','PageCount',writer_file.PageCount);

      INI.WriteString('Document','Page0',WriteSafeString(writer_file.RtfData));
      INI.WriteString('Document','Page0Background',WriteSafeString(writer_file.BackgroundColor));
      INI.UpdateFile;

   finally
      INI.Free;
    end;
  end;

  function WriteSafeString(const source: string) : string;
  var
    temp: string;
  begin
    temp := source;
    temp := temp.Replace('[','&lsbr', [rfReplaceAll]);
    temp := temp.Replace(']','&rsbr', [rfReplaceAll]);
    temp := temp.Replace('=','&eq', [rfReplaceAll]);
    temp := temp.Replace('<','&lt', [rfReplaceAll]);
    temp := temp.Replace('>','&gt', [rfReplaceAll]);
    temp := temp.Replace(';','&sc', [rfReplaceAll]);
    temp := temp.Replace('|','&bar', [rfReplaceAll]);
    temp := temp.Replace(WINDOWS_LINE,'&win_line', [rfReplaceAll]);
    temp := temp.Replace(UNIX_LINE,'&unix_line', [rfReplaceAll]);

    result := temp;
  end;

  function ReadSafeString(const source: string) : string;
  var
    temp: string;
  begin
    temp := source;
    temp := temp.Replace('&lsbr','[', [rfReplaceAll]);
    temp := temp.Replace('&rsbr',']', [rfReplaceAll]);
    temp := temp.Replace('&eq','=', [rfReplaceAll]);
    temp := temp.Replace('&lt','<', [rfReplaceAll]);
    temp := temp.Replace('&gt','>', [rfReplaceAll]);
    temp := temp.Replace('&sc',';', [rfReplaceAll]);
    temp := temp.Replace('&bar','|', [rfReplaceAll]);
    temp := temp.Replace('&win_line',WINDOWS_LINE, [rfReplaceAll]);
    temp := temp.Replace('&unix_line',UNIX_LINE, [rfReplaceAll]);
    temp := temp.Replace('&sp',' ', [rfReplaceAll]);

    result := temp;
  end;
end.

