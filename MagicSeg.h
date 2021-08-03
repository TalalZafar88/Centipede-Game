#ifndef MagicSeg_H_
#define MagicSeg_H_

#include "Segment.h"
#include<cstdlib>
#include<ctime>



class MagicSeg: public Segment {



public:
int count;
MagicSeg();
void draw();

};

#endif 
