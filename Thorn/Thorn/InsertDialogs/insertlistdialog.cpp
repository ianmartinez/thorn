#include "InsertListDialog.h"
#include "ui_InsertListDialog.h"

InsertListDialog::InsertListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsertListDialog)
{
    ui->setupUi(this);
}

InsertListDialog::~InsertListDialog()
{
    delete ui;
}

void InsertListDialog::on_buttonBox_accepted()
{
   QString tag = ui->orderedListCheck->isChecked() ? "ol" : "ul";
   HTMLOutput = "<" + tag + ">\n";

   for(int i=0; i<ui->itemCountSpinner->value(); i++)
       HTMLOutput += "\t<li> </li>\n";

   HTMLOutput += "<" + tag + "/>\n";
}
