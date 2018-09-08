/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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
    QAction *action_Add_Page;
    QAction *action_Remove_Page;
    QAction *action_Word_Wrap;
    QAction *action_Character_Editor;
    QAction *action_Duplicate_Page;
    QAction *actionImport_Page;
    QAction *action_Export_Page;
    QAction *actionDic_tionary;
    QAction *actionProperties;
    QAction *actionR_ename_Page;
    QAction *action_16;
    QAction *action_Add;
    QAction *action_Remove;
    QAction *action_Clone;
    QAction *actionR_ename;
    QAction *action_Import;
    QAction *actionE_xport;
    QAction *actionSettin_gs;
    QAction *actionProject_Explorer;
    QAction *action_Image;
    QAction *action_Video;
    QAction *action_Audio;
    QAction *action_Table;
    QAction *action_Heading;
    QAction *actionConvert_to_MarkDown;
    QAction *action_List;
    QAction *action_Paragraph;
    QAction *actionDictionary_Word;
    QAction *actionT_ooltip;
    QAction *actionLin_k;
    QAction *action_Keyboard;
    QAction *actionD_ropdown;
    QAction *actionRad_io;
    QAction *actionE_ntry;
    QAction *action_Add_Section;
    QAction *action_Remove_Section;
    QAction *action_Add_2;
    QAction *action_Remove_2;
    QAction *actionRun;
    QAction *action_Dictionary;
    QAction *actionR_esources;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *pageViewTabs;
    QWidget *editTab;
    QGridLayout *gridLayout_3;
    QTextEdit *documentEdit;
    QWidget *previewTab;
    QGridLayout *gridLayout_2;
    QWebEngineView *documentPreview;
    QWidget *dictionaryTab;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget;
    QWidget *resourcesTab;
    QListWidget *listWidget;
    QWidget *propertiesTab;
    QGridLayout *gridLayout_8;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QTextBrowser *textBrowser;
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
    QPushButton *projectButton;
    QPushButton *insertCharButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(955, 635);
        QIcon icon;
        icon.addFile(QStringLiteral("../../icons/thorn/app_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon1);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon2);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/document-save-as.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/application-exit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Quit->setIcon(icon5);
        action_Undo = new QAction(MainWindow);
        action_Undo->setObjectName(QStringLiteral("action_Undo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-undo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Undo->setIcon(icon6);
        action_Redo = new QAction(MainWindow);
        action_Redo->setObjectName(QStringLiteral("action_Redo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Redo->setIcon(icon7);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon8);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-paste.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon9);
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName(QStringLiteral("action_Cut"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-cut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon10);
        action_Find_Replace = new QAction(MainWindow);
        action_Find_Replace->setObjectName(QStringLiteral("action_Find_Replace"));
        QIcon icon11;
        icon11.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-find-replace.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Find_Replace->setIcon(icon11);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        QIcon icon12;
        icon12.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-select-all.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon12);
        action_Deselect_All = new QAction(MainWindow);
        action_Deselect_All->setObjectName(QStringLiteral("action_Deselect_All"));
        QIcon icon13;
        icon13.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-select-none.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Deselect_All->setIcon(icon13);
        actionUsing_Thorn_Markup = new QAction(MainWindow);
        actionUsing_Thorn_Markup->setObjectName(QStringLiteral("actionUsing_Thorn_Markup"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon14;
        icon14.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/help-about.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon14);
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QStringLiteral("actionZoom_In"));
        QIcon icon15;
        icon15.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/zoom-in.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_In->setIcon(icon15);
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QStringLiteral("actionZoom_Out"));
        QIcon icon16;
        icon16.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/zoom-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon16);
        action_100_Zoom = new QAction(MainWindow);
        action_100_Zoom->setObjectName(QStringLiteral("action_100_Zoom"));
        QIcon icon17;
        icon17.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/zoom-original.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_100_Zoom->setIcon(icon17);
        action_Custom_Zoom = new QAction(MainWindow);
        action_Custom_Zoom->setObjectName(QStringLiteral("action_Custom_Zoom"));
        QIcon icon18;
        icon18.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/zoom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Custom_Zoom->setIcon(icon18);
        action_Add_Page = new QAction(MainWindow);
        action_Add_Page->setObjectName(QStringLiteral("action_Add_Page"));
        action_Remove_Page = new QAction(MainWindow);
        action_Remove_Page->setObjectName(QStringLiteral("action_Remove_Page"));
        action_Word_Wrap = new QAction(MainWindow);
        action_Word_Wrap->setObjectName(QStringLiteral("action_Word_Wrap"));
        action_Word_Wrap->setCheckable(true);
        action_Character_Editor = new QAction(MainWindow);
        action_Character_Editor->setObjectName(QStringLiteral("action_Character_Editor"));
        action_Character_Editor->setCheckable(true);
        action_Character_Editor->setChecked(true);
        action_Duplicate_Page = new QAction(MainWindow);
        action_Duplicate_Page->setObjectName(QStringLiteral("action_Duplicate_Page"));
        actionImport_Page = new QAction(MainWindow);
        actionImport_Page->setObjectName(QStringLiteral("actionImport_Page"));
        action_Export_Page = new QAction(MainWindow);
        action_Export_Page->setObjectName(QStringLiteral("action_Export_Page"));
        actionDic_tionary = new QAction(MainWindow);
        actionDic_tionary->setObjectName(QStringLiteral("actionDic_tionary"));
        actionProperties = new QAction(MainWindow);
        actionProperties->setObjectName(QStringLiteral("actionProperties"));
        QIcon icon19;
        icon19.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/project-development.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionProperties->setIcon(icon19);
        actionR_ename_Page = new QAction(MainWindow);
        actionR_ename_Page->setObjectName(QStringLiteral("actionR_ename_Page"));
        action_16 = new QAction(MainWindow);
        action_16->setObjectName(QStringLiteral("action_16"));
        action_Add = new QAction(MainWindow);
        action_Add->setObjectName(QStringLiteral("action_Add"));
        QIcon icon20;
        icon20.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/archive-insert.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Add->setIcon(icon20);
        action_Remove = new QAction(MainWindow);
        action_Remove->setObjectName(QStringLiteral("action_Remove"));
        QIcon icon21;
        icon21.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/archive-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Remove->setIcon(icon21);
        action_Clone = new QAction(MainWindow);
        action_Clone->setObjectName(QStringLiteral("action_Clone"));
        QIcon icon22;
        icon22.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/edit-clone.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Clone->setIcon(icon22);
        actionR_ename = new QAction(MainWindow);
        actionR_ename->setObjectName(QStringLiteral("actionR_ename"));
        QIcon icon23;
        icon23.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/document-edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionR_ename->setIcon(icon23);
        action_Import = new QAction(MainWindow);
        action_Import->setObjectName(QStringLiteral("action_Import"));
        QIcon icon24;
        icon24.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/document-import.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Import->setIcon(icon24);
        actionE_xport = new QAction(MainWindow);
        actionE_xport->setObjectName(QStringLiteral("actionE_xport"));
        QIcon icon25;
        icon25.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/document-export.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionE_xport->setIcon(icon25);
        actionSettin_gs = new QAction(MainWindow);
        actionSettin_gs->setObjectName(QStringLiteral("actionSettin_gs"));
        QIcon icon26;
        icon26.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/configure.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettin_gs->setIcon(icon26);
        actionProject_Explorer = new QAction(MainWindow);
        actionProject_Explorer->setObjectName(QStringLiteral("actionProject_Explorer"));
        actionProject_Explorer->setCheckable(true);
        actionProject_Explorer->setChecked(true);
        action_Image = new QAction(MainWindow);
        action_Image->setObjectName(QStringLiteral("action_Image"));
        QIcon icon27;
        icon27.addFile(QStringLiteral("../../icons/breeze-icons/icons/mimetypes/16/image-tiff.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Image->setIcon(icon27);
        action_Video = new QAction(MainWindow);
        action_Video->setObjectName(QStringLiteral("action_Video"));
        QIcon icon28;
        icon28.addFile(QStringLiteral("../../icons/breeze-icons/icons/mimetypes/16/video-x-generic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Video->setIcon(icon28);
        action_Audio = new QAction(MainWindow);
        action_Audio->setObjectName(QStringLiteral("action_Audio"));
        QIcon icon29;
        icon29.addFile(QStringLiteral("../../icons/breeze-icons/icons/mimetypes/16/audio-x-mpeg.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Audio->setIcon(icon29);
        action_Table = new QAction(MainWindow);
        action_Table->setObjectName(QStringLiteral("action_Table"));
        QIcon icon30;
        icon30.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/table.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Table->setIcon(icon30);
        action_Heading = new QAction(MainWindow);
        action_Heading->setObjectName(QStringLiteral("action_Heading"));
        QIcon icon31;
        icon31.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/filename-title-amarok.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Heading->setIcon(icon31);
        actionConvert_to_MarkDown = new QAction(MainWindow);
        actionConvert_to_MarkDown->setObjectName(QStringLiteral("actionConvert_to_MarkDown"));
        QIcon icon32;
        icon32.addFile(QStringLiteral("../../icons/breeze-icons/icons/mimetypes/16/text-x-markdown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionConvert_to_MarkDown->setIcon(icon32);
        action_List = new QAction(MainWindow);
        action_List->setObjectName(QStringLiteral("action_List"));
        QIcon icon33;
        icon33.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/view-media-playlist.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_List->setIcon(icon33);
        action_Paragraph = new QAction(MainWindow);
        action_Paragraph->setObjectName(QStringLiteral("action_Paragraph"));
        actionDictionary_Word = new QAction(MainWindow);
        actionDictionary_Word->setObjectName(QStringLiteral("actionDictionary_Word"));
        QIcon icon34;
        icon34.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/view-calendar-list.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDictionary_Word->setIcon(icon34);
        actionT_ooltip = new QAction(MainWindow);
        actionT_ooltip->setObjectName(QStringLiteral("actionT_ooltip"));
        QIcon icon35;
        icon35.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/dialog-messages.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionT_ooltip->setIcon(icon35);
        actionLin_k = new QAction(MainWindow);
        actionLin_k->setObjectName(QStringLiteral("actionLin_k"));
        QIcon icon36;
        icon36.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/globe.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLin_k->setIcon(icon36);
        action_Keyboard = new QAction(MainWindow);
        action_Keyboard->setObjectName(QStringLiteral("action_Keyboard"));
        actionD_ropdown = new QAction(MainWindow);
        actionD_ropdown->setObjectName(QStringLiteral("actionD_ropdown"));
        actionRad_io = new QAction(MainWindow);
        actionRad_io->setObjectName(QStringLiteral("actionRad_io"));
        actionE_ntry = new QAction(MainWindow);
        actionE_ntry->setObjectName(QStringLiteral("actionE_ntry"));
        action_Add_Section = new QAction(MainWindow);
        action_Add_Section->setObjectName(QStringLiteral("action_Add_Section"));
        QIcon icon37;
        icon37.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Add_Section->setIcon(icon37);
        action_Remove_Section = new QAction(MainWindow);
        action_Remove_Section->setObjectName(QStringLiteral("action_Remove_Section"));
        QIcon icon38;
        icon38.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Remove_Section->setIcon(icon38);
        action_Add_2 = new QAction(MainWindow);
        action_Add_2->setObjectName(QStringLiteral("action_Add_2"));
        action_Add_2->setIcon(icon37);
        action_Remove_2 = new QAction(MainWindow);
        action_Remove_2->setObjectName(QStringLiteral("action_Remove_2"));
        action_Remove_2->setIcon(icon38);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon39;
        icon39.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/run-build.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon39);
        action_Dictionary = new QAction(MainWindow);
        action_Dictionary->setObjectName(QStringLiteral("action_Dictionary"));
        QIcon icon40;
        icon40.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/address-book-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_Dictionary->setIcon(icon40);
        actionR_esources = new QAction(MainWindow);
        actionR_esources->setObjectName(QStringLiteral("actionR_esources"));
        QIcon icon41;
        icon41.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/node.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionR_esources->setIcon(icon41);
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
        documentEdit = new QTextEdit(editTab);
        documentEdit->setObjectName(QStringLiteral("documentEdit"));
        documentEdit->setAcceptRichText(false);

        gridLayout_3->addWidget(documentEdit, 0, 0, 1, 1);

        pageViewTabs->addTab(editTab, icon23, QString());
        previewTab = new QWidget();
        previewTab->setObjectName(QStringLiteral("previewTab"));
        gridLayout_2 = new QGridLayout(previewTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        documentPreview = new QWebEngineView(previewTab);
        documentPreview->setObjectName(QStringLiteral("documentPreview"));

        gridLayout_2->addWidget(documentPreview, 0, 0, 1, 1);

        QIcon icon42;
        icon42.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/visibility.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pageViewTabs->addTab(previewTab, icon42, QString());
        dictionaryTab = new QWidget();
        dictionaryTab->setObjectName(QStringLiteral("dictionaryTab"));
        gridLayout_7 = new QGridLayout(dictionaryTab);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tableWidget = new QTableWidget(dictionaryTab);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(tableWidget, 0, 0, 1, 1);

        pageViewTabs->addTab(dictionaryTab, icon40, QString());
        resourcesTab = new QWidget();
        resourcesTab->setObjectName(QStringLiteral("resourcesTab"));
        listWidget = new QListWidget(resourcesTab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(310, 110, 256, 192));
        listWidget->setViewMode(QListView::IconMode);
        QIcon icon43;
        icon43.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/package-available.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pageViewTabs->addTab(resourcesTab, icon43, QString());
        propertiesTab = new QWidget();
        propertiesTab->setObjectName(QStringLiteral("propertiesTab"));
        gridLayout_8 = new QGridLayout(propertiesTab);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(12);
        formLayout->setVerticalSpacing(12);
        label = new QLabel(propertiesTab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(propertiesTab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(propertiesTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(propertiesTab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(propertiesTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(propertiesTab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(propertiesTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        textBrowser = new QTextBrowser(propertiesTab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, textBrowser);


        gridLayout_8->addLayout(formLayout, 0, 0, 1, 1);

        QIcon icon44;
        icon44.addFile(QStringLiteral("../../icons/breeze-icons/icons/actions/16/project-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pageViewTabs->addTab(propertiesTab, icon44, QString());

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
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pagesDock->sizePolicy().hasHeightForWidth());
        pagesDock->setSizePolicy(sizePolicy2);
        pagesDock->setMinimumSize(QSize(200, 113));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        treeWidget->headerItem()->setText(0, QString());
        QIcon icon45;
        icon45.addFile(QStringLiteral("../../icons/breeze-icons/icons/places/32/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon46;
        icon46.addFile(QStringLiteral("../../icons/breeze-icons/icons/mimetypes/32/text-x-generic.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem->setIcon(0, icon45);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem1->setIcon(0, icon46);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        sizePolicy1.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy1);
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
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(charactersDock->sizePolicy().hasHeightForWidth());
        charactersDock->setSizePolicy(sizePolicy3);
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

        gridLayout_4->addWidget(globalButton, 2, 0, 1, 1);

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
        page->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page, QStringLiteral("Consonants"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_3, QStringLiteral("Affricates"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_4, QStringLiteral("Vowels"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 100, 30));
        toolBox->addItem(page_5, QStringLiteral("Tones"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 232, 70));
        toolBox->addItem(page_2, QStringLiteral("Other"));

        gridLayout_6->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget->addTab(ipaCharTab, QString());

        gridLayout_4->addWidget(tabWidget, 3, 0, 1, 1);

        projectButton = new QPushButton(dockWidgetContents_3);
        projectButton->setObjectName(QStringLiteral("projectButton"));

        gridLayout_4->addWidget(projectButton, 1, 0, 1, 1);

        insertCharButton = new QPushButton(dockWidgetContents_3);
        insertCharButton->setObjectName(QStringLiteral("insertCharButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(insertCharButton->sizePolicy().hasHeightForWidth());
        insertCharButton->setSizePolicy(sizePolicy4);
        insertCharButton->setMinimumSize(QSize(0, 80));
        insertCharButton->setMaximumSize(QSize(16777215, 120));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        insertCharButton->setFont(font);

        gridLayout_4->addWidget(insertCharButton, 0, 0, 1, 1, Qt::AlignHCenter);


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
        menuProject->addSeparator();
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
        menu_Insert->addAction(action_Table);
        menu_Insert->addAction(action_List);
        menu_Insert->addAction(actionLin_k);
        menu_Insert->addAction(actionT_ooltip);
        menu_Insert->addSeparator();
        menu_Insert->addAction(actionDictionary_Word);
        menu_Insert->addAction(action_Keyboard);
        menu_Insert->addSeparator();
        menu_Insert->addAction(actionD_ropdown);
        menu_Insert->addAction(actionRad_io);
        menu_Insert->addAction(actionE_ntry);
        menuP_ages->addAction(action_Add);
        menuP_ages->addAction(action_Remove);
        menuP_ages->addAction(action_Clone);
        menuP_ages->addSeparator();
        menuP_ages->addAction(action_Import);
        menuP_ages->addAction(actionE_xport);
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

        pageViewTabs->setCurrentIndex(2);
        tabWidget->setCurrentIndex(3);
        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Thorn", nullptr));
        action_Open->setText(QApplication::translate("MainWindow", "&Open...", nullptr));
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
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
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
        action_Add_Page->setText(QApplication::translate("MainWindow", "&Add Page", nullptr));
        action_Remove_Page->setText(QApplication::translate("MainWindow", "&Remove Page", nullptr));
        action_Word_Wrap->setText(QApplication::translate("MainWindow", "&Word Wrap", nullptr));
        action_Character_Editor->setText(QApplication::translate("MainWindow", "&Character Palette", nullptr));
        action_Duplicate_Page->setText(QApplication::translate("MainWindow", "&Duplicate Page", nullptr));
        actionImport_Page->setText(QApplication::translate("MainWindow", "&Import Page...", nullptr));
        action_Export_Page->setText(QApplication::translate("MainWindow", "&Export Page...", nullptr));
        actionDic_tionary->setText(QApplication::translate("MainWindow", "Dic&tionary...", nullptr));
        actionProperties->setText(QApplication::translate("MainWindow", "Properties...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionProperties->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionR_ename_Page->setText(QApplication::translate("MainWindow", "R&ename Page...", nullptr));
        action_16->setText(QApplication::translate("MainWindow", "-", nullptr));
        action_Add->setText(QApplication::translate("MainWindow", "&Add", nullptr));
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
        actionR_ename->setText(QApplication::translate("MainWindow", "R&ename", nullptr));
        action_Import->setText(QApplication::translate("MainWindow", "&Import...", nullptr));
        actionE_xport->setText(QApplication::translate("MainWindow", "E&xport...", nullptr));
        actionSettin_gs->setText(QApplication::translate("MainWindow", "Settin&gs...", nullptr));
        actionProject_Explorer->setText(QApplication::translate("MainWindow", "&Project Explorer", nullptr));
        action_Image->setText(QApplication::translate("MainWindow", "&Image...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Image->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+\303\215", nullptr));
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
        action_Heading->setText(QApplication::translate("MainWindow", "&Heading...", nullptr));
        actionConvert_to_MarkDown->setText(QApplication::translate("MainWindow", "Convert to &Markdown....", nullptr));
        action_List->setText(QApplication::translate("MainWindow", "&List...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+L", nullptr));
#endif // QT_NO_SHORTCUT
        action_Paragraph->setText(QApplication::translate("MainWindow", "&Paragraph", nullptr));
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
        action_Keyboard->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+K", nullptr));
#endif // QT_NO_SHORTCUT
        actionD_ropdown->setText(QApplication::translate("MainWindow", "D&ropdown", nullptr));
#ifndef QT_NO_SHORTCUT
        actionD_ropdown->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionRad_io->setText(QApplication::translate("MainWindow", "Rad&io", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRad_io->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionE_ntry->setText(QApplication::translate("MainWindow", "E&ntry", nullptr));
#ifndef QT_NO_SHORTCUT
        actionE_ntry->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+N", nullptr));
#endif // QT_NO_SHORTCUT
        action_Add_Section->setText(QApplication::translate("MainWindow", "&Add Section...", nullptr));
        action_Remove_Section->setText(QApplication::translate("MainWindow", "&Remove Section", nullptr));
        action_Add_2->setText(QApplication::translate("MainWindow", "&Add...", nullptr));
        action_Remove_2->setText(QApplication::translate("MainWindow", "&Remove", nullptr));
        actionRun->setText(QApplication::translate("MainWindow", "&Run...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRun->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        action_Dictionary->setText(QApplication::translate("MainWindow", "&Dictionary....", nullptr));
        actionR_esources->setText(QApplication::translate("MainWindow", "R&esources...", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(editTab), QApplication::translate("MainWindow", "Edit", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(previewTab), QApplication::translate("MainWindow", "Preview", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Subject", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Word", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Pronunciation", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Definition", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Notes", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(dictionaryTab), QApplication::translate("MainWindow", "Dictionary", nullptr));
        pageViewTabs->setTabText(pageViewTabs->indexOf(resourcesTab), QApplication::translate("MainWindow", "Resources", nullptr));
        label->setText(QApplication::translate("MainWindow", "Title:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Language:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Author:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Info:", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(projectCharTab), QApplication::translate("MainWindow", "Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(globalCharTab), QApplication::translate("MainWindow", "Global", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(commomCharTab), QApplication::translate("MainWindow", "Common", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Consonants", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "Affricates", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "Vowels", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MainWindow", "Tones", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Other", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ipaCharTab), QApplication::translate("MainWindow", "IPA", nullptr));
        projectButton->setText(QApplication::translate("MainWindow", "Project", nullptr));
        insertCharButton->setText(QApplication::translate("MainWindow", "A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
