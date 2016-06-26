#ifndef QWEBVIEWCUSTOM_H
#define QWEBVIEWCUSTOM_H
#include <QWebView>

class QWebViewCustom : public QWebView
{
      Q_OBJECT
public:
    QWebViewCustom(QWidget* parent = 0);
    bool m_bOpenUrlSlot;
    void SetOpenUrlSlot(bool set){m_bOpenUrlSlot = set;};
private slots:
    void openUrlSlot(QUrl url);


};

#endif // QWEBVIEWCUSTOM_H
