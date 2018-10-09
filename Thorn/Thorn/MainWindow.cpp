#include "ui_MainWindow.h"
#include "MainWindow.h"
#include "qtreeview.h"
#include "qtreewidget.h"
#include "CodeEditor.h"
#include "InsertDialogs/InsertListDialog.h"
#include <QButtonGroup>
#include "Widgets/FlowLayout.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
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

    // Init characters
    charMan = new CharacterManager();

    // Init text editor
    editor = new CodeEditor(ui->editTab);
    ui->editGrid->addWidget(editor);
    editor->setFrameShape(QFrame::NoFrame);
    editor->show();

    // Init StandardDiacritics
    ui->stdDiacriticsGroup->setMaximumHeight(this->height()/3);
    charMan->GenerateButtons(charMan->StandardDiacritics, ui->stdDiacriticsFrame, ui->stdDiacriticsGroup);
}

MainWindow::~MainWindow()
{
    delete editor;
    delete ui;
}

void MainWindow::on_pageViewTabs_currentChanged(int index)
{
    if(index == 1) // Preview tab
        ui->documentPreview->setHtml(editor->toPlainText());
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
    editor->insertPlainText("<entry>\n\t<w></w>\n\t<r></r>\n</entry>\n");
}


void MainWindow::on_action_List_triggered()
{
    auto insert_dlg = new InsertListDialog(this);

    if (insert_dlg->exec() == QDialog::Accepted)
        editor->insertPlainText(insert_dlg->HTMLOutput);

    delete insert_dlg;
}
