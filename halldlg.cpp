#include "halldlg.h"
#include "ui_halldlg.h"

HallDlg::HallDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HallDlg)
{
    ui->setupUi(this);
}

HallDlg::~HallDlg()
{
    delete ui;
}
void HallDlg::closeEvent(QCloseEvent *event)
{
}
