
#include"Mushroom.h"
#include"util.h"

Mushroom::Mushroom(){
srand(time(NULL));
total=25;
ptrx = new int[total];
ptry=new int[total];
 int x=0;
     int y=0;
     for(int i=0;i<25;i++)
     {
        x=GetRandInRange(0,70);
        y=GetRandInRange(15,51);
        x=x*10;
        y=y*10;
        ptrx[i]=x;
        ptry[i]=y;

        

     }
  

count=0;

}



// it checks the condition for bullet collision

void Mushroom :: checkbrick(int bx,int by,ScoreBoard *g){
int k;

  for(int i=0; i<total; i++)
{


  if((ptry[i]>=by-10 && ptry[i]<by) || ptry[i]==by)
  if((ptrx[i]>bx-10 && ptrx[i]<bx) || (ptrx[i]<bx+10 && ptrx[i]>bx) || ptrx[i]==bx)
   {
       k=i;

            
             
           

         
          for(int j=1; j<(total-i); j++)
         {
           
           ptrx[k]=ptrx[k+1];
           ptry[k]=ptry[k+1];
           k++;
         }
          --total;
         
         g->setscore(g->getscore()+1);
          
       

          
        
     
  }




 }




}


void  Mushroom::draw(){
/*
static int count=0;

if(count==0){
srand(time(NULL));

 setpx(150);
 setpy(520);

for(int i=0;i<total; i++){

ptrx[i]=getpx();
ptry[i]=getpy();

DrawSquare(  getpx() , getpy(),10,colors[GREEN]);


  setpx(rand()%800);
  setpy(rand()%600);

 for(int j=0; j<i; j++){
  
 
  if((getpx()==ptrx[j]  && getpy()==ptry[j]) || getpy()>530 || getpy()<100 || getpx()>780  ) {
    
           while(getpx()==ptrx[j] || getpy()==ptry[j] || getpx()%10!=0 || getpy()%10!=0 || getpy()>530 || getpy()<100 || getpx()>780){

               setpx(rand()%800);
               setpy(rand()%600);
                setpx(GetRandInRange(0,80));
                setpy(GetRandInRange(10,51));
                setpx(getpx()*10);
                setpy(getpy()*10);
           
           }

   }


}


}

count++;

}

else{

*/
 
for(int i=0; i<total; i++){

DrawSquare(  ptrx[i] , ptry[i],10,colors[GREEN]);

}

   /*  for(int i=0; i<total; i++){

      DrawSquare(  ptrx[i] , ptry[i],10,colors[GREEN]);

     }

    */

//count++;

//}

}


int* Mushroom:: getptrx(){

 return ptrx;
}

int* Mushroom:: getptry(){
 
 return ptry;

}

 Mushroom:: ~Mushroom(){







}
