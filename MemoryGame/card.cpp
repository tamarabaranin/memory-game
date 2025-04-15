#include "card.h"
#include<QIcon>
#include<QLayout>
#include<QGridLayout>

Card::Card(QPushButton *button, QWidget *parent) : QPushButton(parent)
{
    // Nasledi izgled i poziciju
    this->setText("?");
    this->setStyleSheet(button->styleSheet());
    this->setSizePolicy(button->sizePolicy());

    // Postavi istog roditelja
    this->setParent(button->parentWidget());

    // Dodaj u isti layout kao originalni QPushButton
    QGridLayout* layout = qobject_cast<QGridLayout*>(button->parentWidget()->layout());
    if (layout) {
        int row = 0, column = 0;
        layout->getItemPosition(layout->indexOf(button), &row, &column, nullptr, nullptr);
        layout->removeWidget(button);
        layout->addWidget(this, row, column);
    }

    button->hide();  // sakrij originalni QPushButton
    this->show();    // prikazi novu karticu

    connect(this, &QPushButton::clicked, [this]() {
        emit cardClicked(this);
    });

}

void Card::setImagePath(const QString &path)
{
    imagePath=path;
}

QString Card::getImagePath() const
{
    return imagePath;
}

void Card::reveal()
{
    setIcon(QIcon(imagePath));
    setIconSize(this->size());
    setText("");
}

void Card::hideCard()
{
    setIcon(QIcon());
    setText("?");
}

bool Card::isMatched() const
{
    return matched;
}

void Card::setMatched(bool value)
{
    matched=value;
}
