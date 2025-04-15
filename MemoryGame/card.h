#ifndef CARD_H
#define CARD_H

#include<QVector>
#include<QString>
#include<QPushButton>
#include<QGridLayout>

class Card :public QPushButton{
    Q_OBJECT

public:
    explicit Card(QPushButton *button, QWidget *parent=nullptr);

    // postavlja koja slika ide uz karticu
    void setImagePath(const QString &path);
    // vraca koja je slika vezana za karticu
    QString getImagePath() const;

    void reveal();
    void hideCard();
    bool isMatched() const;
    void setMatched(bool value);

signals:
    void cardClicked(Card *card);

private:
    QString imagePath; // gde se nalazi slika
    bool matched=false; // da li je pogodjena

};

#endif // CARD_H
