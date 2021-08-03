#include "Flea.h"


Flea::Flea(){


setpy(610);
setpx(350);
counter=0;
temp=false;


}


void Flea::move(){

srand(time(NULL));



if(counter>300){
 counter=0;
setpy(610);
setpx(rand()%520);

}

else if(counter>30){
setpy(getpy()-10);

}



counter++;

}

void Flea:: collision(Bomb *b, ScoreBoard *s){


 if( b->getpy()==getpy() || (b->getpy()>getpy()-10 && b->getpy()<getpy()))
 if((b->getpx()>getpx()-15 && b->getpx()<getpx()) || b->getpx()==getpx() || (b->getpx()<getpx()+15 && b->getpx()>getpx())){


    temp=true;

    s->setscore(s->getscore()+200);





}




}


void Flea::draw(){






if(temp==false)
DrawSquare( getpx() , getpy() ,10,colors[LIGHT_GOLDEN_ROD_YELLOW]);


else
temp=false;



} 	
