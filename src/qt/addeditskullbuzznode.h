#ifndef ADDEDITSKULLBUZZNODE_H
#define ADDEDITSKULLBUZZNODE_H

#include <QDialog>

namespace Ui {
class AddEditSkullbuzzNode;
}


class AddEditSkullbuzzNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditSkullbuzzNode(QWidget *parent = 0);
    ~AddEditSkullbuzzNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditSkullbuzzNode *ui;
};

#endif // ADDEDITSKULLBUZZNODE_H
