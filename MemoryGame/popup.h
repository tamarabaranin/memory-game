#ifndef POPUP_H
#define POPUP_H

#include <QDialog>

namespace Ui {
class popUp;
}

class popUp : public QDialog
{
    Q_OBJECT

public:
    explicit popUp(QWidget *parent = nullptr);
    ~popUp();

signals:
    void restartClicked();
    void finishClicked();

private:
    Ui::popUp *ui;
};

#endif // POPUP_H
