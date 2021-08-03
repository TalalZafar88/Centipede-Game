#ifndef Flea_H_
#define Flea_H_

#include<cstdlib>
#include<ctime>
#include"MoveableObject.h"
#include"Bomb.h"


class Flea: public MoveableObject {



public:


Flea();

int counter;
bool temp;
void move();
void draw();
void collision(Bomb *b,ScoreBoard *);

 	
};

#endif 
