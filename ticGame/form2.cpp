#include "form2.h"
#include "ui_form2.h"

form2::form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form2)
{
    ui->setupUi(this);
}

form2::~form2()
{
    delete ui;
}

void form2::on_pushButton_clicked()
{

}

