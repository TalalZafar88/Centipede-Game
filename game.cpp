//============================================================================
// Name        : .cpp
// Author      : Talal Zafar
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================


#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_

#include "GameObject.h"
#include "GameObject.cpp"
#include "Position.h"
#include "Position.cpp"
#include "ScoreBoard.h"
#include "ScoreBoard.cpp"
#include "Player.h"
#include "Player.cpp"
#include "Bomb.h"
#include "Bomb.cpp"
#include "Segment.h"
#include "Segment.cpp"
#include "Flea.h"
#include "Flea.cpp"
#include "Centipede.h"
#include "Centipede.cpp"
#include "MoveableObject.h"
#include "MoveableObject.cpp"
#include "Mushroom.h"
#include "Mushroom.cpp"
#include "Board.h"
#include "util.h"
#include <iostream>
#include <stdlib.h>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


MoveableObject **mo=new MoveableObject*[1];

ScoreBoard *g;
Centipede *p;
Mushroom *m;
Flea *f;
Bomb *bo;
Player *pl;



//g[0]=new ScoreBoard;
//g[1]=new Player;
//g[2]=new Bomb;
//g[3]=new Mushroom;
//g[4]=new Segement;





/*
 * Main Canvas drawing function.
 * */

Board *b;
void GameDisplay()/**/{



	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0.37/*Red Component*/, 0.2,	//148.0/255/*Green Component*/,
			0.2/*Blue Component*/, 0.54 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun

      
	//DrawSquare( px , py ,30,colors[RED]); 

       
          pl->draw(); 
           pl->collision(f,p);
  /*
         for(int i=0; i<1; i++){

              mo[i][0].setbomb(pl->getplayerx(),pl->getplayery());
             mo[i][0].move();
             mo[i][0].draw(); 
           
             
            
         }
 */
            
           
      
         ////////////////////////
         g->draw();
         p->move1(m->getptrx(),m->getptry());         
         p->move();
         p->draw();
         p->bulletcheck(bo->getpx(),bo->getpy(),g);
         f->move();
         f->draw(); 
         f-> collision(bo,g);
         bo->move();
         bo->draw();
         bo->setbomb(pl->getplayerx(),pl->getplayery());
         m->checkbrick(bo->getpx(),bo->getpy(),g);
         m->draw();
         //////////////////////
        
	//Mushroom
	//DrawSquare( 0 , 0 ,15,colors[RED]); 

 
	//Display Score
	//DrawString( 50, 570, "Score=0", colors[MISTY_ROSE]);
  
     /*  for(int i=0;i<800;i+=10)
        {
           DrawLine(  i , 0 , i , 600  , 1 , colors[CORN_SILK] );
        }
        for(int i=0;i<600;i+=10)
        {
           DrawLine(  0 , i , 800  , i , 1 , colors[CORN_SILK] );
        }
      */

      
	//Spider
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)

       //  DrawLine(  0 , 100 ,  800 , 100 , 5 , colors[MISTY_ROSE] );
      // DrawLine(  0 , 7 ,  800 ,7 , 5 , colors[MISTY_ROSE] );



	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawLine(  0 , 550 ,  800 , 550 , 5 , colors[MISTY_ROSE] );// up
        //DrawLine(  1 , 0 ,  1 , 550 , 5 , colors[MISTY_ROSE] );//left
        //DrawLine(  800 , 0 ,  800 , 550 , 5 , colors[MISTY_ROSE] );//right
        //DrawLine(  0 , 0 ,  800 , 0 , 5 , colors[MISTY_ROSE] );	// down
	
	//DrawCircle(50,450,10,colors[RED]);
	//DrawCircle(70,450,10,colors[RED]);
	//DrawCircle(90,450,10,colors[RED]);

	glutSwapBuffers(); // do not modify this line..

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
          
              pl->setleft();
              pl->move();
           
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

            pl->setright();
              pl->move();
        

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

            pl->setup();
              pl->move();
         
          

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {


           pl->setdown();
              pl->move();
           
        
         
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key ==32) //Key for placing the bomb
			{
                  
             //mo[0]->setpy(50);
             //mo[0]->settemp();

            bo->setpy(50);
             bo->settemp();
		//do something if b is pressed
	

	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {



        GameDisplay();
	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1/8000, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */



void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	
}
void MouseMoved(int x, int y) {

	
}



/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{

	}
	
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {


	b = new Board(60, 60); // create a new board object to use in the Display Function ...
     
        
       
       // mo[0]=new Bomb(400,20);
     
   
         bo=new Bomb(400,20);
         f=new Flea;
         g=new ScoreBoard;
         m=new Mushroom;
         p=new Centipede;
         pl=new Player;
        // bo=new Bomb(pl->getplayerx(),pl->getplayery());
        

	int width = 800, height = 600; // i have set my window size to be 800 x 600
	b->InitalizeBoard(width, height);
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP Centipede"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
