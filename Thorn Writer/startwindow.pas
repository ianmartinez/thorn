unit StartWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  StdCtrls, Buttons, ComCtrls, FileTypes, AboutWindow, LCLIntf;

type

  { TStartUpForm }

  TStartUpForm = class(TForm)
    RecentFilesGroupBox: TGroupBox;
    NewButton: TBitBtn;
    OpenButton: TBitBtn;
    AboutButton: TBitBtn;
    QuitButton: TBitBtn;
    PatreonButton: TBitBtn;
    ShowOnStartCheck: TCheckBox;
    HeaderImage: TImage;
    RecentFilesList: TListView;
    procedure AboutButtonClick(Sender: TObject);
    procedure PatreonButtonClick(Sender: TObject);
    procedure ShowOnStartCheckChange(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure NewButtonClick(Sender: TObject);
    procedure OpenButtonClick(Sender: TObject);
    procedure QuitButtonClick(Sender: TObject);
    procedure Init(SettingsFile: ThornWriterSettings);
    procedure RecentFilesListClick(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
    FileToOpen: string;
    Settings: ThornWriterSettings;
  end;

var
  StartUpForm: TStartUpForm;

implementation

{$R *.lfm}

{ TStartUpForm }

procedure TStartUpForm.Init(SettingsFile: ThornWriterSettings);
var
  file_pos: Integer;
  current_item: TListItem;
begin
  for file_pos:= Length(SettingsFile.RecentFiles)-1 downto 0 do
  begin
    current_item:= RecentFilesList.Items.Add;
    current_item.Caption:=extractfilename(SettingsFile.RecentFiles[file_pos]);

  end;

  Settings:=SettingsFile;
end;

procedure TStartUpForm.RecentFilesListClick(Sender: TObject);
begin
  if (RecentFilesList.ItemIndex <> -1) then
  begin
    FileToOpen:= Settings.RecentFiles[RecentFilesList.Items.Count-1-RecentFilesList.ItemIndex];
    self.Close;
  end;
end;

procedure TStartUpForm.FormCreate(Sender: TObject);
begin

end;

procedure TStartUpForm.FormShow(Sender: TObject);
begin
  self.SetFocus;
end;

procedure TStartUpForm.NewButtonClick(Sender: TObject);
begin
  FileToOpen:= '|NewFile';
  self.Close;
end;

procedure TStartUpForm.OpenButtonClick(Sender: TObject);
begin
  FileToOpen:= '|OpenFile';
  self.Close;
end;

procedure TStartUpForm.AboutButtonClick(Sender: TObject);
begin
  AboutForm:=TAboutForm.Create(Nil);
  AboutForm.ShowModal;
  FreeAndNil(AboutForm);
end;

procedure TStartUpForm.PatreonButtonClick(Sender: TObject);
begin
  OpenURL('https://www.patreon.com/ianmartinez');
end;

procedure TStartUpForm.ShowOnStartCheckChange(Sender: TObject);
begin
    Settings.ShowStartScreen:= ShowOnStartCheck.Checked;
end;

procedure TStartUpForm.QuitButtonClick(Sender: TObject);
begin
  Application.Terminate;
end;

end.

