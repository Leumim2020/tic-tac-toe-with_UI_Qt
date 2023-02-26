#ifndef FORM2_H
#define FORM2_H

#include <QDialog>
#include "QMessageBox"
#include "QString"

namespace Ui {
class form2;
}

class form2 : public QDialog
{
    Q_OBJECT

public:
    explicit form2(QWidget *parent = nullptr);
    ~form2();


public:
       QMessageBox::StandardButton victory_X,victory_Y;
       QString player_beginning_is,_px,_po,vx,vo,_ties_XO;
       QString m[4][4];
       int previous_position_i,previous_position_j,plays,plays_x = 0, plays_O = 0,victory_player_X = 0,victory_player_O = 0,_ties = 0;

public:
    void matrizLevel_one(QMessageBox::StandardButton player,int current_position_i,int current_position_j,int play_position_is, int playG);
    void restartGame();
private slots:

    void on_pushBtn_1_clicked();
    void on_pushBtn_2_clicked();
    void on_pushBtn_3_clicked();
    void on_pushBtn_4_clicked();
    void on_pushBtn_5_clicked();
    void on_pushBtn_6_clicked();
    void on_pushBtn_7_clicked();
    void on_pushBtn_8_clicked();
    void on_pushBtn_9_clicked();
    void on_pushBtn_11_clicked();
    void on_pushBtn_12_clicked();
    void on_pushBtn_13_clicked();
    void on_pushBtn_14_clicked();
    void on_pushBtn_15_clicked();
    void on_pushBtn_16_clicked();
    void on_pushBtn_10_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_17_clicked();

private:
    Ui::form2 *ui;
};

#endif // FORM2_H
