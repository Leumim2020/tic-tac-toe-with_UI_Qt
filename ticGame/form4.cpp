#include "form4.h"
#include "ui_form4.h"

form4::form4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form4)
{
    ui->setupUi(this);
}

form4::~form4()
{
    delete ui;
}
