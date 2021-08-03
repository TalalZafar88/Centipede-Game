
#include "MagicSeg.h"


MagicSeg::MagicSeg(){


count=0;
}




 void MagicSeg::draw(){


   if(count%2==0)   
    DrawSquare( getpx(),getpy(),10,colors[MISTY_ROSE]); 
   
  
   else
    DrawSquare( getpx(),getpy(),10,colors[GREEN]); 
  

   count++;
 
  
}
