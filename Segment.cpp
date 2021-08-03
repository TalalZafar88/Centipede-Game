
#include "Segment.h"


Segment::Segment(){

 setpx(50);
 setpy(520);
 temp=false;
 temp1=false;
 count=1;
 updown=false;

}



 void Segment::move(){



 if(getpy()>=100){

 if(getpx()>780 && getpx()<800 && temp==false && temp1==false){

 setpy(getpy()-10);
 temp=true;

 }

 else if(getpx()>780 && getpx()<800 && temp==true && temp1==true){

 setpy(getpy()-10);
 temp=false;
 temp1=false;

 }



else if(getpx()>=0 && getpx()<7 && temp==true && temp1==false){

    setpy(getpy()-10);
     temp=false;
 
}
 
else if(getpx()>=0 && getpx()<7 && temp==false && temp1==true){

    setpy(getpy()-10);
     temp=false;
     temp1=false;
 
}
 

else  if(getpx()<=780 && temp==false && temp1==false ){

   setpx(getpx()+5);

}

else  if(getpx()<=780 && temp==false && temp1==true ){

   setpx(getpx()-5);
  

}



else  if(getpx()<=780 && temp==true && temp1==true ){

   setpx(getpx()+5);

}

else  if(getpx()<=780 && temp==true && temp1==false ){

   setpx(getpx()-5);
 }



else if(getpx()>780 && getpx()<=800 && temp==true && temp1==false){

 setpx(getpx()-5);
 
 }


 
else if(getpx()>780 && getpx()<=800 && temp==true && temp1==true){

 setpx(getpx()+5);
 
 }




 

 


}


else{

  
  

  if(getpy()>=90 && getpy()<100)
    updown=false;

  else if(getpy()<15 && getpy()>0){
   updown=true;
   temp=false;
}

 if(updown==false ){



if(getpx()>780 && getpx()<800 && temp==false ){

 setpy(getpy()-10);
 temp=true;

 }


else if(getpx()>=0 && getpx()<7 && temp==true ){

    setpy(getpy()-10);
     temp=false;
 
}
 


else  if(getpx()<=780 && temp==false ){

   setpx(getpx()+10);

}

else  if(getpx()<=780 && temp==false ){

   setpx(getpx()+10);

}

else  if(getpx()<=780 && temp==true){

   setpx(getpx()-10);

}


else if(getpx()>780 && getpx()<=800 && temp==true ){

 setpx(getpx()-10);
 
 }





}

 else if(updown==true){

 
if(getpx()>780 && getpx()<800 && temp==false ){

 setpy(getpy()+10);
 temp=true;

 }

 


else if(getpx()>=0 && getpx()<7 && temp==true ){

    setpy(getpy()+10);
     temp=false;
 
}


 
else  if(getpx()<=780 && temp==false ){

   setpx(getpx()+10);

}

else  if(getpx()<=780 && temp==true){

   setpx(getpx()-10);

}


else if(getpx()>780 && getpx()<=800 && temp==true ){

 setpx(getpx()-10);
 
 }

 
else if(getpx()>780 && getpx()<=800 && temp==true ){

 setpx(getpx()+10);
 
 }




 

 else  if(getpx()<=780 && temp==true ){

   setpx(getpx()-10);
 }


 


}



 }











}


 void Segment::draw(){

    
     DrawSquare( getpx(),getpy(),10,colors[count]); 
     
      if(count>100)
     count=1;
     
      count++; 
}

