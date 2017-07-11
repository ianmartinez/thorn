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

implementation

end.

