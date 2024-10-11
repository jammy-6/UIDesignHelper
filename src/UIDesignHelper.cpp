#pragma execution_character_set("utf-8")
#include <QVBoxLayout>
#include "UIDesignHelper.h"
#include <qpushbutton.h>
UIDesignHelper::UIDesignHelper(QWidget *parent) :
    QWidget(parent)
{

    //this->setAttribute(Qt::WA_TranslucentBackground, true);
    //设置无边框
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QVBoxLayout* mainLayout = new QVBoxLayout;
    this->setLayout(mainLayout);
    this->setFixedSize(350,400);
    //mainLayout->setSizeConstraint(QLayout::SetFixedSize);

    // 创建一个新的QAction
    QAction *reloadQssAction = new QAction(tr("Reload QSS"), this);
    // 连接QAction的triggered信号到一个槽函数
    connect(reloadQssAction, &QAction::triggered, this, &UIDesignHelper::reloadQss);
    // 添加QAction到右键菜单
    contextMenu.addAction(reloadQssAction);
    QPushButton* button = new QPushButton(this);
    button->setFixedSize(900,900);
    
}

//鼠标左击更新坐标值
void UIDesignHelper::mousePressEvent(QMouseEvent *event){
    //cur_pos = event->globalPos()-pos();
}

//鼠标左击并移动更新窗体位置
void UIDesignHelper::mouseMoveEvent(QMouseEvent *event){
   // move(event->globalPos()-cur_pos);
}



UIDesignHelper::~UIDesignHelper()
{

}
