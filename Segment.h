#ifndef Segment_H_
#define Segment_H_

#include "MoveableObject.h"



class Segment: public MoveableObject {



public:
int count;
bool temp;
bool temp1;
bool updown;
bool temp3;
Segment();
void move();
void draw();

};

#endif 
