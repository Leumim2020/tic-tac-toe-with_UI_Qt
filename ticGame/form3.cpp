#include "form3.h"
#include "ui_form3.h"

form3::form3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form3)
{
    ui->setupUi(this);
}

form3::~form3()
{
    delete ui;
}
