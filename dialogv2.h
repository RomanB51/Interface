#ifndef DIALOGV2_H
#define DIALOGV2_H

#include <QDialog>

namespace Ui {
class DialogV2;
}

class DialogV2 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogV2(QWidget *parent = nullptr);
    ~DialogV2();

private:
    Ui::DialogV2 *ui;
};

#endif // DIALOGV2_H
