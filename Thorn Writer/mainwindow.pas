unit MainWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  ExtCtrls, ComCtrls, StdCtrls, EditBtn, Interfaces, FileTypes, RichMemo,AboutWindow;

type

  { TMainForm }

  TMainForm = class(TForm)
    Button2: TButton;
    Button3: TButton;
    CharacterPreviewButton: TButton;
    ColorDialog1: TColorDialog;
    DescriptionMemo: TMemo;
    CharacterGalleryTabs: TPageControl;
    EditMenu: TMenuItem;
    EditSep1: TMenuItem;
    CopyMenuItem: TMenuItem;
    CutMenuItem: TMenuItem;
    EditSep2: TMenuItem;
    FontMenu: TMenuItem;
    FontMenuItem: TMenuItem;
    FormatSep1: TMenuItem;
    BoldMenuItem: TMenuItem;
    ItalicMenuItem: TMenuItem;
    FormatSep2: TMenuItem;
    LeftMenuItem: TMenuItem;
    CenterMenuItem: TMenuItem;
    ColorsMenu: TMenuItem;
    FontColorMenuItem: TMenuItem;
    HighlightColorMenuItem: TMenuItem;
    BackgroundColorMenuItem: TMenuItem;
    HelpMenu: TMenuItem;
    AboutMenuItem: TMenuItem;
    RightMenuItem: TMenuItem;
    ToolButton4: TToolButton;
    LeftToolbarButton: TToolButton;
    CenterToolbarButton: TToolButton;
    RightToolbarButton: TToolButton;
    ToolButton5: TToolButton;
    FontToolbarButton: TToolButton;
    UnderlineMenuItem: TMenuItem;
    SelectAllMenuItem: TMenuItem;
    ClearMenuItem: TMenuItem;
    PasteMenuItem: TMenuItem;
    PasteTextMenuItem: TMenuItem;
    RedoMenuItem: TMenuItem;
    RedoToolbarButton: TToolButton;
    ToolButton2: TToolButton;
    CopyToolbarButton: TToolButton;
    CutToolbarButton: TToolButton;
    PasteToolbarButton: TToolButton;
    PasteTextToolbarButton: TToolButton;
    ToolButton3: TToolButton;
    BoldToolbarButton: TToolButton;
    ItalicToolbarButton: TToolButton;
    UnderlineToolbar: TToolButton;
    UndoToolbarButton: TToolButton;
    UndoMenuItem: TMenuItem;
    PreviewEdit: TEdit;
    PageControl2: TPageControl;
    AccentsGroup: TRadioGroup;
    TabSheet1: TTabSheet;
    TabSheet2: TTabSheet;
    TabSheet3: TTabSheet;
    TabSheet4: TTabSheet;
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
    FileSheet: TTabSheet;
    CharacterSheet: TTabSheet;
    AuthorLabel: TLabel;
    ToolButton1: TToolButton;
    DescriptionLabel: TLabel;
    procedure AboutMenuItemClick(Sender: TObject);
    procedure BackgroundColorMenuItemClick(Sender: TObject);
    procedure ExitMenuItemClick(Sender: TObject);
    procedure FontColorMenuItemClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure MainToolbarClick(Sender: TObject);
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
procedure TMainForm.ExitMenuItemClick(Sender: TObject);
begin
     Halt();
end;

procedure TMainForm.FontColorMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.FormCreate(Sender: TObject);
begin

end;

procedure TMainForm.MainToolbarClick(Sender: TObject);
begin

end;

procedure TMainForm.BackgroundColorMenuItemClick(Sender: TObject);
begin
     if ColorDialog1.Execute then
        MainRTF.Color:= ColorDialog1.Color;
end;

procedure TMainForm.AboutMenuItemClick(Sender: TObject);
begin
  AboutForm:=TAboutForm.Create(Nil);
  AboutForm.ShowModal;
  FreeAndNil(AboutForm);
end;

end.
