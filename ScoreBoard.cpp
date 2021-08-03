
#include "ScoreBoard.h"




ScoreBoard::ScoreBoard(int a):GameObject(){


score=a;


}

ScoreBoard::ScoreBoard():GameObject(){

score=0;

}



 void ScoreBoard:: draw(){
 
 string temp;
 temp=to_string(score);
 
 DrawString( 50, 570, "Score=", colors[MEDIUM_TURQUOISE]);
 DrawString( 120, 570, temp, colors[MEDIUM_TURQUOISE]);
   
}


 void ScoreBoard::setscore(int a){

  score=a;
 
}

 int ScoreBoard::getscore(){

 return score;


}

ScoreBoard::~ScoreBoard(){



}
