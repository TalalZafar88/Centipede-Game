#ifndef Bomb_H_
#define Bomb_H_

#include"MoveableObject.h"
#include "Player.h"

class Bomb: public MoveableObject {

protected:
bool temp;


public:

Bomb(int,int);
void setbomb(int,int);
void move();
void draw();
void settemp();
bool gettemp();

};

#endif 

