#ifndef INSERTLISTDIALOG_H
#define INSERTLISTDIALOG_H

#include <QDialog>

namespace Ui {
class InsertListDialog;
}

class InsertListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InsertListDialog(QWidget *parent = nullptr);
    ~InsertListDialog();
    QString HTMLOutput;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::InsertListDialog *ui;
};

#endif // INSERTLISTDIALOG_H
