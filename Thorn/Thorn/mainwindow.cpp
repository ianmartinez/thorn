#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtreeview.h"
#include "qtreewidget.h"
#include "xmlsyntaxhighlighter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
/*
    // Create new item (top level item)
    QTreeWidgetItem *topLevelItem = new QTreeWidgetItem(ui->treeWidget);
    // Add it on our tree as the top item.
    ui->treeWidget->addTopLevelItem(topLevelItem);
    // Set text for item
    topLevelItem->setText(0,"Item");
    // Create new item and add as child item
    QTreeWidgetItem *item=new QTreeWidgetItem(topLevelItem);
    // Set text for item
    item->setText(0,"SubItem"); */

    XMLSyntaxHighlighter* highlighter = new XMLSyntaxHighlighter(ui->documentEdit);
    Q_UNUSED(highlighter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pageViewTabs_currentChanged(int index)
{
    if(index == 1) {
        ui->documentPreview->setHtml(ui->documentEdit->toPlainText());
    }
}
