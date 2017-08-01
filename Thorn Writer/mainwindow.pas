unit MainWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  ExtCtrls, ComCtrls, StdCtrls, EditBtn, Interfaces, FileTypes, Clipbrd,
  RichMemo, AboutWindow, Contnrs, LCLIntf;

type

  { TMainForm }

  TMainForm = class(TForm)
    FileFlowPanel: TFlowPanel;
    CommonFlowPanel: TFlowPanel;
    ConsonantsFlowPanel: TFlowPanel;
    AffricatesFlowPanel: TFlowPanel;
    OtherFlowPanel: TFlowPanel;
    TonesFlowPanel: TFlowPanel;
    VowelsFlowPanel: TFlowPanel;
    LocalFlowPanel: TFlowPanel;
    FontDialog1: TFontDialog;
    OpenDialog1: TOpenDialog;
    SaveDialog1: TSaveDialog;
    SmartReplaceCheck: TCheckBox;
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
    ColorsMenu: TMenuItem;
    FontColorMenuItem: TMenuItem;
    HighlightColorMenuItem: TMenuItem;
    BackgroundColorMenuItem: TMenuItem;
    HelpMenu: TMenuItem;
    AboutMenuItem: TMenuItem;
    PasteTextMenuItem: TMenuItem;
    ToolButton4: TToolButton;
    LeftToolbarButton: TToolButton;
    CenterToolbarButton: TToolButton;
    RightToolbarButton: TToolButton;
    ToolButton5: TToolButton;
    FontToolbarButton: TToolButton;
    PasteTextToolbarButton: TToolButton;
    JustifyToolbarButton: TToolButton;
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
    procedure AuthorEditChange(Sender: TObject);
    procedure BackgroundColorMenuItemClick(Sender: TObject);
    procedure CenterToolbarButtonClick(Sender: TObject);
    procedure CharacterGalleryTabsChange(Sender: TObject);
    procedure CharacterPreviewButtonClick(Sender: TObject);
    procedure ClearMenuItemClick(Sender: TObject);
    procedure CopyMenuItemClick(Sender: TObject);
    procedure CutMenuItemClick(Sender: TObject);
    procedure DescriptionMemoChange(Sender: TObject);
    procedure ExitMenuItemClick(Sender: TObject);
    procedure FileButtonClick(Sender: TObject);
    procedure FontColorMenuItemClick(Sender: TObject);
    procedure FontMenuItemClick(Sender: TObject);
    procedure FontToolbarButtonClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var CloseAction: TCloseAction);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure HighlightColorMenuItemClick(Sender: TObject);
    procedure JustifyToolbarButtonClick(Sender: TObject);
    procedure LeftToolbarButtonClick(Sender: TObject);
    procedure LocalButtonClick(Sender: TObject);
    procedure MainRTFChange(Sender: TObject);
    procedure MainToolbarClick(Sender: TObject);
    procedure NewMenuItemClick(Sender: TObject);
    procedure OpenMenuItemClick(Sender: TObject);
    procedure PageControl2Change(Sender: TObject);
    procedure PasteMenuItemClick(Sender: TObject);
    procedure PasteTextMenuItemClick(Sender: TObject);
    procedure PreviewEditChange(Sender: TObject);
    procedure RedoMenuItemClick(Sender: TObject);
    procedure RightToolbarButtonClick(Sender: TObject);
    procedure SaveAsMenuItemClick(Sender: TObject);
    procedure SaveMenuItemClick(Sender: TObject);
    procedure SaveToolbarButtonClick(Sender: TObject);
    procedure SelectAllMenuItemClick(Sender: TObject);
    procedure TitleEditChange(Sender: TObject);
    procedure UndoMenuItemClick(Sender: TObject);
    procedure AccentToggleClick(Sender: TObject);

    procedure BuildCharacter();
    procedure InsertText(txt: string);
    procedure CreateButton(button_parent: TComponent; button_caption: string);
    procedure UpdateFileCharacters();
    procedure CharacterButtonHandler(Sender: TObject);
    function GetAccentToggles() : TComponentList;
    function SmartReplace(input: string) : string;
    procedure WebsiteEditChange(Sender: TObject);
    procedure WebsiteGoButtonClick(Sender: TObject);
  private
    { private declarations }

    accent_toggles: TComponentList;
  public
    { public declarations }
  end;

var
  MainForm: TMainForm;
  OpenFile: ThornWriterFile;
  Modified: Boolean = false;
  FileLocation: String;

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
  MainRTF.SelStart:= old_sel_pos;
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

procedure TMainForm.CharacterButtonHandler(Sender: TObject);
begin
     InsertText((Sender as TButton).Caption);
end;

procedure TMainForm.CreateButton(button_parent: TComponent; button_caption: string);
var btn: TButton;
begin
  btn:= TButton.Create(button_parent);
  btn.Parent:=button_parent as TWinControl;
  btn.Caption:=button_caption;
  btn.Width:=32;
  btn.Height:=32;
  btn.OnClick:=@CharacterButtonHandler;
  btn.Font.Bold:=True;
  btn.Font.Size:=8;
end;

procedure TMainForm.UpdateFileCharacters();
var
  control_count: Integer;
  char_count: Integer;
  control: TControl;
begin
  for control_count:=FileFlowPanel.ControlCount - 1 downto 0 do
  begin
    control := FileFlowPanel.Controls[control_count];
    control.Free;
  end;

  for char_count:=0 to Length(OpenFile.CustomCharacters)-1 do
  begin
       CreateButton(FileFlowPanel,OpenFile.CustomCharacters[char_count]);
  end;

  Modified := true;
end;

function TMainForm.SmartReplace(input: string) : string;
begin

end;

procedure TMainForm.WebsiteEditChange(Sender: TObject);
begin
  OpenFile.Website :=  WebsiteEdit.Text;
  Modified := true;
end;

procedure TMainForm.WebsiteGoButtonClick(Sender: TObject);
var
  formattedURL: string;
begin
     formattedURL:= LowerCase(WebsiteEdit.Text);

     if not formattedURL.StartsWith('http://') then
       formattedURL := 'http://' + formattedURL;
     OpenURL(formattedURL);
end;

procedure TMainForm.ExitMenuItemClick(Sender: TObject);
begin
  FreeAndNil(MainForm);
  Application.Terminate;
end;

procedure TMainForm.FileButtonClick(Sender: TObject);
begin
  OpenFile.CustomCharacters := AddCharacterToWriterFile(OpenFile,CharacterPreviewButton.Caption);
  UpdateFileCharacters();
end;

procedure TMainForm.FontColorMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.FontMenuItemClick(Sender: TObject);
var old_params: TFontParams;
begin
  {MainRTF.GetTextAttributes(MainRTF.SelStart,old_params);}

  if FontDialog1.Execute then
  begin
     MainRTF.SetTextAttributes(MainRTF.SelStart, MainRTF.SelLength, FontDialog1.Font);
  end;
end;

procedure TMainForm.FontToolbarButtonClick(Sender: TObject);
begin
end;

procedure TMainForm.FormClose(Sender: TObject; var CloseAction: TCloseAction);
begin
  if Modified then
  begin

  end;

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

procedure TMainForm.HighlightColorMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.JustifyToolbarButtonClick(Sender: TObject);
begin
  MainRTF.SetParaAlignment(MainRTF.SelStart,MainRTF.SelLength, RichMemo.paJustify);
end;

procedure TMainForm.LeftToolbarButtonClick(Sender: TObject);
begin
  MainRTF.SetParaAlignment(MainRTF.SelStart,MainRTF.SelLength, RichMemo.paLeft);
end;

procedure TMainForm.LocalButtonClick(Sender: TObject);
begin
  self.GetAccentToggles();
end;

procedure TMainForm.MainRTFChange(Sender: TObject);
begin
  Modified := true;
end;

procedure TMainForm.MainToolbarClick(Sender: TObject);
begin

end;

procedure TMainForm.NewMenuItemClick(Sender: TObject);
begin

end;

procedure TMainForm.OpenMenuItemClick(Sender: TObject);
begin
  if OpenDialog1.Execute then
  begin
    OpenFile:= ReadWriterFile(OpenDialog1.FileName);
    TitleEdit.Text:= OpenFile.Title;
    AuthorEdit.Text:= OpenFile.Author;
    WebsiteEdit.Text:= OpenFile.Website;
    DescriptionMemo.Text:= OpenFile.Description;

    UpdateFileCharacters();

    MainRTF.Rtf := OpenFile.RtfData;
    if not OpenFile.BackgroundColor.Equals('') then
       MainRTF.Color := StringToColor(OpenFile.BackgroundColor);

    FileLocation := OpenDialog1.FileName;
    Modified := false;
  end;
end;

procedure TMainForm.PageControl2Change(Sender: TObject);
begin

end;

procedure TMainForm.PasteMenuItemClick(Sender: TObject);
begin
  if MainRTF.CanPaste then
    MainRTF.PasteFromClipboard;
end;

procedure TMainForm.PasteTextMenuItemClick(Sender: TObject);
begin
  InsertText(clipboard.AsText);
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

procedure TMainForm.RightToolbarButtonClick(Sender: TObject);
begin
  MainRTF.SetParaAlignment(MainRTF.SelStart,MainRTF.SelLength, RichMemo.paRight);
end;

procedure TMainForm.SaveAsMenuItemClick(Sender: TObject);
begin
  OpenFile.RtfData := MainRTF.Rtf;

  if SaveDialog1.Execute then
  begin
     FileLocation := SaveDialog1.FileName;
     Modified := false;
     SaveWriterFile(OpenFile,FileLocation);
  end;
end;

procedure TMainForm.SaveMenuItemClick(Sender: TObject);
begin
  OpenFile.RtfData := MainRTF.Rtf;

  if not FileLocation.Equals('') then
  begin
    SaveWriterFile(OpenFile,FileLocation);
    Modified := false;
  end
  else
    SaveAsMenuItemClick(Sender);
end;

procedure TMainForm.SaveToolbarButtonClick(Sender: TObject);
begin

end;

procedure TMainForm.SelectAllMenuItemClick(Sender: TObject);
begin
  MainRTF.SelectAll;
end;

procedure TMainForm.TitleEditChange(Sender: TObject);
begin
  OpenFile.Title := TitleEdit.Text;
  Modified := true;
end;

procedure TMainForm.UndoMenuItemClick(Sender: TObject);
begin
  if MainRTF.CanUndo then
    MainRTF.Undo;
end;

procedure TMainForm.BackgroundColorMenuItemClick(Sender: TObject);
begin
  if ColorDialog1.Execute then
  begin
    MainRTF.Color:= ColorDialog1.Color;
    Modified := true;
    OpenFile.BackgroundColor := ColorToString(MainRTF.Color);
  end;
end;

procedure TMainForm.CenterToolbarButtonClick(Sender: TObject);
begin

  MainRTF.SetParaAlignment(MainRTF.SelStart,MainRTF.SelLength, RichMemo.paCenter);
end;

procedure TMainForm.CharacterGalleryTabsChange(Sender: TObject);
begin

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

procedure TMainForm.DescriptionMemoChange(Sender: TObject);
begin
  OpenFile.Description := DescriptionMemo.Text;
  Modified := true;
end;

procedure TMainForm.AboutMenuItemClick(Sender: TObject);
begin
  AboutForm:=TAboutForm.Create(Nil);
  AboutForm.ShowModal;
  FreeAndNil(AboutForm);
end;

procedure TMainForm.AuthorEditChange(Sender: TObject);
begin
  OpenFile.Author :=  AuthorEdit.Text;
  Modified := true;
end;

end.
