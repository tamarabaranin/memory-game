#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QStringList>
#include<QTimer>
#include<algorithm>
#include<QRandomGenerator>

#include "popup.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    connect(ui->pushButton_restart,&QPushButton::clicked,this,&MainWindow::restartGame);

    setupCards();

    for (int i = 1; i <= 16; i++) {
        QPushButton *button = findChild<QPushButton*>(QString("pushButton_%1").arg(i));
        if (button) {
            button->installEventFilter(this);
        }
    }
}

MainWindow::~MainWindow()
{

    delete ui;
}

bool MainWindow::eventFilter(QObject *object, QEvent *event)
{

    QPushButton *button=qobject_cast<QPushButton*>(object);

    if(button){
        if(event->type()==QEvent::Enter){
            button->setStyleSheet(button->styleSheet() + "background-color: rgb(253, 216, 216);");
        }else if(event->type()==QEvent::Leave){
            button->setStyleSheet(button->styleSheet().remove("background-color: rgb(253, 216, 216);"));
        }
    }

    return QMainWindow::eventFilter(object,event);
}

void MainWindow::setupCards()
{

    cards={
        ui->pushButton_1, ui->pushButton_2, ui->pushButton_3, ui->pushButton_4,
        ui->pushButton_5, ui->pushButton_6, ui->pushButton_7, ui->pushButton_8,
        ui->pushButton_9, ui->pushButton_10, ui->pushButton_11, ui->pushButton_12,
        ui->pushButton_13, ui->pushButton_14,  ui->pushButton_15, ui->pushButton_16,
    };

    QStringList imagePaths={
        ":/images/images/bee.png", ":/images/images/cat.png", ":/images/images/dog.png", ":/images/images/elephant.png",
        ":/images/images/koala.png", ":/images/images/lion.png", ":/images/images/snail.png", ":/images/images/turtle.png"
    };

    imagePaths+=imagePaths;

    auto rng=QRandomGenerator::global();
    std::shuffle(imagePaths.begin(),imagePaths.end(),*rng);

    for(int i=0;i<cards.size();++i){
        QPushButton *btn=cards[i];
        btn->setText("?");
        btn->setIcon(QIcon()); // ukloni sliku koja je prikazana ranije
        btn->setEnabled(true);

        cardImages[btn]=imagePaths[i];

        connect(btn,&QPushButton::clicked,this,&MainWindow::onCardClicked);
    }

    attempts=0;
    ui->label_2->setText("Attempts:0");
    openedCards.clear();
}

void MainWindow::onCardClicked()
{

    QPushButton *button=qobject_cast<QPushButton*> (sender());

    if(!button || openedCards.contains(button) || matchedCards.contains(button) || openedCards.size()>=2) // ne moze vise od 2 kartice odjednom da otvori
        return ;

    button->setIcon(QIcon(cardImages[button]));
    button->setIconSize(button->size());
    button->setText("");

    openedCards.append(button);

    if(openedCards.size()==2){
        attempts++;
        ui->label_2->setText("Attempts: " + QString::number(attempts));

        QPushButton *first=openedCards[0];
        QPushButton *second=openedCards[1];

        if(cardsMatch(first,second)){
            matchedCards.insert(first);
            matchedCards.insert(second);

            openedCards.clear();
            checkGameFinished();
        }else{
            QTimer::singleShot(1000,this,[=](){
               resetCard(first);
               resetCard(second);
               openedCards.clear();
            });
        }
    }
}

void MainWindow::revealCard(QPushButton *button)
{

    button->setIcon(QIcon(cardImages[button]));
    button->setIconSize(button->size());
    button->setText("");
}

void MainWindow::resetCard(QPushButton *button)
{

    button->setIcon(QIcon());
    button->setText("?");
}

bool MainWindow::cardsMatch(QPushButton *first, QPushButton *second)
{

    return cardImages[first]==cardImages[second];
}

void MainWindow::checkGameFinished()
{

    if(matchedCards.size()==cards.size()){
        onGameFinished();
    }
}
void MainWindow::restartGame()
{

    matchedCards.clear();
    setupCards();

}

void MainWindow::onRestartClicked()
{

    restartGame();
}

void MainWindow::onFinishClicked()
{

    QApplication::quit();
}

void MainWindow::onGameFinished()
{

    popUp* popUpWindow=new popUp(this);
    connect(popUpWindow,&popUp::restartClicked,this,&MainWindow::onRestartClicked);
    connect(popUpWindow,&popUp::finishClicked,this,&MainWindow::onFinishClicked);

    popUpWindow->exec();
}



