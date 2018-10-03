/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qwebengineview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_New;
    QAction *action;
    QAction *action_Save;
    QAction *actionSave_As;
    QAction *action_Quit;
    QAction *action_Undo;
    QAction *action_Redo;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Cut;
    QAction *action_Find_Replace;
    QAction *actionSelect_All;
    QAction *action_Deselect_All;
    QAction *actionUsing_Thorn_Markup;
    QAction *actionAbout;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *action_100_Zoom;
    QAction *action_Custom_Zoom;
    QAction *action_Word_Wrap;
    QAction *action_Character_Editor;
    QAction *action_Add;
    QAction *action_Remove;
    QAction *action_Clone;
    QAction *action_Import;
    QAction *actionE_xport;
    QAction *actionSettin_gs;
    QAction *actionProject_Explorer;
    QAction *action_Image;
    QAction *action_Video;
    QAction *action_Audio;
    QAction *action_Table;
    QAction *action_List;
    QAction *actionDictionary_Word;
    QAction *actionT_ooltip;
    QAction *actionLin_k;
    QAction *action_Keyboard;
    QAction *actionD_ropdown;
    QAction *actionRad_io;
    QAction *actionE_ntry;
    QAction *actionRun;
    QAction *actionAdd_Section;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *pageViewTabs;
    QWidget *editTab;
    QGridLayout *gridLayout_3;
    QGridLayout *editGrid;
    QWidget *previewTab;
    QGridLayout *gridLayout_2;
    QWebEngineView *documentPreview;
    QWidget *dictionaryTab;
    QGridLayout *gridLayout_7;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *addWordButton;
    QPushButton *removeWordButton;
    QTableWidget *dictionaryTable;
    QWidget *resourcesTab;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_10;
    QPushButton *addResourceButton;
    QPushButton *removeResourceButton;
    QListWidget *listWidget;
    QWidget *propertiesTab;
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget_2;
    QWidget *infoTab;
    QGridLayout *gridLayout_11;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QWidget *cssTab;
    QGridLayout *gridLayout_12;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menuProject;
    QMenu *menu_Help;
    QMenu *menu_View;
    QMenu *menu_Window;
    QMenu *menu_Insert;
    QMenu *menuP_ages;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *pagesDock;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDockWidget *charactersDock;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QPushButton *globalButton;
    QPushButton *insertCharButton;
    QPushButton *projectButton;
    QTabWidget *tabWidget;
    QWidget *projectCharTab;
    QWidget *globalCharTab;
    QWidget *commomCharTab;
    QWidget *ipaCharTab;
    QGridLayout *gridLayout_6;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *page_2;
    QCheckBox *smartReplaceCheck;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(955, 661);
        QIcon icon;
        icon.addFile(QStringLiteral("../../icons/thorn/app_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/tlell/tlell/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon1);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/tlell/tlell/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon2);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/tlell/tlell/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/tlell/tlell/document-save-as.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/tlell/tlell/quit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Quit->setIcon(icon5);
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/tlell/tlell/edit-undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon6);
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/tlell/tlell/edit-redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon7);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/tlell/tlell/edit-copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon8);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/tlell/tlell/edit-paste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon9);
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName(QStringLiteral("action_Cut"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/tlell/tlell/edit-cut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon10);
        action_Find_Replace = new QAction(MainWindow);
        action_Find_Replace->setObjectName(QStringLiteral("action_Find_Replace"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/tlell/tlell/edit-find-replace.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Find_Replace->setIcon(icon11);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/tlell/tlell/edit-select-all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon12);
        action_Deselect_All = new QAction(MainWindow);
        action_Deselect_All->setObjectName(QStringLiteral("action_Deselect_All"));
        actionUsing_Thorn_Markup = new QAction(MainWindow);
        actionUsing_Thorn_Markup->setObjectName(QStringLiteral("actionUsing_Thorn_Markup"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/tlell/tlell/help.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsing_Thorn_Markup->setIcon(icon13);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QStringLiteral("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QStringLiteral("actionZoom_Out"));
        action_100_Zoom = new QAction(MainWindow);
        action_100_Zoom->setObjectName(QStringLiteral("action_100_Zoom"));
        action_Custom_Zoom = new QAction(MainWindow);
        action_Custom_Zoom->setObjectName(QStringLiteral("action_Custom_Zoom"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/tlell/tlell/find.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Custom_Zoom->setIcon(icon14);
        action_Word_Wrap = new QAction(MainWindow);
        action_Word_Wrap->setObjectName(QStringLiteral("action_Word_Wrap"));
        action_Word_Wrap->setCheckable(true);
        action_Character_Editor = new QAction(MainWindow);
        action_Character_Editor->setObjectName(QStringLiteral("action_Character_Editor"));
        action_Character_Editor->setCheckable(true);
        action_Character_Editor->setChecked(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/tlell/tlell/characters.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Character_Editor->setIcon(icon15);
        action_Add = new QAction(MainWindow);
        action_Add->setObjectName(QStringLiteral("action_Add"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/tlell/tlell/page-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Add->setIcon(icon16);
        action_Remove = new QAction(MainWindow);
        action_Remove->setObjectName(QStringLiteral("action_Remove"));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../../icons/tlell/actions/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Remove->setIcon(icon17);
        action_Clone = new QAction(MainWindow);
        action_Clone->setObjectName(QStringLiteral("action_Clone"));
        action_Import = new QAction(MainWindow);
        action_Import->setObjectName(QStringLiteral("action_Import"));
        actionE_xport = new QAction(MainWindow);
        actionE_xport->setObjectName(QStringLiteral("actionE_xport"));
        actionSettin_gs = new QAction(MainWindow);
        actionSettin_gs->setObjectName(QStringLiteral("actionSettin_gs"));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../../icons/tlell/categories/preferences.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettin_gs->setIcon(icon18);
        actionProject_Explorer = new QAction(MainWindow);
        actionProject_Explorer->setObjectName(QStringLiteral("actionProject_Explorer"));
        actionProject_Explorer->setCheckable(true);
        actionProject_Explorer->setChecked(true);
        action_Image = new QAction(MainWindow);
        action_Image->setObjectName(QStringLiteral("action_Image"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/tlell/tlell/image.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Image->setIcon(icon19);
        action_Video = new QAction(MainWindow);
        action_Video->setObjectName(QStringLiteral("action_Video"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/tlell/tlell/multimedia.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Video->setIcon(icon20);
        action_Audio = new QAction(MainWindow);
        action_Audio->setObjectName(QStringLiteral("action_Audio"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/tlell/tlell/audio-file.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Audio->setIcon(icon21);
        action_Table = new QAction(MainWindow);
        action_Table->setObjectName(QStringLiteral("action_Table"));
        action_List = new QAction(MainWindow);
        action_List->setObjectName(QStringLiteral("action_List"));
        actionDictionary_Word = new QAction(MainWindow);
        actionDictionary_Word->setObjectName(QStringLiteral("actionDictionary_Word"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/tlell/tlell/book.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDictionary_Word->setIcon(icon22);
        actionT_ooltip = new QAction(MainWindow);
        actionT_ooltip->setObjectName(QStringLiteral("actionT_ooltip"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/tlell/tlell/notify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionT_ooltip->setIcon(icon23);
        actionLin_k = new QAction(MainWindow);
        actionLin_k->setObjectName(QStringLiteral("actionLin_k"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/tlell/tlell/web.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLin_k->setIcon(icon24);
        action_Keyboard = new QAction(MainWindow);
        action_Keyboard->setObjectName(QStringLiteral("action_Keyboard"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/tlell/tlell/keyboard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Keyboard->setIcon(icon25);
        actionD_ropdown = new QAction(MainWindow);
        actionD_ropdown->setObjectName(QStringLiteral("actionD_ropdown"));
        actionRad_io = new QAction(MainWindow);
        actionRad_io->setObjectName(QStringLiteral("actionRad_io"));
        actionE_ntry = new QAction(MainWindow);
        actionE_ntry->setObjectName(QStringLiteral("actionE_ntry"));
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/tlell/tlell/media-playback-start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon26);
        actionAdd_Section = new QAction(MainWindow);
        actionAdd_Section->setObjectName(QStringLiteral("actionAdd_Section"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/tlell/tlell/folder-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Section->setIcon(icon27);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pageViewTabs = new QTabWidget(centralWidget);
        pageViewTabs->setObjectName(QStringLiteral("pageViewTabs"));
        editTab = new QWidget();
        editTab->setObjectName(QStringLiteral("editTab"));
        gridLayout_3 = new QGridLayout(editTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        editGrid = new QGridLayout();
        editGrid->setSpacing(6);
        editGrid->setObjectName(QStringLiteral("editGrid"));

        gridLayout_3->addLayout(editGrid, 0, 0, 1, 1);

        pageViewTabs->addTab(editTab, QString());
        previewTab = new QWidget();
        previewTab->setObjectName(QStringLiteral("previewTab"));
        gridLayout_2 = new QGridLayout(previewTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        documentPreview = new QWebEngineView(previewTab);
        documentPreview->setObjectName(QStringLiteral("documentPreview"));

        gridLayout_2->addWidget(documentPreview, 0, 0, 1, 1);

        pageViewTabs->addTab(previewTab, QString());
        dictionaryTab = new QWidget();
        dictionaryTab->setObjectName(QStringLiteral("dictionaryTab"));
        gridLayout_7 = new QGridLayout(dictionaryTab);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        frame = new QFrame(dictionaryTab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addWordButton = new QPushButton(frame);
        addWordButton->setObjectName(QStringLiteral("addWordButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addWordButton->sizePolicy().hasHeightForWidth());
        addWordButton->setSizePolicy(sizePolicy1);
        QIcon icon28;
        icon28.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/22/edit-table-insert-row-under.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addWordButton->setIcon(icon28);
        addWordButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(addWordButton);

        removeWordButton = new QPushButton(frame);
        removeWordButton->setObjectName(QStringLiteral("removeWordButton"));
        sizePolicy1.setHeightForWidth(removeWordButton->sizePolicy().hasHeightForWidth());
        removeWordButton->setSizePolicy(sizePolicy1);
        QIcon icon29;
        icon29.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/22/edit-table-delete-row.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeWordButton->setIcon(icon29);
        removeWordButton->setIconSize(QSize(22, 22));

        horizontalLayout->addWidget(removeWordButton, 0, Qt::AlignLeft);


        gridLayout_7->addWidget(frame, 0, 0, 1, 1);

        dictionaryTable = new QTableWidget(dictionaryTab);
        if (dictionaryTable->columnCount() < 6)
            dictionaryTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        dictionaryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        dictionaryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        dictionaryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        dictionaryTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        dictionaryTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        dictionaryTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (dictionaryTable->rowCount() < 1)
            dictionaryTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        dictionaryTable->setVerticalHeaderItem(0, __qtablewidgetitem6);
        dictionaryTable->setObjectName(QStringLiteral("dictionaryTable"));
        dictionaryTable->setAlternatingRowColors(true);
        dictionaryTable->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(dictionaryTable, 1, 0, 1, 1);

        pageViewTabs->addTab(dictionaryTab, QString());
        resourcesTab = new QWidget();
        resourcesTab->setObjectName(QStringLiteral("resourcesTab"));
        verticalLayout_2 = new QVBoxLayout(resourcesTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_2 = new QFrame(resourcesTab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout_10 = new QGridLayout(frame_2);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        addResourceButton = new QPushButton(frame_2);
        addResourceButton->setObjectName(QStringLiteral("addResourceButton"));
        sizePolicy1.setHeightForWidth(addResourceButton->sizePolicy().hasHeightForWidth());
        addResourceButton->setSizePolicy(sizePolicy1);
        QIcon icon30;
        icon30.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/22/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addResourceButton->setIcon(icon30);
        addResourceButton->setIconSize(QSize(22, 22));

        gridLayout_10->addWidget(addResourceButton, 0, 0, 1, 1);

        removeResourceButton = new QPushButton(frame_2);
        removeResourceButton->setObjectName(QStringLiteral("removeResourceButton"));
        sizePolicy1.setHeightForWidth(removeResourceButton->sizePolicy().hasHeightForWidth());
        removeResourceButton->setSizePolicy(sizePolicy1);
        QIcon icon31;
        icon31.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/22/edit-delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeResourceButton->setIcon(icon31);
        removeResourceButton->setIconSize(QSize(22, 22));

        gridLayout_10->addWidget(removeResourceButton, 0, 1, 1, 1, Qt::AlignLeft);


        verticalLayout_2->addWidget(frame_2);

        listWidget = new QListWidget(resourcesTab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setViewMode(QListView::IconMode);

        verticalLayout_2->addWidget(listWidget);

        pageViewTabs->addTab(resourcesTab, QString());
        propertiesTab = new QWidget();
        propertiesTab->setObjectName(QStringLiteral("propertiesTab"));
        gridLayout_8 = new QGridLayout(propertiesTab);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tabWidget_2 = new QTabWidget(propertiesTab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        infoTab = new QWidget();
        infoTab->setObjectName(QStringLiteral("infoTab"));
        gridLayout_11 = new QGridLayout(infoTab);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(12);
        formLayout->setVerticalSpacing(12);
        label = new QLabel(infoTab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(infoTab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(infoTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(infoTab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(infoTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(infoTab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(infoTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        textBrowser = new QTextBrowser(infoTab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);

        formLayout->setWidget(4, QFormLayout::FieldRole, textBrowser);


        gridLayout_11->addLayout(formLayout, 0, 0, 1, 1);

        tabWidget_2->addTab(infoTab, QString());
        cssTab = new QWidget();
        cssTab->setObjectName(QStringLiteral("cssTab"));
        gridLayout_12 = new QGridLayout(cssTab);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        textEdit = new QTextEdit(cssTab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setAcceptRichText(false);

        gridLayout_12->addWidget(textEdit, 0, 0, 1, 1);

        tabWidget_2->addTab(cssTab, QString());

        gridLayout_8->addWidget(tabWidget_2, 0, 0, 1, 1);

        pageViewTabs->addTab(propertiesTab, QString());

        gridLayout->addWidget(pageViewTabs, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 955, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menuProject = new QMenu(menuBar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_Window = new QMenu(menuBar);
        menu_Window->setObjectName(QStringLiteral("menu_Window"));
        menu_Insert = new QMenu(menuBar);
        menu_Insert->setObjectName(QStringLiteral("menu_Insert"));
        menuP_ages = new QMenu(menuBar);
        menuP_ages->setObjectName(QStringLiteral("menuP_ages"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        pagesDock = new QDockWidget(MainWindow);
        pagesDock->setObjectName(QStringLiteral("pagesDock"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pagesDock->sizePolicy().hasHeightForWidth());
        pagesDock->setSizePolicy(sizePolicy3);
        pagesDock->setMinimumSize(QSize(200, 115));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        treeWidget->headerItem()->setText(0, QString());
        QIcon icon32;
        icon32.addFile(QStringLiteral(":/tlell/tlell/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon33;
        icon33.addFile(QStringLiteral(":/tlell/tlell/text.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem->setIcon(0, icon32);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem1->setIcon(0, icon33);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        sizePolicy2.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy2);
        treeWidget->setAutoFillBackground(false);
        treeWidget->setFrameShape(QFrame::NoFrame);
        treeWidget->setIndentation(15);
        treeWidget->setRootIsDecorated(true);
        treeWidget->setAnimated(true);
        treeWidget->setHeaderHidden(true);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(treeWidget);

        pagesDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), pagesDock);
        charactersDock = new QDockWidget(MainWindow);
        charactersDock->setObjectName(QStringLiteral("charactersDock"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(charactersDock->sizePolicy().hasHeightForWidth());
        charactersDock->setSizePolicy(sizePolicy4);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        gridLayout_5 = new QGridLayout(dockWidgetContents_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        globalButton = new QPushButton(dockWidgetContents_3);
        globalButton->setObjectName(QStringLiteral("globalButton"));

        gridLayout_4->addWidget(globalButton, 3, 0, 1, 1);

        insertCharButton = new QPushButton(dockWidgetContents_3);
        insertCharButton->setObjectName(QStringLiteral("insertCharButton"));
        sizePolicy1.setHeightForWidth(insertCharButton->sizePolicy().hasHeightForWidth());
        insertCharButton->setSizePolicy(sizePolicy1);
        insertCharButton->setMinimumSize(QSize(0, 80));
        insertCharButton->setMaximumSize(QSize(16777215, 120));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        insertCharButton->setFont(font);

        gridLayout_4->addWidget(insertCharButton, 0, 0, 1, 1, Qt::AlignHCenter);

        projectButton = new QPushButton(dockWidgetContents_3);
        projectButton->setObjectName(QStringLiteral("projectButton"));

        gridLayout_4->addWidget(projectButton, 2, 0, 1, 1);

        tabWidget = new QTabWidget(dockWidgetContents_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        projectCharTab = new QWidget();
        projectCharTab->setObjectName(QStringLiteral("projectCharTab"));
        tabWidget->addTab(projectCharTab, QString());
        globalCharTab = new QWidget();
        globalCharTab->setObjectName(QStringLiteral("globalCharTab"));
        tabWidget->addTab(globalCharTab, QString());
        commomCharTab = new QWidget();
        commomCharTab->setObjectName(QStringLiteral("commomCharTab"));
        tabWidget->addTab(commomCharTab, QString());
        ipaCharTab = new QWidget();
        ipaCharTab->setObjectName(QStringLiteral("ipaCharTab"));
        gridLayout_6 = new QGridLayout(ipaCharTab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        toolBox = new QToolBox(ipaCharTab);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 230, 84));
        toolBox->addItem(page, QStringLiteral("Consonants"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 230, 84));
        toolBox->addItem(page_3, QStringLiteral("Affricates"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 230, 84));
        toolBox->addItem(page_4, QStringLiteral("Vowels"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 230, 84));
        toolBox->addItem(page_5, QStringLiteral("Tones"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 230, 84));
        toolBox->addItem(page_2, QStringLiteral("Other"));

        gridLayout_6->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget->addTab(ipaCharTab, QString());

        gridLayout_4->addWidget(tabWidget, 4, 0, 1, 1);

        smartReplaceCheck = new QCheckBox(dockWidgetContents_3);
        smartReplaceCheck->setObjectName(QStringLiteral("smartReplaceCheck"));
        smartReplaceCheck->setCheckable(true);
        smartReplaceCheck->setChecked(true);

        gridLayout_4->addWidget(smartReplaceCheck, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        charactersDock->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), charactersDock);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menuProject->menuAction());
        menuBar->addAction(menuP_ages->menuAction());
        menuBar->addAction(menu_Insert->menuAction());
        menuBar->addAction(menu_Window->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addSeparator();
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_As);
        menu_File->addSeparator();
        menu_File->addAction(actionSettin_gs);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_Edit->addAction(action_Undo);
        menu_Edit->addAction(action_Redo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Cut);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Edit->addSeparator();
        menu_Edit->addAction(action_Find_Replace);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionSelect_All);
        menu_Edit->addAction(action_Deselect_All);
        menuProject->addAction(actionRun);
        menu_Help->addAction(actionUsing_Thorn_Markup);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAbout);
        menu_View->addSeparator();
        menu_View->addAction(actionZoom_In);
        menu_View->addAction(actionZoom_Out);
        menu_View->addSeparator();
        menu_View->addAction(action_100_Zoom);
        menu_View->addAction(action_Custom_Zoom);
        menu_View->addSeparator();
        menu_View->addAction(action_Word_Wrap);
        menu_Window->addAction(action_Character_Editor);
        menu_Window->addAction(actionProject_Explorer);
        menu_Insert->addAction(action_Image);
        menu_Insert->addAction(action_Video);
        menu_Insert->addAction(action_Audio);
        menu_Insert->addSeparator();
        menu_Insert->addAction(actionLin_k);
        menu_Insert->addAction(actionT_ooltip);
        menu_Insert->addAction(action_Table);
        menu_Insert->addAction(action_List);
        menu_Insert->addSeparator();
        menu_Insert->addAction(actionDictionary_Word);
        menu_Insert->addAction(action_Keyboard);
        menu_Insert->addSeparator();
        menu_Insert->addAction(actionD_ropdown);
        menu_Insert->addAction(actionRad_io);
        menu_Insert->addAction(actionE_ntry);
        menuP_ages->addAction(action_Add);
        menuP_ages->addAction(actionAdd_Section);
        menuP_ages->addAction(action_Remove);
        menuP_ages->addAction(action_Clone);
        menuP_ages->addSeparator();
        menuP_ages->addAction(action_Import);
        menuP_ages->addAction(actionE_xport);
        menuP_ages->addSeparator();
        mainToolBar->addAction(action_New);
        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Save);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Undo);
        mainToolBar->addAction(action_Redo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Cut);
        mainToolBar->addAction(action_Copy);
        mainToolBar->addAction(action_Paste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Find_Replace);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Add);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun);

        retranslateUi(MainWindow);

        pageViewTabs->setCurrentIndex(4);
        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(3);
        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Thorn", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        action_New->setText(QApplication::translate("MainWindow", "&New...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        action->setText(QApplication::translate("MainWindow", "---", nullptr));
        action_Save->setText(QApplication::translate("MainWindow", "&Save...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("MainWindow", "Save &As...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Undo->setText(QApplication::translate("MainWindow", "&Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        action_Redo->setText(QApplication::translate("MainWindow", "&Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        action_Copy->setText(QApplication::translate("MainWindow", "&Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        action_Paste->setText(QApplication::translate("MainWindow", "&Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        action_Cut->setText(QApplication::translate("MainWindow", "C&ut", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Cut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        action_Find_Replace->setText(QApplication::translate("MainWindow", "&Find/Replace", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Find_Replace->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select &All", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSelect_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        action_Deselect_All->setText(QApplication::translate("MainWindow", "&Deselect All", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Deselect_All->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionUsing_Thorn_Markup->setText(QApplication::translate("MainWindow", "&Contents...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUsing_Thorn_Markup->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About...", nullptr));
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom &In", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoom_In->setShortcut(QApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoom_Out->setText(QApplication::translate("MainWindow", "Zoom &Out", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoom_Out->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        action_100_Zoom->setText(QApplication::translate("MainWindow", "&100% Zoom", nullptr));
#ifndef QT_NO_SHORTCUT
        action_100_Zoom->setShortcut(QApplication::translate("MainWindow", "Ctrl+0", nullptr));
#endif // QT_NO_SHORTCUT
        action_Custom_Zoom->setText(QApplication::translate("MainWindow", "&Custom Zoom...", nullptr));
        action_Word_Wrap->setText(QApplication::translate("MainWindow", "&Word Wrap", nullptr));
        action_Character_Editor->setText(QApplication::translate("MainWindow", "&Characters", nullptr));
        action_Add->setText(QApplication::translate("MainWindow", "&Add Page", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Add->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        action_Remove->setText(QApplication::translate("MainWindow", "&Remove", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Remove->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        action_Clone->setText(QApplication::translate("MainWindow", "&Clone", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Clone->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        action_Import->setText(QApplication::translate("MainWindow", "&Import...", nullptr));
        actionE_xport->setText(QApplication::translate("MainWindow", "E&xport...", nullptr));
        actionSettin_gs->setText(QApplication::translate("MainWindow", "Settin&gs...", nullptr));
        actionProject_Explorer->setText(QApplication::translate("MainWindow", "&Pages", nullptr));
        action_Image->setText(QApplication::translate("MainWindow", "&Image...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Image->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+I", nullptr));
#endif // QT_NO_SHORTCUT
        action_Video->setText(QApplication::translate("MainWindow", "&Video...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Video->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+V", nullptr));
#endif // QT_NO_SHORTCUT
        action_Audio->setText(QApplication::translate("MainWindow", "&Audio...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Audio->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
        action_Table->setText(QApplication::translate("MainWindow", "&Table...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Table->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+T", nullptr));
#endif // QT_NO_SHORTCUT
        action_List->setText(QApplication::translate("MainWindow", "&List...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionDictionary_Word->setText(QApplication::translate("MainWindow", "Dictionary &Word...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDictionary_Word->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionT_ooltip->setText(QApplication::translate("MainWindow", "T&ooltip...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionT_ooltip->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionLin_k->setText(QApplication::translate("MainWindow", "Lin&k...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLin_k->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+K", nullptr));
#endif // QT_NO_SHORTCUT
        action_Keyboard->setText(QApplication::translate("MainWindow", "Ke&yboard", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Keyboard->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionD_ropdown->setText(QApplication::translate("MainWindow", "D&ropdown", nullptr));
#ifndef QT_NO_SHORTCUT
        actionD_ropdown->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionRad_io->setText(QApplication::translate("MainWindow", "Ra&dio", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRad_io->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionE_ntry->setText(QApplication::translate("MainWindow", "E&ntry", nullptr));
#ifndef QT_NO_SHORTCUT
        actionE_ntry->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionRun->setText(QApplication::translate("MainWindow", "&Run...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRun->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionAdd_Section->setText(QApplication::translate("MainWindow", "Add &Section", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(editTab), QApplication::translate("MainWindow", "Edit", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(previewTab), QApplication::translate("MainWindow", "Preview", nullptr));
        addWordButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        removeWordButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem = dictionaryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Subject", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = dictionaryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Word", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = dictionaryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Translation", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = dictionaryTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Pronunciation", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = dictionaryTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Definition", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = dictionaryTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Notes", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = dictionaryTable->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "New Row", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(dictionaryTab), QApplication::translate("MainWindow", "Dictionary", nullptr));
        addResourceButton->setText(QApplication::translate("MainWindow", "Add...", nullptr));
        removeResourceButton->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(resourcesTab), QApplication::translate("MainWindow", "Resources", nullptr));
        label->setText(QApplication::translate("MainWindow", "Title:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Language:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Author:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Info:", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(infoTab), QApplication::translate("MainWindow", "Info", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(cssTab), QApplication::translate("MainWindow", "CSS", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(propertiesTab), QApplication::translate("MainWindow", "Properties", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menuProject->setTitle(QApplication::translate("MainWindow", "&Project", nullptr));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menu_Window->setTitle(QApplication::translate("MainWindow", "&Window", nullptr));
        menu_Insert->setTitle(QApplication::translate("MainWindow", "&Insert", nullptr));
        menuP_ages->setTitle(QApplication::translate("MainWindow", "P&ages", nullptr));
        mainToolBar->setWindowTitle(QString());
        pagesDock->setWindowTitle(QApplication::translate("MainWindow", "Pages", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Home", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Page 1", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        charactersDock->setWindowTitle(QApplication::translate("MainWindow", "Characters", nullptr));
        globalButton->setText(QApplication::translate("MainWindow", "Global", nullptr));
        insertCharButton->setText(QApplication::translate("MainWindow", "A", nullptr));
        projectButton->setText(QApplication::translate("MainWindow", "Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(projectCharTab), QApplication::translate("MainWindow", "Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(globalCharTab), QApplication::translate("MainWindow", "Global", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(commomCharTab), QApplication::translate("MainWindow", "Common", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Consonants", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "Affricates", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "Vowels", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MainWindow", "Tones", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Other", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ipaCharTab), QApplication::translate("MainWindow", "IPA", nullptr));
        smartReplaceCheck->setText(QApplication::translate("MainWindow", "Smart Replace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
