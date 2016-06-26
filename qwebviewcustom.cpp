#include "qwebviewcustom.h"

QWebViewCustom::QWebViewCustom(QWidget* parent):QWebView(parent),m_bOpenUrlSlot(true)
{

    showMaximized();
    this->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);
    connect(this, SIGNAL(linkClicked(QUrl)),this,SLOT(openUrlSlot(QUrl)));
    show();
}
void QWebViewCustom::openUrlSlot(QUrl url)
{
    if(m_bOpenUrlSlot)
     this->load(url);
}

