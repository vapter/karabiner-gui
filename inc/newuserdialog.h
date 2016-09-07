#ifndef NEWDIALOG_H
#define NEWDIALOG_H

#include <QDialog>
#include <QRadioButton>
#include <QLabel>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QPushButton>
#include <QGroupBox>
#include "userdata.h"


class NewUserDialog : public QDialog
{
    Q_OBJECT

public:
    NewUserDialog(QWidget *parent = 0);

private slots:
    void accept();

private:
    UserData *userdata;

    QLabel *usernameLabel;
    QLineEdit *usernameEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QLabel *passwordConfirmLabel;
    QLineEdit *passwordConfirmEdit;
    QGroupBox *cryptoBox;
    QRadioButton *Aes128RadioButton;
    QRadioButton *Aes192RadioButton;
    QRadioButton *Aes256RadioButton;
    QGroupBox *hashBox;
    QRadioButton *Sha256RadioButton;
    QRadioButton *Sha384RadioButton;
    QRadioButton *Sha512RadioButton;

    QDialogButtonBox *buttonBox;
    QPushButton *doneButton;
    QPushButton *cancelButton;
};


#endif // NEWDIALOG_H