#ifndef HALLDLG_H
#define HALLDLG_H

#include <QDialog>

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


private:
    Ui::HallDlg *ui;
};

#endif // HALLDLG_H
