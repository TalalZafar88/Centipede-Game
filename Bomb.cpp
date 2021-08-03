#include "Bomb.h"


Bomb::Bomb(int a,int b){

setpx(a);
setpy(b);
temp=false;

}

void Bomb::setbomb(int a,int b){

if(temp==false){
setpx(a+10);
setpy(b);

}


}



void Bomb::settemp(){

 temp=true;


}


bool Bomb::gettemp(){



  return temp;

 
}

void Bomb::move(){

  if(getpy()>30)
  setpy(getpy()+20);
  
  if(getpy()>550)
   temp=false;

}


void Bomb::draw(){



DrawSquare(  getpx() , getpy() ,10,colors[BLACK]); 


}

