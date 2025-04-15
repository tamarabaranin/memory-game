#include "popup.h"
#include "ui_popup.h"

popUp::popUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUp)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,this,[this](){
        emit restartClicked();
        this->close();
    });

    connect(ui->pushButton_2,&QPushButton::clicked,this,[this]{
        emit finishClicked();
        this->close();
    });

}

popUp::~popUp()
{
    delete ui;
}
