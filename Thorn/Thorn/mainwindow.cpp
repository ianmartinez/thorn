#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtreeview.h"
#include "qtreewidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create new item (top level item)
    QTreeWidgetItem *topLevelItem = new QTreeWidgetItem(ui->treeWidget);
    // Add it on our tree as the top item.
    ui->treeWidget->addTopLevelItem(topLevelItem);
    // Set text for item
    topLevelItem->setText(0,"Item");
    // Create new item and add as child item
    QTreeWidgetItem *item=new QTreeWidgetItem(topLevelItem);
    // Set text for item
    item->setText(0,"SubItem");
}

MainWindow::~MainWindow()
{
    delete ui;
}
