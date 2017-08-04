unit MainWindow;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, Menus,
  ExtCtrls, ComCtrls, StdCtrls, EditBtn, Interfaces, FileTypes, Clipbrd,
  RichMemo, AboutWindow, StartWindow, Contnrs, LCLIntf, Types;

type

  { TMainForm }

  TMainForm = class(TForm)
    FileFlowPanel: TFlowPanel;
    ConsonantsFlowPanel: TFlowPanel;
    CommonFlowPanel: TFlowPanel;
    CommonScrollBox: TScrollBox;
    FormatSep1: TMenuItem;
    FontMenuItem: TMenuItem;
    CharacterMenu: TPopupMenu;
    DeleteMenuItem: TMenuItem;
    CharacterSep1: TMenuItem;
    RemoveDuplicatesMenuItem: TMenuItem;
    MoveToFileMenuItem: TMenuItem;
    MoveToLocalMenuItem: TMenuItem;
    CopyToEditorMenuItem: TMenuItem;
    CharacterSep2: TMenuItem;
    TonesFlowPanel: TFlowPanel;
    TonesScrollBox: TScrollBox;
    OtherFlowPanel: TFlowPanel;
    OtherScrollBox: TScrollBox;
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
    EditSep1: TMenuItem;
    CopyMenuItem: TMenuItem;
    CutMenuItem: TMenuItem;
    EditSep2: TMenuItem;
    FormatMenu: TMenuItem;
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
    UnderlineToolbarButton: TToolButton;
    UndoToolbarButton: TToolButton;
    UndoMenuItem: TMenuItem;
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
    procedure AffricatesFlowPanelClick(Sender: TObject);
    procedure AuthorEditChange(Sender: TObject);
    procedure BackgroundColorMenuItemClick(Sender: TObject);
    procedure BoldToolbarButtonClick(Sender: TObject);
    procedure CenterToolbarButtonClick(Sender: TObject);
    procedure CharacterGalleryTabsChange(Sender: TObject);
    procedure CharacterMenuPopup(Sender: TObject);
    procedure CharacterPreviewButtonClick(Sender: TObject);
    procedure CharacterSep1Click(Sender: TObject);
    procedure CharacterSep2Click(Sender: TObject);
    procedure CharacterSheetContextPopup(Sender: TObject; MousePos: TPoint;
      var Handled: Boolean);
    procedure ClearMenuItemClick(Sender: TObject);
    procedure CommonFlowPanelClick(Sender: TObject);
    procedure ConsonantsFlowPanelClick(Sender: TObject);
    procedure ConsonantsScrollBoxClick(Sender: TObject);
    procedure ConsonantsTabSheetContextPopup(Sender: TObject; MousePos: TPoint;
      var Handled: Boolean);
    procedure CopyMenuItemClick(Sender: TObject);
    procedure CopyToEditorMenuItemClick(Sender: TObject);
    procedure CutMenuItemClick(Sender: TObject);
    procedure DeleteMenuItemClick(Sender: TObject);
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
    procedure ItalicToolbarButtonClick(Sender: TObject);
    procedure JustifyToolbarButtonClick(Sender: TObject);
    procedure LeftToolbarButtonClick(Sender: TObject);
    procedure LocalButtonClick(Sender: TObject);
    procedure MainRTFChange(Sender: TObject);
    procedure MainRTFSelectionChange(Sender: TObject);
    procedure MoveToFileMenuItemClick(Sender: TObject);
    procedure MoveToLocalMenuItemClick(Sender: TObject);
    procedure NewMenuItemClick(Sender: TObject);
    procedure OpenMenuItemClick(Sender: TObject);
    procedure IPACategoriesTabsChange(Sender: TObject);
    procedure PasteMenuItemClick(Sender: TObject);
    procedure PasteTextMenuItemClick(Sender: TObject);
    procedure PreviewEditChange(Sender: TObject);
    procedure RedoMenuItemClick(Sender: TObject);
    procedure RemoveDuplicatesMenuItemClick(Sender: TObject);
    procedure RightToolbarButtonClick(Sender: TObject);
    procedure SaveAsMenuItemClick(Sender: TObject);
    procedure SaveMenuItemClick(Sender: TObject);
    procedure SelectAllMenuItemClick(Sender: TObject);
    procedure TitleEditChange(Sender: TObject);
    procedure UnderlineToolbarButtonClick(Sender: TObject);
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
  btn.Width:=48;
  btn.Height:=48;
  btn.OnClick:=@CharacterButtonHandler;
  btn.PopupMenu:=CharacterMenu;
  btn.Font.Bold:=False;
  btn.Font.Size:=14;
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
var old_params: TFontParams; old_font: TFont;
begin
  MainRTF.GetTextAttributes(MainRTF.SelStart,old_params);

  old_font := TFont.Create;
  old_font.Name := old_params.Name;
  old_font.Size := old_params.Size;
  old_font.Style := old_params.Style;
  old_font.Color := old_params.Color;

  ColorDialog1.Color := old_font.Color;
  if ColorDialog1.Execute then
  begin
    old_font.Color:= ColorDialog1.Color;
    Modified := true;
    MainRTF.SetTextAttributes(MainRTF.SelStart, MainRTF.SelLength, old_font);
  end;

  MainRTFSelectionChange(Sender);
end;

procedure TMainForm.FontMenuItemClick(Sender: TObject);
var fnt_params: TFontParams; old_font: TFont;
begin
  MainRTF.GetTextAttributes(MainRTF.SelStart,fnt_params);

  old_font := TFont.Create;
  old_font.Name := fnt_params.Name;
  old_font.Size := fnt_params.Size;
  old_font.Style := fnt_params.Style;
  old_font.Color := fnt_params.Color;

  FontDialog1.Font := old_font;

  if FontDialog1.Execute then
  begin
    fnt_params.Name:= FontDialog1.Font.Name;
    fnt_params.Size:= FontDialog1.Font.Size;
    fnt_params.Style:= FontDialog1.Font.Style;
    fnt_params.Color:= FontDialog1.Font.Color;

    MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Styles],fnt_params,[],old_font.Style);
    MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Color,tmm_Name,tmm_Size,tmm_Styles],fnt_params,fnt_params.Style,[]);
  end;

  MainRTFSelectionChange(Sender);
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
end;

procedure TMainForm.FormShow(Sender: TObject);
begin
  if SettingsFile.ShowStartScreen then
  begin
    StartUpForm:=TStartUpForm.Create(Nil);
    StartUpForm.Init(SettingsFile);
    StartUpForm.Visible:=false;
    StartUpForm.ShowModal;

    StartUpFile:= StartUpForm.FileToOpen;

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

        MainRTF.Rtf := OpenFile.RtfData;
        if not OpenFile.BackgroundColor.Equals('') then
           MainRTF.Color := HexToColor(OpenFile.BackgroundColor);

        FileLocation := StartUpFile;
        Modified := false;
      end;
    end;

    FreeAndNil(StartUpForm);
  end;
end;

procedure TMainForm.HighlightColorMenuItemClick(Sender: TObject);
var fnt_params: TFontParams;
begin
  MainRTF.GetTextAttributes(MainRTF.SelStart,fnt_params);

  if fnt_params.HasBkClr then ColorDialog1.Color := fnt_params.BkColor;
  if ColorDialog1.Execute then
  begin
    Modified := true;

    fnt_params.BkColor:=ColorDialog1.Color;
    fnt_params.HasBkClr:=true;
    MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_BackColor],fnt_params,[],[]);
  end;
end;

procedure TMainForm.ItalicToolbarButtonClick(Sender: TObject);
var fnt_params: TFontParams; old_font: TFont;
begin
  MainRTF.GetTextAttributes(MainRTF.SelStart,fnt_params);

  old_font := TFont.Create;
  old_font.Style := fnt_params.Style;

  if ItalicToolbarButton.Down then
     MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Styles],fnt_params,[fsItalic],[])
  else
     MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Styles],fnt_params,[],[fsItalic]);

  MainRTFSelectionChange(Sender);
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
  SettingsFile.CustomCharacters := AddCharacterToCharArray(SettingsFile.CustomCharacters,CharacterPreviewButton.Caption);
  UpdateLocalCharacters();
end;

procedure TMainForm.MainRTFChange(Sender: TObject);
begin
  Modified := true;
  MainRTFSelectionChange(Sender);
end;

procedure TMainForm.MainRTFSelectionChange(Sender: TObject);
var old_params: TFontParams;
begin
  MainRTF.GetTextAttributes(MainRTF.SelStart,old_params);

  if (fsBold in old_params.Style) then
     BoldToolbarButton.Down:= true
  else
     BoldToolbarButton.Down:= false;

  if (fsItalic in old_params.Style) then
     ItalicToolbarButton.Down:= true
  else
     ItalicToolbarButton.Down:= false;

  if (fsUnderline in old_params.Style) then
     UnderlineToolbarButton.Down:= true
  else
     UnderlineToolbarButton.Down:= false;

  MainRTF.Refresh;

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
       MainRTF.Color := HexToColor(OpenFile.BackgroundColor);

    FileLocation := OpenDialog1.FileName;
    Modified := false;
  end;
end;

procedure TMainForm.IPACategoriesTabsChange(Sender: TObject);
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

procedure TMainForm.RightToolbarButtonClick(Sender: TObject);
begin
  MainRTF.SetParaAlignment(MainRTF.SelStart,MainRTF.SelLength, RichMemo.paRight);
end;

procedure TMainForm.SaveAsMenuItemClick(Sender: TObject);
begin
  OpenFile.RtfData := MainRTF.Rtf;

  if SaveDialog1.Execute then
  begin
     self.Cursor:=crHourGlass;

     FileLocation := SaveDialog1.FileName;
     Modified := false;
     SaveWriterFile(OpenFile,FileLocation);

     self.Cursor:=crDefault;
  end;
end;

procedure TMainForm.SaveMenuItemClick(Sender: TObject);
begin
  OpenFile.RtfData := MainRTF.Rtf;
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
  MainRTF.SelectAll;
end;

procedure TMainForm.TitleEditChange(Sender: TObject);
begin
  OpenFile.Title := TitleEdit.Text;
  Modified := true;
end;

procedure TMainForm.UnderlineToolbarButtonClick(Sender: TObject);
var fnt_params: TFontParams; old_font: TFont;
begin
  MainRTF.GetTextAttributes(MainRTF.SelStart,fnt_params);

  old_font := TFont.Create;
  old_font.Style := fnt_params.Style;

  if UnderlineToolbarButton.Down then
     MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Styles],fnt_params,[fsUnderline],[])
  else
     MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Styles],fnt_params,[],[fsUnderline]);

  MainRTFSelectionChange(Sender);
end;

procedure TMainForm.UndoMenuItemClick(Sender: TObject);
begin
  if MainRTF.CanUndo then
    MainRTF.Undo;
end;

procedure TMainForm.BackgroundColorMenuItemClick(Sender: TObject);
begin
  ColorDialog1.Color := MainRTF.Color;
  if ColorDialog1.Execute then
  begin
    MainRTF.Color:= ColorDialog1.Color;
    Modified := true;
    OpenFile.BackgroundColor := ColorToHex(MainRTF.Color);
  end;
end;

procedure TMainForm.BoldToolbarButtonClick(Sender: TObject);
var fnt_params: TFontParams; old_font: TFont;
begin
  MainRTF.GetTextAttributes(MainRTF.SelStart,fnt_params);

  old_font := TFont.Create;
  old_font.Style := fnt_params.Style;

  if BoldToolbarButton.Down then
     MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Styles],fnt_params,[fsBold],[])
  else
     MainRTF.SetRangeParams(MainRTF.SelStart,MainRTF.SelLength,[tmm_Styles],fnt_params,[],[fsBold]);

  MainRTFSelectionChange(Sender);
end;

procedure TMainForm.CenterToolbarButtonClick(Sender: TObject);
begin

  MainRTF.SetParaAlignment(MainRTF.SelStart,MainRTF.SelLength, RichMemo.paCenter);
end;

procedure TMainForm.CharacterGalleryTabsChange(Sender: TObject);
begin

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

procedure TMainForm.CharacterSep1Click(Sender: TObject);
begin

end;

procedure TMainForm.CharacterSep2Click(Sender: TObject);
begin

end;

procedure TMainForm.CharacterSheetContextPopup(Sender: TObject;
  MousePos: TPoint; var Handled: Boolean);
begin

end;

procedure TMainForm.ClearMenuItemClick(Sender: TObject);
begin
  MainRTF.Clear;
end;

procedure TMainForm.CommonFlowPanelClick(Sender: TObject);
begin

end;

procedure TMainForm.ConsonantsFlowPanelClick(Sender: TObject);
begin

end;

procedure TMainForm.ConsonantsScrollBoxClick(Sender: TObject);
begin

end;

procedure TMainForm.ConsonantsTabSheetContextPopup(Sender: TObject;
  MousePos: TPoint; var Handled: Boolean);
begin

end;

procedure TMainForm.CopyMenuItemClick(Sender: TObject);
begin
  MainRTF.CopyToClipboard;
end;

procedure TMainForm.CopyToEditorMenuItemClick(Sender: TObject);
var btn: TButton;
begin
  btn:= (CharacterMenu.PopupComponent as TButton);
  PreviewEdit.Text:= btn.Caption;
end;

procedure TMainForm.CutMenuItemClick(Sender: TObject);
begin
  MainRTF.CutToClipboard;
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
