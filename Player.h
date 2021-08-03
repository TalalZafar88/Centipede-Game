#ifndef Player_H_
#define Player_H_

#include"MoveableObject.h"
#include "Flea.h"
#include "Centipede.h"


class Player: public MoveableObject {

protected:
bool up;
bool down;
bool right;
bool left;

public:


Player();
void collision(Flea* ,Centipede*);
void move();
void draw();
void setup();
bool getup();
void setdown();
bool getdown();
void setright();
bool getright();
void setleft();
bool getleft();
int getplayerx();
int getplayery();
void fleadetect();

 	
};

#endif 
