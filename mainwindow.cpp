#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "halldlg.h"
#include "XmlFile.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);
    setWindowFlags(Qt::FramelessWindowHint);
    //QMetaObject::connectSlotsByName(this);
    //connect(pushbutton,SIGNAL(ui->labelclose)),this,SLOT(on_pushbutton_clicked()));
   // connect()

    XmlFile::GetInstance()->m_FileIPMap;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_close_clicked()
{
    close();
}


void MainWindow::on_pushButtonLogOn_clicked()
{
    HallDlg* mainhalldlg = new HallDlg();
    mainhalldlg->show();
    close();
}
