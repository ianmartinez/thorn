unit MainWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  ExtCtrls, ComCtrls, StdCtrls, EditBtn, Interfaces, FileTypes, Clipbrd,
  RichMemo,AboutWindow,Contnrs, Types;

type

  { TMainForm }

  TMainForm = class(TForm)
    LocalButton: TButton;
    FileButton: TButton;
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
    RedoMenuItem: TMenuItem;
    RedoToolbarButton: TToolButton;
    ToolButton2: TToolButton;
    CopyToolbarButton: TToolButton;
    CutToolbarButton: TToolButton;
    PasteToolbarButton: TToolButton;
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
    GraveToggle: TToggleBox;
    HookAboveToggle: TToggleBox;
    RingAboveToggle: TToggleBox;
    DoubleAcuteToggle: TToggleBox;
    CaronToggle: TToggleBox;
    DoubleGraveToggle: TToggleBox;
    OgonekToggle: TToggleBox;
    CedillaToggle: TToggleBox;
    TildeBelowToggle: TToggleBox;
    MacronBelowToggle: TToggleBox;
    TurnedCommaToggle: TToggleBox;
    AcuteToggle: TToggleBox;
    KoronisToggle: TToggleBox;
    CircumflexToggle: TToggleBox;
    TildeToggle: TToggleBox;
    MacronToggle: TToggleBox;
    OverlineToggle: TToggleBox;
    BreveToggle: TToggleBox;
    DotAbove: TToggleBox;
    UmlautToggle: TToggleBox;
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
    procedure CharacterPreviewButtonClick(Sender: TObject);
    procedure ClearMenuItemClick(Sender: TObject);
    procedure CopyMenuItemClick(Sender: TObject);
    procedure CutMenuItemClick(Sender: TObject);
    procedure ExitMenuItemClick(Sender: TObject);
    procedure FontColorMenuItemClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var CloseAction: TCloseAction);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure LocalButtonClick(Sender: TObject);
    procedure MainRTFChange(Sender: TObject);
    procedure MainToolbarClick(Sender: TObject);
    procedure PasteMenuItemClick(Sender: TObject);
    procedure PreviewEditChange(Sender: TObject);
    procedure RedoMenuItemClick(Sender: TObject);
    procedure SelectAllMenuItemClick(Sender: TObject);
    procedure UndoMenuItemClick(Sender: TObject);
    procedure AccentToggleClick(Sender: TObject);

    procedure BuildCharacter();
    procedure InsertText(txt: string);
    function GetAccentToggles() : TComponentList;
  private
    { private declarations }

    accent_toggles: TComponentList;
  public
    { public declarations }
  end;

var
  MainForm: TMainForm;

implementation

{$R *.lfm}

{ TMainForm }
procedure TMainForm.BuildCharacter();
var base: string; accent_count: Integer; accents: TStringList; toggle_count: Integer;
begin
  base := PreviewEdit.Text;
  accents := TStringList.Create;

  { Get checked accent toggles }
  for toggle_count:=0 to accent_toggles.Count -1 do
  begin
    if (accent_toggles[toggle_count] as TToggleBox).Checked then
      accents.Add(stringreplace((accent_toggles[toggle_count] as TToggleBox).Caption, '◌','',[rfReplaceAll]));
  end;

  { Combine accent marks }
  for accent_count := 0 to accents.Count -1 do    base := base + accents[accent_count];

  CharacterPreviewButton.Caption := base;
end;

procedure TMainForm.InsertText(txt: string);
var old_sel_pos: Integer;
begin
  old_sel_pos:= MainRTF.SelStart;
  MainRTF.SelText := txt;
  MainRTF.SelStart:= old_sel_pos + txt.Length;
end;

procedure TMainForm.AccentToggleClick(Sender: TObject);
begin
  BuildCharacter();
end;

function TMainForm.GetAccentToggles() : TComponentList;
var toggles: TComponentList; com_count: Integer;
begin
  toggles := TComponentList.Create;
  for com_count:= 0 to ComponentCount-1 do
  begin
    if Components[com_count] is TToggleBox then
      if pos('◌',(Components[com_count] as TToggleBox).Caption) > 0 then
        toggles.Add(Components[com_count]);
  end;

  Result := toggles;
end;

procedure TMainForm.ExitMenuItemClick(Sender: TObject);
begin
  FreeAndNil(MainForm);
  Application.Terminate;
end;

procedure TMainForm.FontColorMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.FormClose(Sender: TObject; var CloseAction: TCloseAction);
begin
  FreeAndNil(MainForm);
  Application.Terminate;
end;

procedure TMainForm.FormCreate(Sender: TObject);
var accent_count: Integer;
begin
  accent_toggles := GetAccentToggles();

  { Add handlers to accent toggles }
  for accent_count:=0 to accent_toggles.Count -1 do
  begin
    (accent_toggles[accent_count] as TToggleBox).OnClick:= @AccentToggleClick;
  end;
end;

procedure TMainForm.FormShow(Sender: TObject);
begin
end;


procedure TMainForm.LocalButtonClick(Sender: TObject);
begin
  self.GetAccentToggles();
end;

procedure TMainForm.MainRTFChange(Sender: TObject);
begin

end;

procedure TMainForm.MainToolbarClick(Sender: TObject);
begin

end;

procedure TMainForm.PasteMenuItemClick(Sender: TObject);
begin
  if MainRTF.CanPaste then
    MainRTF.PasteFromClipboard;
end;

procedure TMainForm.PreviewEditChange(Sender: TObject);
begin
  BuildCharacter();
end;

procedure TMainForm.RedoMenuItemClick(Sender: TObject);
begin
  if MainRTF.CanRedo then
    MainRTF.Redo;
end;

procedure TMainForm.SelectAllMenuItemClick(Sender: TObject);
begin
  MainRTF.SelectAll;
end;

procedure TMainForm.UndoMenuItemClick(Sender: TObject);
begin
  if MainRTF.CanUndo then
    MainRTF.Undo;
end;

procedure TMainForm.BackgroundColorMenuItemClick(Sender: TObject);
begin
  if ColorDialog1.Execute then
    MainRTF.Color:= ColorDialog1.Color;
end;

procedure TMainForm.CharacterPreviewButtonClick(Sender: TObject);
begin
  InsertText(CharacterPreviewButton.Caption);
end;

procedure TMainForm.ClearMenuItemClick(Sender: TObject);
begin
  MainRTF.Clear;
end;

procedure TMainForm.CopyMenuItemClick(Sender: TObject);
begin
  MainRTF.CopyToClipboard;
end;

procedure TMainForm.CutMenuItemClick(Sender: TObject);
begin
  MainRTF.CutToClipboard;
end;

procedure TMainForm.AboutMenuItemClick(Sender: TObject);
begin
  AboutForm:=TAboutForm.Create(Nil);
  AboutForm.ShowModal;
  FreeAndNil(AboutForm);
end;

end.
