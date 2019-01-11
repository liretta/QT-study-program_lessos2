#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "secondwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //only one window will be active in the same time
   /* SecondWindow window;
    window.setModal(true); //make a window modsl - nested
    window.exec(); //window will be executable */

    //hide main window
    hide();

    //create new window
    wind = new SecondWindow(this);
    wind->show();

    //again show main window
    show();
}
