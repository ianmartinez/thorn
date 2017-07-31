unit StartWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  StdCtrls, Buttons, ComCtrls, AboutWindow;

type

  { TStartUpForm }

  TStartUpForm = class(TForm)
    NewButton: TBitBtn;
    OpenButton: TBitBtn;
    AboutButton: TBitBtn;
    QuitButton: TBitBtn;
    PatreonButton: TBitBtn;
    CheckBox1: TCheckBox;
    RecentFilesGroup: TGroupBox;
    HeaderImage: TImage;
    RecentFilesList: TListView;
    procedure AboutButtonClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure OpenButtonClick(Sender: TObject);
    procedure QuitButtonClick(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  StartUpForm: TStartUpForm;

implementation

{$R *.lfm}

{ TStartUpForm }

procedure TStartUpForm.FormCreate(Sender: TObject);
begin
end;

procedure TStartUpForm.FormShow(Sender: TObject);
begin
  self.SetFocus;
end;

procedure TStartUpForm.OpenButtonClick(Sender: TObject);
begin

end;

procedure TStartUpForm.AboutButtonClick(Sender: TObject);
begin
  AboutForm:=TAboutForm.Create(Nil);
  AboutForm.ShowModal;
  FreeAndNil(AboutForm);
end;

procedure TStartUpForm.QuitButtonClick(Sender: TObject);
begin
  Application.Terminate;
end;

end.

