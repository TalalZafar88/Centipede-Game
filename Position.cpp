#include "Position.h"

Position:: Position(){
x=0;
y=0;

}

Position::Position(int a,int b){

x=a;
y=b;


}



 void Position::setX(int a){

  x=a;
}

 void Position::setY(int b){

   y=b;
 
}

 int Position::getX(){

 return x;
 
}

 int Position::getY(){

  return y;

}

 
