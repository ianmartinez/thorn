#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pageViewTabs_currentChanged(int index);

    void on_addWordButton_clicked();

    void on_removeWordButton_clicked();

    void on_action_Quit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
