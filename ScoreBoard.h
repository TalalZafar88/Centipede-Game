#ifndef ScoreBoard_H_
#define ScoreBoard_H_



#include "GameObject.h"

class ScoreBoard:public GameObject {

protected:
 
 int score;

public:

 ScoreBoard();
 ScoreBoard(int);
 virtual void draw();
 void setscore(int);
 int getscore();
 virtual ~ScoreBoard();

  
};

#endif 

