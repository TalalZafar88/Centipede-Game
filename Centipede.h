#ifndef Centipede_H_
#define Centipede_H_

#include "MoveableObject.h"
#include "MagicSeg.h"
#include "MagicSeg.cpp"



class Centipede: public MoveableObject {

public:
Segment *ptr;
MagicSeg *ptr1;



Centipede();
void bulletcheck(int,int,ScoreBoard *);
void move();
void draw();
void move1(int * , int *);

 	
};

#endif 
