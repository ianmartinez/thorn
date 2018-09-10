#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtreeview.h"
#include "qtreewidget.h"
#include "file/markuphighlighter.h"

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

    // Init text editor
    MarkupHighlighter* highlighter = new MarkupHighlighter(ui->documentEdit);
    Q_UNUSED(highlighter);
    QFont font;
    font.setFamily("Consolas");
    font.setStyleHint(QFont::Monospace);
    font.setFixedPitch(true);
    font.setPointSize(10);
    const int tabStop = 4;  // 4 characters
    QFontMetrics metrics(font);
    ui->documentEdit->setTabStopDistance(tabStop * metrics.width(' '));
    ui->documentEdit->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pageViewTabs_currentChanged(int index)
{
    if(index == 1) // Preview tab
        ui->documentPreview->setHtml(ui->documentEdit->toPlainText());
}

void MainWindow::on_addWordButton_clicked()
{
    ui->dictionaryTable->insertRow(ui->dictionaryTable->rowCount());
}

void MainWindow::on_removeWordButton_clicked()
{
    int row_index = ui->dictionaryTable->currentIndex().row();
    if (row_index >= 0)
        ui->dictionaryTable->removeRow(row_index);
}

void MainWindow::on_action_Quit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_action_Keyboard_triggered()
{

}

void MainWindow::on_actionE_ntry_triggered()
{
    ui->documentEdit->insertPlainText("<entry>\n\t<w></w>\n\t<r></r>\n</entry>\n");
}
