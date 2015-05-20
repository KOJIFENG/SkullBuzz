#ifndef SKULLBUZZNODECONFIGDIALOG_H
#define SKULLBUZZNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class SkullbuzzNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class SkullbuzzNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SkullbuzzNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~SkullbuzzNodeConfigDialog();

private:
    Ui::SkullbuzzNodeConfigDialog *ui;
};

#endif // SKULLBUZZNODECONFIGDIALOG_H
