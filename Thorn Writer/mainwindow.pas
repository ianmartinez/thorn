unit MainWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  ExtCtrls, ComCtrls, StdCtrls, EditBtn, Interfaces, FileTypes, Clipbrd,
  RichMemo, SynEdit, AboutWindow, StartWindow, Contnrs, LCLIntf, Types;

type
  { TMainForm }

  TMainForm = class(TForm)
    FileFlowPanel: TFlowPanel;
    ConsonantsFlowPanel: TFlowPanel;
    CommonFlowPanel: TFlowPanel;
    CommonScrollBox: TScrollBox;
    FormatSep2: TMenuItem;
    FontMenuItem: TMenuItem;
    CharacterMenu: TPopupMenu;
    DeleteMenuItem: TMenuItem;
    CharacterSep1: TMenuItem;
    DecreaseSizeMenuItem: TMenuItem;
    IncreaseSizeMenuItem: TMenuItem;
    FormatSep1: TMenuItem;
    MainMemo: TRichMemo;
    RemoveDuplicatesMenuItem: TMenuItem;
    MoveToFileMenuItem: TMenuItem;
    MoveToLocalMenuItem: TMenuItem;
    CopyToEditorMenuItem: TMenuItem;
    CharacterSep2: TMenuItem;
    TonesFlowPanel: TFlowPanel;
    TonesScrollBox: TScrollBox;
    OtherFlowPanel: TFlowPanel;
    OtherScrollBox: TScrollBox;
    IncreaseSizeToolbarButton: TToolButton;
    DecreaseSizeToolbarButton: TToolButton;
    VowelsFlowPanel: TFlowPanel;
    VowelsScrollBox: TScrollBox;
    AffricatesFlowPanel: TFlowPanel;
    AffricatesScrollBox: TScrollBox;
    LocalFlowPanel: TFlowPanel;
    LocalScrollBox: TScrollBox;
    ConsonantsScrollBox: TScrollBox;
    FileScrollBox: TScrollBox;
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
    CopyMenuItem: TMenuItem;
    CutMenuItem: TMenuItem;
    EditSep2: TMenuItem;
    DisplayMenu: TMenuItem;
    FontColorMenuItem: TMenuItem;
    BackgroundColorMenuItem: TMenuItem;
    HelpMenu: TMenuItem;
    AboutMenuItem: TMenuItem;
    FontToolbarButton: TToolButton;
    PasteTextToolbarButton: TToolButton;
    SelectAllMenuItem: TMenuItem;
    ClearMenuItem: TMenuItem;
    PasteMenuItem: TMenuItem;
    CopyToolbarButton: TToolButton;
    CutToolbarButton: TToolButton;
    PasteToolbarButton: TToolButton;
    ToolButton3: TToolButton;
    PreviewEdit: TEdit;
    IPACategoriesTabs: TPageControl;
    AccentsGroup: TRadioGroup;
    FileTabSheet: TTabSheet;
    LocalTabSheet: TTabSheet;
    CommonTabSheet: TTabSheet;
    IPATabSheet: TTabSheet;
    ConsonantsTabSheet: TTabSheet;
    AffricatesTabSheet: TTabSheet;
    VowelsTabSheet: TTabSheet;
    TonesTabSheet: TTabSheet;
    OtherTabSheet: TTabSheet;
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
    procedure AffricatesFlowPanelClick(Sender: TObject);
    procedure AuthorEditChange(Sender: TObject);
    procedure BackgroundColorMenuItemClick(Sender: TObject);
    procedure CharacterMenuPopup(Sender: TObject);
    procedure CharacterPreviewButtonClick(Sender: TObject);
    procedure CharacterSheetContextPopup(Sender: TObject; MousePos: TPoint;
      var Handled: Boolean);
    procedure ClearMenuItemClick(Sender: TObject);
    procedure CopyMenuItemClick(Sender: TObject);
    procedure CopyToEditorMenuItemClick(Sender: TObject);
    procedure CutMenuItemClick(Sender: TObject);
    procedure DecreaseSizeMenuItemClick(Sender: TObject);
    procedure DeleteMenuItemClick(Sender: TObject);
    procedure DescriptionMemoChange(Sender: TObject);
    procedure EditSep1Click(Sender: TObject);
    procedure ExitMenuItemClick(Sender: TObject);
    procedure FileButtonClick(Sender: TObject);
    procedure FontColorMenuItemClick(Sender: TObject);
    procedure FontMenuItemClick(Sender: TObject);
    procedure FontToolbarButtonClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var CloseAction: TCloseAction);
    procedure FormCloseQuery(Sender: TObject; var CanClose: boolean);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure IncreaseSizeMenuItemClick(Sender: TObject);
    procedure LocalButtonClick(Sender: TObject);
    procedure MainMemoChange(Sender: TObject);
    procedure MainRTFChange(Sender: TObject);
    procedure MoveToFileMenuItemClick(Sender: TObject);
    procedure MoveToLocalMenuItemClick(Sender: TObject);
    procedure NewMenuItemClick(Sender: TObject);
    procedure OpenMenuItemClick(Sender: TObject);
    procedure IPACategoriesTabsChange(Sender: TObject);
    procedure PasteMenuItemClick(Sender: TObject);
    procedure PreviewEditChange(Sender: TObject);
    procedure RedoMenuItemClick(Sender: TObject);
    procedure RemoveDuplicatesMenuItemClick(Sender: TObject);
    procedure SaveAsMenuItemClick(Sender: TObject);
    procedure SaveMenuItemClick(Sender: TObject);
    procedure SelectAllMenuItemClick(Sender: TObject);
    procedure TitleEditChange(Sender: TObject);
    procedure UndoMenuItemClick(Sender: TObject);
    procedure AccentToggleClick(Sender: TObject);
    procedure WebsiteEditChange(Sender: TObject);
    procedure WebsiteGoButtonClick(Sender: TObject);

    procedure BuildCharacter();
    procedure InsertText(txt: string);
    procedure CreateButton(button_parent: TComponent; button_caption: string);
    procedure UpdateFileCharacters();
    procedure UpdateLocalCharacters();
    procedure CharacterButtonHandler(Sender: TObject);
    procedure SaveDisplay();
    procedure ClearDisplay();
    procedure RenderDisplay();
    function GetAccentToggles() : TComponentList;
    function SmartReplace(input: string) : string;
    function CharsFromFile(path: string) : CharArray;

  private
    { private declarations }
    accent_toggles: TComponentList;
  public
    { public declarations }
  end;

var
  MainForm: TMainForm;
  OpenFile: ThornWriterFile;
  SettingsFile: ThornWriterSettings;
  Modified: Boolean = false;
  FileLocation: String;
  StartUpFile: String;

implementation
{$R *.lfm}

function ColorToHex(Color : TColor) : string;
begin
   Result :=
     IntToHex(GetRValue(ColorToRGB(Color)), 2) +
     IntToHex(GetGValue(ColorToRGB(Color)), 2) +
     IntToHex(GetBValue(ColorToRGB(Color)), 2) ;
end;

function HexToColor(sColor : string) : TColor;
begin
   Result :=
     RGB(
       StrToInt('$'+Copy(sColor, 1, 2)),
       StrToInt('$'+Copy(sColor, 3, 2)),
       StrToInt('$'+Copy(sColor, 5, 2))
     );
end;

procedure TMainForm.SaveDisplay();
begin
  OpenFile.TextDisplay.BackgroundColor:= ColorToHex(MainMemo.Color);
  OpenFile.TextDisplay.FontColor:= ColorToHex(MainMemo.Font.Color);
  OpenFile.TextDisplay.FontName:= MainMemo.Font.Name;
  OpenFile.TextDisplay.FontSize:= MainMemo.Font.Size;
  OpenFile.TextDisplay.FontBold:= MainMemo.Font.Bold;
  OpenFile.TextDisplay.FontItalic:= MainMemo.Font.Italic;
  OpenFile.TextDisplay.FontUnderline:= MainMemo.Font.Underline;
  OpenFile.TextDisplay.FontStrike:= MainMemo.Font.StrikeThrough;
end;

procedure TMainForm.ClearDisplay();
begin
  OpenFile.TextDisplay.BackgroundColor:= ColorToHex(clWhite);
  OpenFile.TextDisplay.FontColor:= ColorToHex(clBlack);
  OpenFile.TextDisplay.FontName:= DEFAULT_FONT;
  OpenFile.TextDisplay.FontSize:= 12;
  OpenFile.TextDisplay.FontBold:= false;
  OpenFile.TextDisplay.FontItalic:= false;
  OpenFile.TextDisplay.FontUnderline:= false;
  OpenFile.TextDisplay.FontStrike:= false;

  RenderDisplay();
end;

procedure TMainForm.RenderDisplay();
begin
  MainMemo.Color:= HexToColor(OpenFile.TextDisplay.BackgroundColor);
  MainMemo.Font.Color:= HexToColor(OpenFile.TextDisplay.FontColor);
  MainMemo.Font.Name:= OpenFile.TextDisplay.FontName;
  MainMemo.Font.Size:= OpenFile.TextDisplay.FontSize;
  MainMemo.Font.Bold:= OpenFile.TextDisplay.FontBold;
  MainMemo.Font.Italic:= OpenFile.TextDisplay.FontItalic;
  MainMemo.Font.Underline:= OpenFile.TextDisplay.FontUnderline;
  MainMemo.Font.StrikeThrough:= OpenFile.TextDisplay.FontStrike;
end;

function TMainForm.CharsFromFile(path: string) : CharArray;
var
  f_stream: TFileStream;
  f_list: TStringList;
  temp : CharArray;
  char_pos: Integer;
begin
  try
    f_list := TStringList.Create;
    f_stream:= TFileStream.Create(path, fmShareDenyNone);
    f_list.LoadFromStream(f_stream);
    temp := f_list.Text.Split(UNIX_LINE,TStringSplitOptions.ExcludeEmpty);

    for char_pos:= 0 to Length(temp)-1 do
    begin
      temp[char_pos]:= StringReplace(StringReplace(temp[char_pos], #10, '', [rfReplaceAll]), #13, '', [rfReplaceAll]);
    end;

    Result:= temp;
  finally
    f_stream.Free();
    f_list.Free();
  end;
end;

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
  for accent_count := 0 to accents.Count -1 do base := base + accents[accent_count];

  CharacterPreviewButton.Caption:= base;
end;

procedure TMainForm.InsertText(txt: string);
var old_sel_pos: Integer;
begin
  old_sel_pos:= MainMemo.SelStart;
  MainMemo.SelText := txt;
  MainMemo.SelStart:= old_sel_pos;
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
  btn.Width:=40;
  btn.Height:=40;
  btn.OnClick:=@CharacterButtonHandler;
  btn.PopupMenu:=CharacterMenu;
  btn.Font.Bold:=False;
  btn.Font.Size:=10;
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

procedure TMainForm.UpdateLocalCharacters();
var
  control_count: Integer;
  char_count: Integer;
  control: TControl;
begin
  for control_count:= LocalFlowPanel.ControlCount - 1 downto 0 do
  begin
    control := LocalFlowPanel.Controls[control_count];
    control.Free;
  end;

  for char_count:=0 to Length(SettingsFile.CustomCharacters)-1 do
  begin
       CreateButton(LocalFlowPanel,SettingsFile.CustomCharacters[char_count]);
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
  OpenFile.CustomCharacters := AddCharacterToCharArray(OpenFile.CustomCharacters,CharacterPreviewButton.Caption);
  UpdateFileCharacters();
end;

procedure TMainForm.FontColorMenuItemClick(Sender: TObject);
begin
  ColorDialog1.Color:= MainMemo.Font.Color;
  if ColorDialog1.Execute then
  begin
     MainMemo.Font.Color:=ColorDialog1.Color;
     Modified := true;
  end;

  SaveDisplay();
end;

procedure TMainForm.FontMenuItemClick(Sender: TObject);
begin
  FontDialog1.Font:= MainMemo.Font;
  if FontDialog1.Execute then
  begin
     MainMemo.Font:= FontDialog1.Font;
     Modified := true;
  end;
  SaveDisplay();
end;

procedure TMainForm.FontToolbarButtonClick(Sender: TObject);
begin

end;

procedure TMainForm.FormClose(Sender: TObject; var CloseAction: TCloseAction);
begin
    SaveWriterSettings(SettingsFile,'settings.ini');

    FreeAndNil(MainForm);
    Application.Terminate;
end;

procedure TMainForm.FormCloseQuery(Sender: TObject; var CanClose: boolean);
var
  diag_result : Integer;
begin
  if Modified then
  begin
      diag_result := MessageDlg('The file you are working on has unsaved changes. Do you want to save before exiting?', mtWarning, [mbYes,mbNo,mbCancel], 0);
      if diag_result= mrCancel then CanClose := false;
      if diag_result= mrNo then CanClose := true;

      if diag_result= mrYes then
      begin
          SaveMenuItemClick(sender);
          CanClose := true;
      end;
  end;
end;

procedure TMainForm.FormCreate(Sender: TObject);
var
  accent_count, char_pos: Integer;

  local_chars, common_chars, consonants_chars, affricates_chars,
  vowels_chars, tones_chars, other_chars: CharArray;
begin
  accent_toggles := GetAccentToggles();

  { Add handlers to accent toggles }
  for accent_count:=0 to accent_toggles.Count -1 do
  begin
    (accent_toggles[accent_count] as TToggleBox).OnClick:= @AccentToggleClick;
  end;

  { Load characters from resources folder }
  local_chars:= CharsFromFile('resources/local.txt');
  for char_pos:= 0 to Length(local_chars) -1 do
  begin
     if not local_chars[char_pos].Trim.Equals('') then CreateButton(LocalFlowPanel,local_chars[char_pos]);
  end;

  common_chars:= CharsFromFile('resources/common.txt');
  for char_pos:= 0 to Length(common_chars) -1 do
  begin
     if not common_chars[char_pos].Trim.Equals('') then CreateButton(CommonFlowPanel,common_chars[char_pos]);
  end;

  consonants_chars:= CharsFromFile('resources/consonants.txt');
  for char_pos:= 0 to Length(consonants_chars) -1 do
  begin
     if not consonants_chars[char_pos].Trim.Equals('') then CreateButton(ConsonantsFlowPanel,consonants_chars[char_pos]);
  end;

  affricates_chars:= CharsFromFile('resources/affricates.txt');
  for char_pos:= 0 to Length(affricates_chars) -1 do
  begin
     if not affricates_chars[char_pos].Trim.Equals('') then CreateButton(AffricatesFlowPanel,affricates_chars[char_pos]);
  end;

  vowels_chars:= CharsFromFile('resources/vowels.txt');
  for char_pos:= 0 to Length(vowels_chars) -1 do
  begin
     if not vowels_chars[char_pos].Trim.Equals('') then CreateButton(VowelsFlowPanel,vowels_chars[char_pos]);
  end;

  tones_chars:= CharsFromFile('resources/tones_intonation.txt');
  for char_pos:= 0 to Length(tones_chars) -1 do
  begin
     if not tones_chars[char_pos].Trim.Equals('') then CreateButton(TonesFlowPanel,tones_chars[char_pos]);
  end;

  other_chars:= CharsFromFile('resources/other.txt');
  for char_pos:= 0 to Length(other_chars) -1 do
  begin
     if not other_chars[char_pos].Trim.Equals('') then CreateButton(OtherFlowPanel,other_chars[char_pos]);
  end;

  SettingsFile:= ReadWriterSettings('settings.ini');
  UpdateLocalCharacters();

  Modified:= false;
end;

procedure TMainForm.FormShow(Sender: TObject);
begin
  if SettingsFile.ShowStartScreen then
  begin
    Modified:= false;
    StartUpForm:=TStartUpForm.Create(Nil);
    StartUpForm.Init(SettingsFile);
    StartUpForm.Visible:=false;
    StartUpForm.ShowModal;

    StartUpFile:= StartUpForm.FileToOpen;
    SettingsFile:= StartUpForm.Settings;
    NewMenuItemClick(sender);
    if StartUpFile='|OpenFile' then
    begin
      OpenMenuItemClick(sender);
    end;

    if StartUpFile='|NewFile' then
    begin
      NewMenuItemClick(sender);
    end;

    if (StartUpFile <> '') or (StartUpFile <> '|OpenFile') or (StartUpFile <> '|NewFile') then
    begin
      if FileExists(StartUpFile) then
      begin
        OpenFile:= ReadWriterFile(StartUpFile);
        TitleEdit.Text:= OpenFile.Title;
        AuthorEdit.Text:= OpenFile.Author;
        WebsiteEdit.Text:= OpenFile.Website;
        DescriptionMemo.Text:= OpenFile.Description;

        UpdateFileCharacters();

        MainMemo.Text := OpenFile.Text;
        RenderDisplay();

        FileLocation := StartUpFile;
        SettingsFile.RecentFiles:= AddCharacterToCharArray(SettingsFile.RecentFiles, StartUpFile);
        Modified := false;
      end;
    end;

    FreeAndNil(StartUpForm);
  end;
end;

procedure TMainForm.IncreaseSizeMenuItemClick(Sender: TObject);
begin
  MainMemo.Font.Size:= MainMemo.Font.Size + 1;
  Modified := true;
  SaveDisplay();
end;

procedure TMainForm.LocalButtonClick(Sender: TObject);
begin
  SettingsFile.CustomCharacters := AddCharacterToCharArray(SettingsFile.CustomCharacters,CharacterPreviewButton.Caption);
  UpdateLocalCharacters();
end;

procedure TMainForm.MainMemoChange(Sender: TObject);
begin

end;

procedure TMainForm.MainRTFChange(Sender: TObject);
begin
  Modified := true;
end;

procedure TMainForm.MoveToFileMenuItemClick(Sender: TObject);
var btn: TButton;
begin
  btn:= (CharacterMenu.PopupComponent as TButton);
  OpenFile.CustomCharacters := AddCharacterToCharArray(OpenFile.CustomCharacters,btn.Caption);
  UpdateFileCharacters();
end;

procedure TMainForm.MoveToLocalMenuItemClick(Sender: TObject);
var btn: TButton;
begin
  btn:= (CharacterMenu.PopupComponent as TButton);
  SettingsFile.CustomCharacters := AddCharacterToCharArray(SettingsFile.CustomCharacters,btn.Caption);
  UpdateLocalCharacters();
end;

procedure TMainForm.NewMenuItemClick(Sender: TObject);
var
  diag_result : Integer;
begin

  if Modified then
  begin
      diag_result := MessageDlg('The file you are working on has unsaved changes. Are you sure you want to erase it?', mtWarning, [mbYes,mbNo,mbCancel], 0);
      if diag_result= mrCancel then exit;
      if diag_result= mrNo then exit;
  end;

  MainMemo.Clear;
  AuthorEdit.Clear;
  OpenFile.Author:= '';
  MainMemo.Color:= clWhite;
  OpenFile.CustomCharacters:= nil;
  OpenFile.PageCount:= 0;
  DescriptionMemo.Clear;
  OpenFile.Description:= '';
  TitleEdit.Clear;
  OpenFile.Title:='';
  WebsiteEdit.Clear;
  OpenFile.Website:='';
  Openfile.WriterVersion:= WRITER_VERSION;
  ClearDisplay();
  UpdateFileCharacters();

  Modified:= false;
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

    MainMemo.Text := OpenFile.Text;
    RenderDisplay();

    FileLocation := OpenDialog1.FileName;
    SettingsFile.RecentFiles:= AddCharacterToCharArray(SettingsFile.RecentFiles, OpenDialog1.FileName);
    Modified := false;
  end;
end;

procedure TMainForm.IPACategoriesTabsChange(Sender: TObject);
begin

end;

procedure TMainForm.PasteMenuItemClick(Sender: TObject);
begin
    InsertText(clipboard.AsText);
end;

procedure TMainForm.PreviewEditChange(Sender: TObject);
begin
  BuildCharacter();
end;

procedure TMainForm.RedoMenuItemClick(Sender: TObject);
begin
  if MainMemo.CanRedo then
    MainMemo.Redo;
end;

procedure TMainForm.RemoveDuplicatesMenuItemClick(Sender: TObject);
var
  btn: TButton;
  flow: TFlowPanel;
  btn_index: Integer;
  char_pos: Integer;
begin
  btn:= (CharacterMenu.PopupComponent as TButton);
  flow:= (btn.Parent as TFlowPanel);
  btn_index:= flow.GetControlIndex(btn);

  if flow = FileFlowPanel then
  begin
    for char_pos:= Length(OpenFile.CustomCharacters)-1 downto 0 do
    begin
      if (char_pos<>btn_index) and (OpenFile.CustomCharacters[char_pos].Equals(btn.Caption)) then
        OpenFile.CustomCharacters:= RemoveCharacterFromCharArrayAt(OpenFile.CustomCharacters, char_pos);
    end;
  end
  else if flow = LocalFlowPanel then
  begin
    for char_pos:= Length(SettingsFile.CustomCharacters)-1 downto 0 do
    begin
      if (char_pos<>btn_index) and (SettingsFile.CustomCharacters[char_pos].Equals(btn.Caption)) then
        SettingsFile.CustomCharacters:= RemoveCharacterFromCharArrayAt(SettingsFile.CustomCharacters, char_pos);
    end;
  end;

  UpdateLocalCharacters();
  UpdateFileCharacters();
end;

procedure TMainForm.SaveAsMenuItemClick(Sender: TObject);
begin
  OpenFile.Text := MainMemo.Text;
  SaveDisplay();
  OpenFile.WriterVersion := WRITER_VERSION;

  if SaveDialog1.Execute then
  begin
     self.Cursor:=crHourGlass;

     SettingsFile.RecentFiles:= AddCharacterToCharArray(SettingsFile.RecentFiles, SaveDialog1.FileName);
     FileLocation := SaveDialog1.FileName;
     Modified := false;
     SaveWriterFile(OpenFile,FileLocation);

     self.Cursor:=crDefault;
  end;
end;

procedure TMainForm.SaveMenuItemClick(Sender: TObject);
begin
  OpenFile.Text := MainMemo.Text;
  SaveDisplay();
  OpenFile.WriterVersion := WRITER_VERSION;

  if not FileLocation.Equals('') then
  begin
    self.Cursor:=crHourGlass;

    SaveWriterFile(OpenFile,FileLocation);
    Modified := false;

    self.Cursor:=crDefault;
  end
  else
    SaveAsMenuItemClick(Sender);
end;

procedure TMainForm.SelectAllMenuItemClick(Sender: TObject);
begin
  MainMemo.SelectAll;
end;

procedure TMainForm.TitleEditChange(Sender: TObject);
begin
  OpenFile.Title := TitleEdit.Text;
  Modified := true;
end;

procedure TMainForm.UndoMenuItemClick(Sender: TObject);
begin
  if MainMemo.CanUndo then
    MainMemo.Undo;
end;

procedure TMainForm.BackgroundColorMenuItemClick(Sender: TObject);
begin
  ColorDialog1.Color := MainMemo.Color;
  if ColorDialog1.Execute then
  begin
    MainMemo.Color:= ColorDialog1.Color;
    Modified := true;
  end;

  SaveDisplay();
end;

procedure TMainForm.CharacterMenuPopup(Sender: TObject);
var
  btn: TButton;
  flow: TFlowPanel;
begin
  btn:= (CharacterMenu.PopupComponent as TButton);
  flow:= (btn.Parent as TFlowPanel);

  if flow = FileFlowPanel then
  begin
    CharacterSep2.Visible:=true;
    RemoveDuplicatesMenuItem.Visible:=true;
    DeleteMenuItem.Visible:=true;
    MoveToFileMenuItem.Visible:=false;
    MoveToLocalMenuItem.Visible:=true;
  end
  else if flow = LocalFlowPanel then
  begin
    CharacterSep2.Visible:=true;
    RemoveDuplicatesMenuItem.Visible:=true;
    DeleteMenuItem.Visible:=true;
    MoveToFileMenuItem.Visible:=true;
    MoveToLocalMenuItem.Visible:=false;
  end
  else
  begin
    CharacterSep2.Visible:=false;
    RemoveDuplicatesMenuItem.Visible:=false;
    DeleteMenuItem.Visible:=false;
    MoveToFileMenuItem.Visible:=true;
    MoveToLocalMenuItem.Visible:=true;
  end;
end;

procedure TMainForm.CharacterPreviewButtonClick(Sender: TObject);
begin
  InsertText(CharacterPreviewButton.Caption);
end;
procedure TMainForm.CharacterSheetContextPopup(Sender: TObject;
  MousePos: TPoint; var Handled: Boolean);
begin

end;

procedure TMainForm.ClearMenuItemClick(Sender: TObject);
begin
  MainMemo.Clear;
end;

procedure TMainForm.CopyMenuItemClick(Sender: TObject);
begin
  MainMemo.CopyToClipboard;
end;

procedure TMainForm.CopyToEditorMenuItemClick(Sender: TObject);
var btn: TButton;
begin
  btn:= (CharacterMenu.PopupComponent as TButton);
  PreviewEdit.Text:= btn.Caption;
end;

procedure TMainForm.CutMenuItemClick(Sender: TObject);
begin
  MainMemo.CutToClipboard;
end;

procedure TMainForm.DecreaseSizeMenuItemClick(Sender: TObject);
begin
  MainMemo.Font.Size:= MainMemo.Font.Size - 1;
  Modified := true;
  SaveDisplay();
end;

procedure TMainForm.DeleteMenuItemClick(Sender: TObject);
var
  btn: TButton;
  flow: TFlowPanel;
begin
  btn:= (CharacterMenu.PopupComponent as TButton);
  flow:= (btn.Parent as TFlowPanel);

  if flow = FileFlowPanel then
  begin
    OpenFile.CustomCharacters:= RemoveCharacterFromCharArrayAt(OpenFile.CustomCharacters, flow.GetControlIndex(btn));
    UpdateFileCharacters();
  end
  else if flow = LocalFlowPanel then
  begin
    SettingsFile.CustomCharacters:= RemoveCharacterFromCharArrayAt(SettingsFile.CustomCharacters, flow.GetControlIndex(btn));
    UpdateLocalCharacters();
  end
end;

procedure TMainForm.DescriptionMemoChange(Sender: TObject);
begin
  OpenFile.Description := DescriptionMemo.Text;
  Modified := true;
end;

procedure TMainForm.EditSep1Click(Sender: TObject);
begin

end;

procedure TMainForm.AboutMenuItemClick(Sender: TObject);
begin
  AboutForm:=TAboutForm.Create(Nil);
  AboutForm.ShowModal;
  FreeAndNil(AboutForm);
end;

procedure TMainForm.AffricatesFlowPanelClick(Sender: TObject);
begin

end;

procedure TMainForm.AuthorEditChange(Sender: TObject);
begin
  OpenFile.Author :=  AuthorEdit.Text;
  Modified := true;
end;

end.
