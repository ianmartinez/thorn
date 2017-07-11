unit MainWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  ExtCtrls, ComCtrls, ThornFile, RichMemo;

type

  { TMainForm }

  TMainForm = class(TForm)
    IconPack: TImageList;
    MainMenu: TMainMenu;
    FileMenu: TMenuItem;
    FileSep2: TMenuItem;
    MainRTF: TRichMemo;
    SaveMenuItem: TMenuItem;
    SaveAsMenuItem: TMenuItem;
    NewMenuItem: TMenuItem;
    FileSep1: TMenuItem;
    FileSep3: TMenuItem;
    ExitMenuItem: TMenuItem;
    OpenMenuItem: TMenuItem;
    MainToolbar: TToolBar;
    NewToolbarButton: TToolButton;
    OpenToolbarButton: TToolButton;
    SaveToolbarButton: TToolButton;
    SaveAsToolbarButton: TToolButton;
    procedure ExitMenuItemClick(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure NewMenuItemClick(Sender: TObject);
    procedure OpenMenuItemClick(Sender: TObject);
    procedure SaveAsMenuItemClick(Sender: TObject);
    procedure SaveMenuItemClick(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  MainForm: TMainForm;

implementation

{$R *.lfm}

{ TMainForm }

procedure TMainForm.FormActivate(Sender: TObject);
begin
     MainRTF.Rtf:='';
end;

procedure TMainForm.ExitMenuItemClick(Sender: TObject);
begin
     Halt();
end;

procedure TMainForm.NewMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.OpenMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.SaveAsMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.SaveMenuItemClick(Sender: TObject);
begin

end;

end.