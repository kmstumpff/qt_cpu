#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

#define ZERO 0

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int go;

public slots:
    void slotFast();
    void slotSlow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
