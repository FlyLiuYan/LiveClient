#include "halldlg.h"
#include "ui_halldlg.h"
#include "qwebviewcustom.h"
HallDlg::HallDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HallDlg)
{
    ui->setupUi(this);
     QWebViewCustom* web = (QWebViewCustom*)ui->widgetWeb;

   web->load(QUrl("http://www.baidu.com/"));
   web->SetOpenUrlSlot(false);
   connect(web, SIGNAL(linkClicked(QUrl)),this,SLOT(openUrlSlot(QUrl)));
   setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
   showFullScreen();
}

HallDlg::~HallDlg()
{
    delete ui;
}
void HallDlg::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
}

void HallDlg::on_pushButton_close_clicked()
{
    close();
}

void HallDlg::openUrlSlot(QUrl url)
{
    QWebViewCustom* web = (QWebViewCustom*)ui->widgetWeb;
    web->load(url);
}
