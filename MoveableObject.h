#ifndef MoveableObject_H_
#define MoveableObject_H_

#include"GameObject.h"



class MoveableObject:public GameObject {

	
public:

virtual void move()=0;

};

#endif 

