#ifndef GameObject_H_
#define GameObject_H_

#include "util.h"

#include"Position.h"

class  GameObject {

protected:

 Position p;
	
public:

 GameObject();
 void setpx(int);
 void setpy(int);
 virtual void draw()=0;
 int getpx();
 int getpy();
 virtual ~GameObject();

 	
};

#endif 

