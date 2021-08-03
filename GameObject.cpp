
#include "GameObject.h"



GameObject::GameObject():p(){

 
}

 void GameObject::setpx(int a){


  p.setX(a);
  
}

 void GameObject::setpy(int b){

  p.setY(b);

}

 int GameObject::getpx(){

  return p.getX();

}

 int GameObject::getpy(){

  return p.getY();

}



GameObject::~GameObject(){


}

