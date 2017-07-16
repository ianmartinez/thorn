unit SplashWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  mainwindow, StdCtrls;

type

  { TSplashForm }

  TSplashForm = class(TForm)
    SplashImage: TImage;
    SplashLabel: TLabel;
    procedure FormShow(Sender: TObject);
    procedure SplashLabelClick(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  SplashForm: TSplashForm;

implementation

{$R *.lfm}


{ TSplashForm }

procedure TSplashForm.FormShow(Sender: TObject);
begin
     MainForm.Visible := False;
     MainForm.Visible := True;
end;

procedure TSplashForm.SplashLabelClick(Sender: TObject);
begin

end;

end.
