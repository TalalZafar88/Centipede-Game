#ifndef Mushroom_H_
#define Mushroom_H_

#include"GameObject.h"
#include<cstdlib>
#include<ctime>

class Mushroom:public GameObject {

protected:
 
int *ptrx;
int *ptry;
int total;

	
public:
int count;
Mushroom();
void virtual draw();
virtual ~Mushroom();
void checkbrick(int,int,ScoreBoard*);
int* getptrx();
int* getptry();


};


#endif 
