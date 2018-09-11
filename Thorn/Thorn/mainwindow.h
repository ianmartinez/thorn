#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "code_editor.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    CodeEditor* editor;
    ~MainWindow();

private slots:
    void on_pageViewTabs_currentChanged(int index);

    void on_addWordButton_clicked();

    void on_removeWordButton_clicked();

    void on_action_Quit_triggered();

    void on_action_Keyboard_triggered();

    void on_actionE_ntry_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
