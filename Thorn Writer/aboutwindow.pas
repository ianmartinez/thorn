unit AboutWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  StdCtrls, ComCtrls, RichMemo;

type

  { TAboutForm }

  TAboutForm = class(TForm)
    CloseButton: TButton;
    Image1: TImage;
    AboutRTF: TRichMemo;
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  AboutForm: TAboutForm;

implementation

{$R *.lfm}

end.

