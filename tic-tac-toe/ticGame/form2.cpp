#include "form2.h"
#include "ui_form2.h"

form2::form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form2)
{
    ui->setupUi(this);
    QMessageBox::StandardButton player_X_OR_O = QMessageBox::question(this,"Choose  player","Who will begin the game X(Yes) or O(No)?",QMessageBox::Yes|QMessageBox::No);
    matrizLevel_one(player_X_OR_O,0,0,0,0);
}

form2::~form2()
{
    delete ui;
}

void form2::matrizLevel_one(QMessageBox::StandardButton player,int current_position_i,int current_position_j,int play_position_is,int playG){

//to determine the player at the beginning
    if(player == QMessageBox::Yes){
        player_beginning_is = "X";
    }else if(player == QMessageBox::No){
        player_beginning_is = "O";
    }
// end determination

    plays += playG;

//initializing the head office at the beginning with player
    if(plays == 1){

        previous_position_i = current_position_i;
        previous_position_j = current_position_j;

        if(play_position_is == 1){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_1->setText(player_beginning_is);
        }
        if(play_position_is == 2){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_2->setText(player_beginning_is);
        }
        if(play_position_is == 3){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_3->setText(player_beginning_is);
        }
        if(play_position_is == 4){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_4->setText(player_beginning_is);
        }
        if(play_position_is == 5){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_5->setText(player_beginning_is);
        }
        if(play_position_is == 6){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_6->setText(player_beginning_is);
        }
        if(play_position_is == 7){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_7->setText(player_beginning_is);
        }
        if(play_position_is == 8){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_8->setText(player_beginning_is);
        }
        if(play_position_is == 9){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_9->setText(player_beginning_is);
        }
        if(play_position_is == 10){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_10->setText(player_beginning_is);
        }
        if(play_position_is == 11){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_11->setText(player_beginning_is);
        }
        if(play_position_is == 12){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_12->setText(player_beginning_is);
        }
        if(play_position_is == 13){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_13->setText(player_beginning_is);
        }
        if(play_position_is == 14){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_14->setText(player_beginning_is);
        }
        if(play_position_is == 15){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_15->setText(player_beginning_is);
        }
        if(play_position_is == 16){
            m[current_position_i][current_position_j] = player_beginning_is;
            ui->pushButton_16->setText(player_beginning_is);
        }

        if(player_beginning_is == "X"){

           plays_x +=1;
           _px.setNum(plays_x);
           ui->pushBtn_plays_X->setText(_px);


        }else if(player_beginning_is == "O"){

               plays_O +=1;
               _po.setNum(plays_O);
               ui->pushBtn_plays_O->setText(_po);

        }


    }
//----------------------------------------------------------------------------
//-----------------------------------------------------------end initializing

// creating random values in the positions of the head office of X or O
    if(plays >= 2){

        if(m[previous_position_i][previous_position_j] == "X"){

            m[current_position_i][current_position_j] = "O";
            previous_position_i = current_position_i;
            previous_position_j = current_position_j;

            // count plays
            plays_O +=1;
            _po.setNum(plays_O);
            ui->pushBtn_plays_O->setText(_po);

            if(play_position_is == 1){
                ui->pushButton_1->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 1){
                ui->pushButton_1->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 2){
                ui->pushButton_2->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 3){
                ui->pushButton_3->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 4){
                ui->pushButton_4->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 5){
                ui->pushButton_5->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 6){
                ui->pushButton_6->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 7){
                ui->pushButton_7->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 8){
                ui->pushButton_8->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 9){
                ui->pushButton_9->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 10){
                ui->pushButton_10->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 11){
                ui->pushButton_11->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 12){
                ui->pushButton_12->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 13){
                ui->pushButton_13->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 14){
                ui->pushButton_14->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 15){
                ui->pushButton_15->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 16){
                ui->pushButton_16->setText(m[current_position_i][current_position_j]);
            }
//-----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------

        }else  if(m[previous_position_i][previous_position_j] == "O"){

            m[current_position_i][current_position_j] = "X";
            previous_position_i = current_position_i;
            previous_position_j = current_position_j;

            // count plays
            plays_x +=1;
            _px.setNum(plays_x);
            ui->pushBtn_plays_X->setText(_px);

            if(play_position_is == 1){
                ui->pushButton_1->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 1){
                ui->pushButton_1->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 2){
                ui->pushButton_2->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 3){
                ui->pushButton_3->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 4){
                ui->pushButton_4->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 5){
                ui->pushButton_5->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 6){
                ui->pushButton_6->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 7){
                ui->pushButton_7->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 8){
                ui->pushButton_8->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 9){
                ui->pushButton_9->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 10){
                ui->pushButton_10->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 11){
                ui->pushButton_11->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 12){
                ui->pushButton_12->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 13){
                ui->pushButton_13->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 14){
                ui->pushButton_14->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 15){
                ui->pushButton_15->setText(m[current_position_i][current_position_j]);
            }

            if(play_position_is == 16){
                ui->pushButton_16->setText(m[current_position_i][current_position_j]);
            }
        }
//----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------end else if
    }// end random values

//to verify there is victory in game------------------------------------------------------------------------------------------------------------------------------------
            if((m[0][0] == "X" && m[0][1] == "X" && m[0][2] == "X" && m[0][3] == "X") || (m[1][0] == "X" && m[1][1] == "X" && m[1][2] == "X" && m[1][3] == "X")||
               (m[2][0] == "X" && m[2][1] == "X" && m[2][2] == "X" && m[2][3] == "X") || (m[3][0] == "X" && m[3][1] == "X" && m[3][2] == "X" && m[3][3] == "X")||
               (m[0][0] == "X" && m[1][0] == "X" && m[2][0] == "X" && m[3][0] == "X") || (m[0][1] == "X" && m[1][1] == "X" && m[2][1] == "X" && m[3][1] == "X")||
               (m[0][2] == "X" && m[1][2] == "X" && m[2][2] == "X" && m[3][2] == "X") || (m[0][3] == "X" && m[1][3] == "X" && m[2][3] == "X" && m[3][3] == "X")||
               (m[0][0] == "X" && m[1][1] == "X" && m[2][2] == "X" && m[3][3] == "X") || (m[0][3] == "X" && m[1][2] == "X" && m[2][1] == "X" && m[3][0] == "X")){

                    victory_player_X+=1;
                    vx.setNum(victory_player_X);
                    ui->pushBtn_victorys_X->setText(vx);
                    QMessageBox::information(this,"Informação","Jogador X ganhou");


             }else if((m[0][0] == "O" && m[0][1] == "O" && m[0][2] == "O" && m[0][3] == "O") || (m[1][0] == "O" && m[1][1] == "O" && m[1][2] == "O" && m[1][3] == "O")||
                      (m[2][0] == "O" && m[2][1] == "O" && m[2][2] == "O" && m[2][3] == "O") || (m[3][0] == "O" && m[3][1] == "O" && m[3][2] == "O" && m[3][3] == "O")||
                      (m[0][0] == "O" && m[1][0] == "O" && m[2][0] == "O" && m[3][0]==  "O") || (m[0][1] == "O" && m[1][1] == "O" && m[2][1] == "O" && m[3][1] == "O")||
                      (m[0][2] == "O" && m[1][2] == "O" && m[2][2] == "O" && m[3][2] == "O") || (m[0][3] == "O" && m[1][3] == "O" && m[2][3] == "O" && m[3][3] == "O")||
                      (m[0][0] == "O" && m[1][1] == "O" && m[2][2] == "O" && m[3][3] == "O") || (m[0][3] == "O" && m[1][2] == "O" && m[2][1] == "O" && m[3][0] == "O")){

                     victory_player_O +=1;
                     vo.setNum(victory_player_O);
                     ui->pushBtn_victorys_O->setText(vo);
                     QMessageBox::information(this,"Informação","Jogador 0 ganhou");

             }
// end verify------------------------------------------------------------------------------------------------------------------------------------------------------------
// to verify ties--------------------------------------------------------------------------------------------------------------------------------------------------------
    if(plays == 16){
        if(victory_player_X == 0 && victory_player_O == 0){
            _ties =+1;
            _ties_XO.setNum(_ties);
             ui->pushBtn_ties_X->setText(_ties_XO);
             ui->pushBtn_ties_O->setText(_ties_XO);
        }
    }
// end verification-------------------------------------------------------------------------------------------------------------------------------------------------------
}




void form2::on_pushBtn_1_clicked()
{
    matrizLevel_one(QMessageBox::Ok,0,0,1,1);
    ui->pushBtn_1->hide();
}

void form2::on_pushBtn_2_clicked()
{
    matrizLevel_one(QMessageBox::Ok,0,1,2,1);
    ui->pushBtn_2->hide();
}

void form2::on_pushBtn_3_clicked()
{
    matrizLevel_one(QMessageBox::Ok,0,2,3,1);
    ui->pushBtn_3->hide();
}

void form2::on_pushBtn_4_clicked()
{
    matrizLevel_one(QMessageBox::Ok,0,3,4,1);
    ui->pushBtn_4->hide();
}

void form2::on_pushBtn_5_clicked()
{
    matrizLevel_one(QMessageBox::Ok,1,0,5,1);
    ui->pushBtn_5->hide();
}

void form2::on_pushBtn_6_clicked()
{
    matrizLevel_one(QMessageBox::Ok,1,1,6,1);
    ui->pushBtn_6->hide();
}

void form2::on_pushBtn_7_clicked()
{
    matrizLevel_one(QMessageBox::Ok,1,2,7,1);
    ui->pushBtn_7->hide();
}

void form2::on_pushBtn_8_clicked()
{
    matrizLevel_one(QMessageBox::Ok,1,3,8,1);
    ui->pushBtn_8->hide();
}

void form2::on_pushBtn_9_clicked()
{
    matrizLevel_one(QMessageBox::Ok,2,0,9,1);
    ui->pushBtn_9->hide();
}

void form2::on_pushBtn_10_clicked()
{
    matrizLevel_one(QMessageBox::Ok,2,1,10,1);
    ui->pushBtn_10->hide();
}

void form2::on_pushBtn_11_clicked()
{
    matrizLevel_one(QMessageBox::Ok,2,2,11,1);
    ui->pushBtn_11->hide();
}

void form2::on_pushBtn_12_clicked()
{
    matrizLevel_one(QMessageBox::Ok,2,3,12,1);
    ui->pushBtn_12->hide();
}

void form2::on_pushBtn_13_clicked()
{
    matrizLevel_one(QMessageBox::Ok,3,0,13,1);
    ui->pushBtn_13->hide();
}

void form2::on_pushBtn_14_clicked()
{
    matrizLevel_one(QMessageBox::Ok,3,1,14,1);
    ui->pushBtn_14->hide();
}

void form2::on_pushBtn_15_clicked()
{
    matrizLevel_one(QMessageBox::Ok,3,2,15,1);
    ui->pushBtn_15->hide();
}

void form2::on_pushBtn_16_clicked()
{
    matrizLevel_one(QMessageBox::Ok,3,3,16,1);
    ui->pushBtn_16->hide();
}



void form2::on_pushButton_18_clicked()
{

//------------------------------------------------
    ui->pushBtn_1->show();
    ui->pushBtn_2->show();
    ui->pushBtn_3->show();
    ui->pushBtn_4->show();
    ui->pushBtn_5->show();
    ui->pushBtn_6->show();
    ui->pushBtn_7->show();
    ui->pushBtn_8->show();
    ui->pushBtn_9->show();
    ui->pushBtn_10->show();
    ui->pushBtn_11->show();
    ui->pushBtn_12->show();
    ui->pushBtn_13->show();
    ui->pushBtn_14->show();
    ui->pushBtn_15->show();
    ui->pushBtn_16->show();

//---------------------------------------------
    for(int i = 0;i < 4;i++){
        for(int j =0;j < 4;j++){
            m[i][j] = "0";
        }
    }
//---------------------------------------------
    plays = 0;
    plays_x = 0;
    plays_O = 0;
    victory_player_X = 0;
    victory_player_O = 0;
    _ties = 0;
//----------------------------------------------
    _px.setNum(plays_x);
    _po.setNum(plays_O);
    _ties_XO.setNum(_ties);
    vx.setNum(victory_player_X);
    vo.setNum(victory_player_O);
//----------------------------------------------
    ui->pushBtn_plays_X->setText(_px);
    ui->pushBtn_plays_O->setText(_po);
    ui->pushBtn_victorys_X->setText(vx);
    ui->pushBtn_victorys_O->setText(vo);
    ui->pushBtn_ties_X->setText(_ties_XO);
    ui->pushBtn_ties_O->setText(_ties_XO);
//--------------------------------------------
    QMessageBox::StandardButton player_X_OR_O_restart = QMessageBox::question(this,"Choose  player","Who will begin the game X(Yes) or O(No)?",QMessageBox::Yes|QMessageBox::No);
    matrizLevel_one(player_X_OR_O_restart,0,0,0,0);
}


void form2::on_pushButton_17_clicked()
{
    //------------------------------------------------
        ui->pushBtn_1->show();
        ui->pushBtn_2->show();
        ui->pushBtn_3->show();
        ui->pushBtn_4->show();
        ui->pushBtn_5->show();
        ui->pushBtn_6->show();
        ui->pushBtn_7->show();
        ui->pushBtn_8->show();
        ui->pushBtn_9->show();
        ui->pushBtn_10->show();
        ui->pushBtn_11->show();
        ui->pushBtn_12->show();
        ui->pushBtn_13->show();
        ui->pushBtn_14->show();
        ui->pushBtn_15->show();
        ui->pushBtn_16->show();

//---------------------------------------------
        for(int i = 0;i < 4;i++){
            for(int j =0;j < 4;j++){
                m[i][j] = "0";
            }
        }
//---------------------------------------------
        plays = 0;
        plays_x = 0;
        plays_O = 0;
//----------------------------------------------
        _px.setNum(plays_x);
        _po.setNum(plays_O);
//---------------------------------------------
        ui->pushBtn_plays_X->setText(_px);
        ui->pushBtn_plays_O->setText(_po);
//--------------------------------------------
        QMessageBox::StandardButton player_X_OR_O_restart = QMessageBox::question(this,"Choose  player","Who will begin the game X(Yes) or O(No)?",QMessageBox::Yes|QMessageBox::No);
        matrizLevel_one(player_X_OR_O_restart,0,0,0,0);
}

