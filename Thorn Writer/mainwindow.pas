unit MainWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  ExtCtrls, ComCtrls, StdCtrls, Interfaces, FileTypes, RichMemo;

type

  { TMainForm }

  TMainForm = class(TForm)
    Button2: TButton;
    Button3: TButton;
    CharacterPreviewButton: TButton;
    DescriptionMemo: TMemo;
    CharacterGalleryTabs: TPageControl;
    PreviewEdit: TEdit;
    PageControl2: TPageControl;
    AccentsGroup: TRadioGroup;
    TabSheet1: TTabSheet;
    TabSheet2: TTabSheet;
    TabSheet3: TTabSheet;
    TabSheet4: TTabSheet;
    FormattingSheet: TTabSheet;
    TabSheet5: TTabSheet;
    TabSheet6: TTabSheet;
    TabSheet7: TTabSheet;
    TabSheet8: TTabSheet;
    TabSheet9: TTabSheet;
    ToggleBox1: TToggleBox;
    ToggleBox10: TToggleBox;
    ToggleBox11: TToggleBox;
    ToggleBox12: TToggleBox;
    ToggleBox13: TToggleBox;
    ToggleBox14: TToggleBox;
    ToggleBox15: TToggleBox;
    ToggleBox16: TToggleBox;
    ToggleBox17: TToggleBox;
    ToggleBox18: TToggleBox;
    ToggleBox19: TToggleBox;
    ToggleBox2: TToggleBox;
    ToggleBox20: TToggleBox;
    ToggleBox3: TToggleBox;
    ToggleBox4: TToggleBox;
    ToggleBox5: TToggleBox;
    ToggleBox6: TToggleBox;
    ToggleBox7: TToggleBox;
    ToggleBox8: TToggleBox;
    ToggleBox9: TToggleBox;
    WebsiteGoButton: TButton;
    WebsiteEdit: TEdit;
    WebsiteLabel: TLabel;
    TitleEdit: TEdit;
    IconPack: TImageList;
    AuthorEdit: TEdit;
    TitleLabel: TLabel;
    MainMenu: TMainMenu;
    FileMenu: TMenuItem;
    FileSep2: TMenuItem;
    MainRTF: TRichMemo;
    SidebarTabs: TPageControl;
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
    FileSheet: TTabSheet;
    CharacterSheet: TTabSheet;
    AuthorLabel: TLabel;
    ToolButton1: TToolButton;
    DescriptionLabel: TLabel;
    procedure ExitMenuItemClick(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure NewMenuItemClick(Sender: TObject);
    procedure OpenMenuItemClick(Sender: TObject);
    procedure PageControl2Change(Sender: TObject);
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

procedure TMainForm.PageControl2Change(Sender: TObject);
begin

end;

procedure TMainForm.SaveAsMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.SaveMenuItemClick(Sender: TObject);
begin

end;

end.