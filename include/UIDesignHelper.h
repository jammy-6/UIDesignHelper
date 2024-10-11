#ifndef WEATHERFORECAST_H
#define WEATHERFORECAST_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QList>
#include <QLabel>
#include <QContextMenuEvent>
#include <QNetworkAccessManager>
#include <QMessageBox>
#include <QNetworkReply>
#include <QDate>
#include <QHttpMultiPart>
#include <QPainter>
#include <QPen>
#include <QChart>
#include <QLineSeries>
#include <QChartView>
#include <QValueAxis>
#include <QScrollArea>
#include <algorithm>
#include <QTimer>
#include <QMutex>
#include <functional>
#include <QColor>
#include <QFrame>
#include <QApplication>
#include <QLayout>

class UIDesignHelper : public QWidget
{
    Q_OBJECT

public:
    explicit UIDesignHelper(QWidget *parent = nullptr);
    ~UIDesignHelper();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void setUI();

protected:
    void contextMenuEvent(QContextMenuEvent *event) override
    {
        // 在鼠标右键点击的位置显示菜单
        contextMenu.exec(event->globalPos());
    }
private:
    QMenu contextMenu;
    
private slots:
    void reloadQss()
    {
        // 重新加载QSS
        QFile file(":/qss/style.qss");
        file.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(file.readAll());
        qApp->setStyleSheet(styleSheet);
    }
    

};

#endif 
