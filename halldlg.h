#ifndef HALLDLG_H
#define HALLDLG_H

#include <QDialog>
#include <QUrl>
namespace Ui {
class HallDlg;
}

class HallDlg : public QDialog
{
    Q_OBJECT

public:
    explicit HallDlg(QWidget *parent = 0);
    ~HallDlg();
     void closeEvent(QCloseEvent *event);
 signals:


private slots:
     void on_pushButton_close_clicked();
     void openUrlSlot(QUrl url);

private:
    Ui::HallDlg *ui;
};

#endif // HALLDLG_H
