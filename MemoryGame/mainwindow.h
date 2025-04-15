#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QVector>
#include<QString>
#include<QMap>
#include <QMainWindow>
#include<QPushButton>
#include<QSet>

#include "popup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    bool eventFilter(QObject *object, QEvent *event) override;

private:
    void setupCards();

    void revealCard(QPushButton *button);
    void resetCard(QPushButton *button);
    bool cardsMatch(QPushButton *first,QPushButton *second);
    void checkGameFinished();


private slots:
    void onCardClicked();
    void restartGame();


    void onRestartClicked();
    void onFinishClicked();
    void onGameFinished();

private:

    QVector<QPushButton*> cards;
    QMap<QPushButton*,QString> cardImages;
    QVector<QPushButton*> openedCards;
    QSet<QPushButton*> matchedCards;

    int attempts=0;

    Ui::MainWindow *ui;


};
#endif // MAINWINDOW_H
