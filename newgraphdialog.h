#ifndef NEWGRAPHDIALOG_H
#define NEWGRAPHDIALOG_H

#include <QDialog>

namespace Ui {
class NewGraphDialog;
}

class NewGraphDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewGraphDialog(QWidget *parent = 0);
    ~NewGraphDialog();

private:
    Ui::NewGraphDialog *ui;
};

#endif // NEWGRAPHDIALOG_H
