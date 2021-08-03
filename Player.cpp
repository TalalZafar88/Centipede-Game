
#include "Player.h"

Player::Player(){

 setpx(400);
 setpy(20);
 up=false;
 down=false;
 right=false;
 left=false;
 
}


int Player:: getplayerx(){

 return getpx();

}
int Player:: getplayery(){

 return getpy();
}


void Player::setup(){

 up=true;

 down=false;
 right=false;
 left=false;
 
 
}
bool Player:: getup(){
  
 return up;

}
void Player::setdown(){

  down=true;
   up=false;

 right=false;
 left=false;

}
bool Player::getdown(){

 return down;
}
void Player::setright(){
 
 right=true;
  up=false;
 down=false;

 left=false;
}
bool Player::getright(){

   return right;
}
void Player::setleft(){
  
   left=true;
    up=false;
 down=false;
 right=false;
 
}
bool Player::getleft(){


   return left;
}


void Player::move(){


   if(up==true){

     if(getpy()<100)
      setpy(getpy()+10);
          
 
}

    if(down==true){

    if(getpy()>6)
      setpy(getpy()-10);
     
}

     if(left==true){

      if(getpx()>6)
      setpx(getpx()-10);
 
}


      if(right==true){

    if(getpx()<766)
      setpx(getpx()+10);
 
 
}

      
 

}

void Player::collision(Flea* f ,Centipede* m){

if( f->getpy()==getpy() || (f->getpy()<getpy()+10 && f->getpy()>getpy()))
if((f->getpx()>getpx()-10 && f->getpx()<getpx()) || f->getpx()==getpx() || (f->getpx()<getpx()+30 && f->getpx()>getpx()) || (m->ptr1->getpx()>getpx()-10 && m->ptr1->getpx()<getpx()) || m->ptr1->getpx()==getpx() || (m->ptr1->getpx()<getpx()+10 && m->ptr1->getpx()>getpx())){



exit(0);




}

if( m->ptr1->getpy()==getpy() || (m->ptr1->getpy()<getpy()+30 && m->ptr1->getpy()>getpy()))
if((m->ptr1->getpx()>getpx()-2 && m->ptr1->getpx()<getpx()) || m->ptr1->getpx()==getpx() || (m->ptr1->getpx()<getpx()+10 && m->ptr1->getpx()>getpx())){



exit(0);




}






}
void Player::draw(){



DrawSquare(  getpx() , getpy() ,30,colors[BLACK]); 




} 	


