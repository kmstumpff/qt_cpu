#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->progressBar->setValue(ZERO);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slotFast()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(slotSlow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::slotFast () {
    int myArray[20] = { 12, 54, 32, 22, 20, 29, 18, 16, 12, 8, 22, 27, 32, 23, 45, 68, 98, 97, 96, 100 };

    //int prog_val = 0;
    for (int x = 0; x < 20; x++) {
        ui->progressBar->setValue(myArray[x]);
        Sleep(100);
        }

}
void MainWindow::slotSlow() {
    int prog_val = 0;
    ui->progressBar->setValue(prog_val);
    while (prog_val < 100) {
    Sleep(100);
    prog_val++;
    ui->progressBar->setValue(prog_val);

    }
}
