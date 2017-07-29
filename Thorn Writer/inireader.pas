unit IniReader;

{$mode objfpc}{$H+}
interface
uses
  Classes, SysUtils, Contnrs;
const
  UnixLine : string = AnsiChar(#10);
  WindowsLine : string = AnsiString(#13#10);

implementation
  type StringPair = record
     Key: string;
     Value: string;
  end;
  type
   Pairs = array of StringPair;

  function ReadINI(data: string): Pairs;
  var
    dict: Pairs;
    lines: array of string;
    lines_stripped: TStringList;
    line_count: Integer;
  begin
    lines.Create;
    lines := data.Split([WindowsLine,UnixLine]);
    lines_stripped.Create;
    for line_count:= 0 to Length(lines)-1 do
    begin
         if (lines[line_count].Trim <> '') or
         lines[line_count].Contains('=') or lines[line_count].StartsWith(';') then
            lines_stripped.Add(lines[line_count]);
    end;

    SetLength(dict, lines_stripped.Count);

    for line_count:= 0 to Length(dict)-1 do
    begin
       dict[line_count].Key:= lines_stripped[line_count].Split('=')[0].Trim;
       dict[line_count].Value:= lines_stripped[line_count].Split('=')[1].Trim;
    end;

    Result := dict;
  end;
end.
