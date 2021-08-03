#include "Centipede.h"


Centipede::Centipede(){

 ptr1=new MagicSeg;
 ptr1->setpx(90);
 ptr1->setpy(520);

 ptr=new Segment[5];
 ptr[0].setpx(80);
 ptr[0].setpy(520);
 ptr[1].setpx(70);
 ptr[1].setpy(520);
 ptr[2].setpx(60);
 ptr[2].setpy(520);
 ptr[3].setpx(50);
 ptr[3].setpy(520);
 ptr[4].setpx(40);
 ptr[4].setpy(520);
 

}
























// it checks for bullet collision
void Centipede::bulletcheck(int bx, int by,ScoreBoard *s){


 

  for(int i=0; i<5; i++)
{


  if((ptr[i].getpy()>=by-10 && ptr[i].getpy()<by) || ptr[i].getpy()==by)
  if((ptr[i].getpx()>bx-10 && ptr[i].getpx()<bx) || (ptr[i].getpx()<bx+10 && ptr[i].getpx()>bx) || ptr[i].getpx()==bx)
   {
       
            
          for(int j=0; j<i; j++)
         {
            ptr[j].setpx(ptr[j].getpx()-5);
           
       
         }
          
        
         
         s->setscore(s->getscore()+10);
          


























       
 
  }




 }











}



void Centipede:: move1(int *px , int *py){

for(int j=0; j<1; j++){

 for(int i=0; i<25; i++){

    if((ptr1[j].getpy()>py[i]-10 && ptr1[j].getpy()<py[i]) || ptr1[j].getpy()==py[i] || (ptr1[j].getpy()<py[i]+10 && ptr1[j].getpy()>py[i]))
    if((ptr1[j].getpx()>px[i]-10 && ptr1[j].getpx()<px[i]) ||  (ptr1[j].getpx()<px[i]+10 && ptr1[j].getpx()>px[i]) ||ptr1[j].getpx()==px[i] ){

         ptr1[j].setpy(ptr1[j].getpy()-10);

         

ptr1[j].temp1=true;
         break;
 
      }
        }

}




for(int j=0; j<5; j++){

 for(int i=0; i<25; i++){

    if((ptr[j].getpy()>py[i]-10 && ptr[j].getpy()<py[i]) || ptr[j].getpy()==py[i] || (ptr[j].getpy()<py[i]+10 && ptr[j].getpy()>py[i]))
    if((ptr[j].getpx()>px[i]-10 && ptr[j].getpx()<px[i]) ||  (ptr[j].getpx()<px[i]+10 && ptr[j].getpx()>px[i]) || ptr[j].getpx()==px[i] ){

         ptr[j].setpy(ptr[j].getpy()-10);
        



ptr[j].temp1=true;

          break;
 
      }
        }

}

}

void Centipede:: move(){


 ptr1->move();




 for(int i=0; i<5; i++){


     
  ptr[i].move();

 }
 

}


void Centipede:: draw(){

 
 ptr1->draw();


for(int i=0; i<5; i++){

  ptr[i].draw();

 }
 




}
