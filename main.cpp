#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>
float s=-40.0; // Global Variable for sun.
float m=190.0; // Global Variable for moon.
float c=200.0; // Global Variable for cloud.
float cs=300.0; // Global Variable for small cloud.
float cl=400.0; // Global Variable for last cloud.
float w=-20.0; // Global Variable for wave.
float b=-30.0; // Global Variable for boat.
float sh=200.0; // Global Variable for ship.
float car=150.0; // Global Variable for car.
float h=40.0; // Global Variable for human.
float h2=-12.0; // Global Variable for human.
float ball=0; // Global Variable for Football.
float h1=75.0; // Global Variable for sun.
void init(void)
{

    glClearColor(0.58, 0.97,1, 0.0);
    glOrtho(-100,100,-100,100,-100,100);
}
// create circle for sun
void sun(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<=360;i++)
    {
        angle = i*PI /180;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
// create circle for moon
void moon(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<=360;i++)
    {
        angle = i*PI /180;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
// create circle for wave
void wave(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<=180;i++)
    {
        angle = i*PI /180;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
// create circle for left sail
void sailL(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=90;i<=180;i++)
    {
        angle = i*PI /180;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}
// create circle for right sail
void sailR(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=90;i>=0;i--)
    {
        angle = i*PI /180;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}

void Day()
{

glClear(GL_COLOR_BUFFER_BIT);

//Sky
    glBegin(GL_QUADS);
       glColor3f(0.58, 0.97,1);
    glVertex3f(-100,100, 0);
        glColor3f(0.01, 0.35, 1);
    glVertex3f(100.0,100.0,0);
        glColor3f(0.33, 0.55, 1);
    glVertex3f(100.0,0.-6,0.0);
        glColor3f(0.54, 0.68, 0.95);
    glVertex3f(-100.0,-2,0);
    glEnd();
//move human
      if(h>=-12)   //moving limit with the display measurement
       h=h-.03; //changing the object position for redisplaying

       else
       h=40;
//move human from swim
       if(h2<=40)   //moving limit with the display measurement
       h2=h2+.02; //changing the object position for redisplaying

       else
       h2=-12;
//move Football
       if(ball<=55)   //moving limit with the display measurement
       ball=ball+.1; //changing the object position for redisplaying

       else
       ball=0;
//move sun
       if(s<=180)   //moving limit with the display measurement
       s=s+.02; //changing the object position for redisplaying

       else
       s=-40;
//move boat
       if(b<=200)   //moving limit with the display measurement
       b=b+.08; //changing the object position for redisplaying

       else
       b=-50;
//move wave
       if(w<=150)   //moving limit with the display measurement
       w=w+0.5; //changing the object position for redisplaying

       else
       w=-20;
//move cloud
      if(c>=-100)   //moving limit with the display measurement
       c=c-.05; //changing the object position for redisplaying

       else
       c=300;
//move ship
      if(sh>=45)   //moving limit with the display measurement
       sh=sh-.05; //changing the object position for redisplaying

       else
       sh=200;

//move car
      if(car>=-100)   //moving limit with the display measurement
       car=car-.09; //changing the object position for redisplaying

       else
       car=200;

//move cloud small
      if(cs>=-100)   //moving limit with the display measurement
       cs=cs-.05; //changing the object position for redisplaying

       else
       cs=350;


//move cloud last
      if(cl>=-100)   //moving limit with the display measurement
       cl=cl-.05; //changing the object position for redisplaying

       else
       cl=450;

 //sun
    glColor3f(1, 0.36, 0);
    sun(12,20,s-70.0,70.0);

 //cloud small
    glColor3f(1, 1, 1);
    sun(10,10,cs-60.0,80.0);
    sun(10,10,cs-70.0,85.0);
     sun(10,10,cs-75.0,80.0);

//cloud last
    sun(11,10,cl-95.0,60.0);
    sun(11,10,cl-105.0,53.0);
     sun(11,10,cl-110.0,65.0);

//cloud
    glColor3f(1, 1, 1);
    sun(15,20,c-90.0,55.0);
        glColor3f(1, 1, 1);
    sun(15,20,c-110.0,60.0);
        glColor3f(1, 1, 1);
    sun(15,20,c-120.0,50.0);
        glColor3f(1, 1, 1);
    sun(15,20,c-105.0,50.0);

//Grass
    glBegin(GL_QUADS);
       glColor3f(0.17, 0.49, 0);
    glVertex3f(-100.0,-15.0,0);
    glVertex3f(100.0,-15.0,0.0);
     glVertex3f(100.0,-5.0,0.0);
    glVertex3f(-100.0,0.0,0);
    glEnd();

        glBegin(GL_QUADS);
       glColor3f(0.17, 0.49, 0);
    glVertex3f(-100.0,-5.0,0);
    glVertex3f(100.0,-5.0,0.0);
     glVertex3f(100.0,-7.0,0.0);
    glVertex3f(-100.0,-10.0,0);
    glEnd();
//sea beach
    glBegin(GL_QUADS);
       glColor3f(0.89, 0.89, 0.89);
    glVertex3f(-100.0,-10.0,0);
    glVertex3f(100.0,-5.0,0.0);
     glColor3f(1, 1, 1);
    glVertex3f(100.0,-40.0,0);
    glVertex3f(-100.0,-40.0,0.0);
    glEnd();

//water ballon
    glColor3f(1, 0, 0);
    sun(5,2,80.0,-30.0);
    glColor3f(0.0, 0.0, 0.1);
    sun(5,2,80.0,-28.0);
    glColor3f(0.0, 1, 0.0);
    sun(5,2,80.0,-26.0);
    glColor3f(1.0, 0, 1.0);
    sun(5,2,80.0,-24.0);
    glColor3f(0.4, 0.55, 0.05);
    sun(5,2,80.0,-22.0);
    glColor3f(1, 0.0, 0);
    sun(5,2,80.0,-20.0);
    glColor3f(0.4, 0.55, 0.05);
    sun(2,0.5,80.0,-20.0);
//water ballon Bamboo
    glBegin(GL_QUADS);
       glColor3f(0.3, 0.19, 0.12);
    glVertex3f(79.5,-16.0,0);
    glVertex3f(80.5,-16.0,0.0);
    glVertex3f(80.5,-20.7,0);
    glVertex3f(79.5,-20.7,0.0);
    glEnd();


//Road
 glBegin(GL_QUADS);
     glColor3f(0, 0, 0);
    glVertex3f(-100.0,-5.0,0);
    glVertex3f(100.0,-5.0,0.0);
    glVertex3f(100.0,-15.0,0.0);
    glVertex3f(-100.0,-15.0,0.0);
    glEnd();
//Road middle line
     glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(-95.0,-9.5,0);
    glVertex3f(-75.0,-9.5,0.0);
    glVertex3f(-75.0,-10.5,0.0);
    glVertex3f(-95.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(-55.0,-9.5,0);
    glVertex3f(-35.0,-9.5,0.0);
    glVertex3f(-35.0,-10.5,0.0);
    glVertex3f(-55.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(-15.0,-9.5,0);
    glVertex3f(5.0,-9.5,0.0);
    glVertex3f(5.0,-10.5,0.0);
    glVertex3f(-15.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(25.0,-9.5,0);
    glVertex3f(45.0,-9.5,0.0);
    glVertex3f(45.0,-10.5,0.0);
    glVertex3f(25.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(65.0,-9.5,0);
    glVertex3f(85.0,-9.5,0.0);
    glVertex3f(85.0,-10.5,0.0);
    glVertex3f(65.0,-10.5,0.0);
    glEnd();
//Car upper part
     glBegin(GL_QUADS);
       glColor3f(0.79, 0, 0);
    glVertex3f(car-92.0,-7.0,0);
    glVertex3f(car-86.0,-7.0,0.0);
    glVertex3f(car-84.0,-9.0,0);
    glVertex3f(car-94.0,-9.0,0.0);
    glEnd();

//Car Down part
     glBegin(GL_QUADS);
       glColor3f(0.79, 0, 0);
    glVertex3f(car-97.0,-9.0,0);
    glVertex3f(car-80.0,-9.0,0.0);
    glVertex3f(car-80.0,-12.0,0);
    glVertex3f(car-98.0,-12.0,0.0);
    glEnd();

//Car Windows front
     glBegin(GL_QUADS);
       glColor3f(0,0,0);
    glVertex3f(car-91.5,-7.2,0);
    glVertex3f(car-89.0,-7.2,0.0);
    glVertex3f(car-89.0,-8.8,0);
    glVertex3f(car-93,-8.8,0.0);
    glEnd();

//Car Windows Back
     glBegin(GL_QUADS);
    glColor3f(0,0,0);
   glVertex3f(car-88.5,-7.2,0);
    glVertex3f(car-86.5,-7.2,0.0);
    glVertex3f(car-85,-8.8,0);
    glVertex3f(car-88.5,-8.8,0.0);
    glEnd();
//Car wheel
    glColor3f(1,1,1);
    sun(1.5,1.5,car-93.0,-12.0);
    sun(1.5,1.5,car-84.0,-12.0);

        glColor3f(0,0,0);
    sun(0.5,0.5,car-93.0,-12.0);
    sun(0.5,0.5,car-84.0,-12.0);

//MAN LEFT
//man head
       glColor3f(1, 0.76, 0.41);
    sun(1.5,1.5,-80.0,h-20.5);

//LEFT man chest
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(-83.0,h-22.0,0);
    glVertex3f(-77.0,h-22.0,0.0);
    glVertex3f(-77.0,h-28.0,0);
    glVertex3f(-83.0,h-28.0,0.0);
    glEnd();
//LEFT man left arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-82.0,h-24.0,0);
    glVertex3f(-82.0,h-28.0,0.0);
    glEnd();
//LEFT man right arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-78.0,h-24.0,0);
    glVertex3f(-78.0,h-28.0,0.0);
    glEnd();
//LEFT man pent
    glBegin(GL_QUADS);
       glColor3f(1.0, 0.0, 0);
    glVertex3f(-82.0,h-28.0,0);
    glVertex3f(-78.0,h-28.0,0.0);
    glVertex3f(-78.0,h-35.0,0);
    glVertex3f(-82.0,h-35.0,0.0);
    glEnd();
//LEFT man legs
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(-81.5,h-35.0,0);
    glVertex3f(-78.5,h-35.0,0.0);
    glVertex3f(-78.5,h-38.0,0);
    glVertex3f(-81.5,h-38.0,0.0);
    glEnd();
//LEFT man leg divider
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-80.0,h-32.0,0);
    glVertex3f(-80.0,h-38.0,0.0);
    glEnd();
//MAN middle
//middle man head
       glColor3f(1, 0.76, 0.41);
    sun(1.5,1.5,-30.0,-17.5);

//middle man chest
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(-33.0,-19.0,0);
    glVertex3f(-27.0,-19.0,0.0);
    glVertex3f(-27.0,-24.0,0);
    glVertex3f(-33.0,-24.0,0.0);
    glEnd();
//middle man left arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-32.0,-21.0,0);
    glVertex3f(-32.0,-24.0,0.0);
    glEnd();
//middle man right arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-28.0,-21.0,0);
    glVertex3f(-28.0,-24.0,0.0);
    glEnd();
//middle man pent
    glBegin(GL_QUADS);
       glColor3f(0.0, 1.0, 0);
    glVertex3f(-32.0,-24.0,0);
    glVertex3f(-28.0,-24.0,0.0);
    glVertex3f(-28.0,-30.0,0);
    glVertex3f(-32.0,-30.0,0.0);
    glEnd();
//middle man legs
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(-31.5,-30.0,0);
    glVertex3f(-28.5,-30.0,0.0);
    glVertex3f(-28.5,-33.0,0);
    glVertex3f(-31.5,-33.0,0.0);
    glEnd();
//middle man leg divider
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-30.0,-28.0,0);
    glVertex3f(-30.0,-33.0,0.0);
    glEnd();
//Football
       glColor3f(0, 0.0, 0.0);
    sun(1.5,2.0,ball-27.0,-31.5);

//MAN Right
//Right man head
       glColor3f(1, 0.76, 0.41);
    sun(1.5,1.5,30.0,-17.5);

//Right man chest
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(27.0,-19.0,0);
    glVertex3f(33.0,-19.0,0.0);
    glVertex3f(33.0,-24.0,0);
    glVertex3f(27.0,-24.0,0.0);
    glEnd();
//Right man left arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(28.0,-21.0,0);
    glVertex3f(28.0,-24.0,0.0);
    glEnd();
//Right man right arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(32.0,-21.0,0);
    glVertex3f(32.0,-24.0,0.0);
    glEnd();
//Right man pent
    glBegin(GL_QUADS);
       glColor3f(0.0, 0.0, 1.0);
    glVertex3f(28.0,-24.0,0);
    glVertex3f(32.0,-24.0,0.0);
    glVertex3f(32.0,-30.0,0);
    glVertex3f(28.0,-30.0,0.0);
    glEnd();
//Right man legs
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(28.5,-30.0,0);
    glVertex3f(31.5,-30.0,0.0);
    glVertex3f(31.5,-33.0,0);
    glVertex3f(28.5,-33.0,0.0);
    glEnd();
//Right man leg divider
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(30.0,-28.0,0);
    glVertex3f(30.0,-33.0,0.0);
    glEnd();

//Hotel
    glBegin(GL_QUADS);
     glColor3f(0.67, 0.86, 0.63);
    glVertex3f(-95.0,70.0,0);
    glVertex3f(-65.0,70.0,0.0);
    glVertex3f(-65.0,-5.0,0.0);
    glVertex3f(-95.0,-5.0,0.0);
    glEnd();

//Top of Hotel
    glBegin(GL_QUADS);
     glColor3f(0.5, 0.85, 0.4);
    glVertex3f(-96.0,75.0,0);
    glVertex3f(-64,75.0,0.0);
    glVertex3f(-64,70.0,0.0);
    glVertex3f(-96.0,70.0,0.0);
    glEnd();

//top of door
    glBegin(GL_TRIANGLES);
     glColor3f(0.66, 0, 0);
    glVertex3f(-85.0,7.0,0);
    glVertex3f(-80.0,10.0,0.0);
    glVertex3f(-75.0,7.0,0.0);
    glEnd();
//Door
    glBegin(GL_QUADS);
     glColor3f(0.5, 0.24, 0.03);
    glVertex3f(-83.0,6.0,0);
    glVertex3f(-77.0,6.0,0.0);
    glVertex3f(-77.0,-5.0,0.0);
    glVertex3f(-83.0,-5.0,0.0);
    glEnd();
//Lamp post stand
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-63.0,16.0,0);
    glVertex3f(-62.0,16.0,0.0);
    glVertex3f(-62.0,-5.0,0.0);
    glVertex3f(-63.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-63.0,16.0,0);
    glVertex3f(-60.0,14.0,0.0);
    glVertex3f(-60.0,13.0,0.0);
    glVertex3f(-63.0,15.0,0.0);
    glEnd();
//Lamp post  lamp
    glBegin(GL_QUADS);
     glColor3f(0.63, 0, 1);
    glVertex3f(-60.0,14.0,0);
    glVertex3f(-59.0,14.0,0.0);
    glVertex3f(-58.0,11.0,0.0);
    glVertex3f(-61.0,11.0,0.0);
    glEnd();

// 1st Floor Right Windows
      glBegin(GL_QUADS);
     glColor3f(0.27, 0.27, 0.27);
    glVertex3f(-74.0,7.0,0);
    glVertex3f(-68.0,7.0,0.0);
    glVertex3f(-68.0,-2.0,0.0);
    glVertex3f(-74.0,-2.0,0.0);
    glEnd();

// 2nd Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,22.0,0);
    glVertex3f(-68.0,22.0,0.0);
    glVertex3f(-68.0,13.0,0.0);
    glVertex3f(-74.0,13.0,0.0);
    glEnd();


// 3rd Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,37.0,0);
    glVertex3f(-68.0,37.0,0.0);
    glVertex3f(-68.0,28.0,0.0);
    glVertex3f(-74.0,28.0,0.0);
    glEnd();


// 4th Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,52.0,0);
    glVertex3f(-68.0,52.0,0.0);
    glVertex3f(-68.0,43.0,0.0);
    glVertex3f(-74.0,43.0,0.0);
    glEnd();


// 5th Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,67.0,0);
    glVertex3f(-68.0,67.0,0.0);
    glVertex3f(-68.0,58.0,0.0);
    glVertex3f(-74.0,58.0,0.0);
    glEnd();

// 1st Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,7.0,0);
    glVertex3f(-86.0,7.0,0.0);
    glVertex3f(-86.0,-2.0,0.0);
    glVertex3f(-92.0,-2.0,0.0);
    glEnd();

// 2nd Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,22.0,0);
    glVertex3f(-86.0,22.0,0.0);
    glVertex3f(-86.0,13.0,0.0);
    glVertex3f(-92.0,13.0,0.0);
    glEnd();

// 3rd Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,37.0,0);
    glVertex3f(-86.0,37.0,0.0);
    glVertex3f(-86.0,28.0,0.0);
    glVertex3f(-92.0,28.0,0.0);
    glEnd();

// 4th Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,52.0,0);
    glVertex3f(-86.0,52.0,0.0);
    glVertex3f(-86.0,43.0,0.0);
    glVertex3f(-92.0,43.0,0.0);
    glEnd();

// 5th Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,67.0,0);
    glVertex3f(-86.0,67.0,0.0);
    glVertex3f(-86.0,58.0,0.0);
    glVertex3f(-92.0,58.0,0.0);
    glEnd();

//1st Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,10.0,0);
    glVertex3f(-65.0,10.0,0.00);
    glEnd();

//2nd Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,25.0,0);
    glVertex3f(-65.0,25.0,0.00);
    glEnd();

//3rd Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,40.0,0);
    glVertex3f(-65.0,40.0,0.00);
    glEnd();

//4th Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,55.0,0);
    glVertex3f(-65.0,55.0,0.00);
    glEnd();

//sea water BOTTOM
    glBegin(GL_QUADS);
     glColor3f(0, 0.64, 0.97);
    glVertex3f(-100.0,-80.0,0);
    glVertex3f(100.0,-80.0,0.0);
     glColor3f(0, 0.53, 0.8);
    glVertex3f(100.0,-100.0,0.0);
    glVertex3f(-100.0,-100.0,0.0);
    glEnd();


//sea water MIDDLE
    glBegin(GL_QUADS);
           glColor3f(0.16, 0.72, 1);
    glVertex3f(-100.0,-60.0,0);
    glVertex3f(100.0,-60.0,0.0);
         glColor3f(0, 0.64, 0.97);
    glVertex3f(100.0,-80.0,0);
    glVertex3f(-100.0,-80.0,0.0);
    glEnd();
//Umbrella
     glColor3f(0.95, 0, 0);
    wave(10,5,47.0,-17.0);
//umbrella bamboo
     glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(46.5,-17.0,0.0);
    glVertex3f(47.5,-17.0,0.0);
    glVertex3f(47.0,-35.0,0.0);
    glVertex3f(46.0,-35.0,0.0);
    glEnd();
//sleeping mat
     glBegin(GL_QUADS);
       glColor3f(0.31, 0.54, 0);
    glVertex3f(42,-21.0,0.0);
    glVertex3f(52,-21.0,0.0);
    glVertex3f(55.0,-35.0,0.0);
    glVertex3f(38.0,-35.0,0.0);
    glEnd();


//wave Left
    glColor3f(0.51, 0.83, 1);
    wave(50,15,w-100.0,-50.0);



//wave middle
        glColor3f(0.51, 0.83, 1);
    wave(50,15,w-3,-52.0);


//wave Right
    glColor3f(0.51, 0.83, 1);
    wave(35,15,w+90.0,-50.0);


//sea water UP
    glBegin(GL_QUADS);
       glColor3f(0.51, 0.83, 1);
    glVertex3f(-100.0,-40.0,0);
    glVertex3f(100.0,-40.0,0.0);
     glColor3f(0.16, 0.72, 1);
    glVertex3f(100.0,-60.0,0);
    glVertex3f(-100.0,-60.0,0.0);
    glEnd();
//Island
    glColor3f(0.89, 0.89, 0.89);
    sun(25,15,-90.0,-100.0);



//Boat
   glBegin(GL_QUADS);
       glColor3f(1,1, 1);
    glVertex3f(b-80.0,-70.0,0);
    glVertex3f(b-60.0,-70.0,0.0);
     glVertex3f(b-64.0,-75.0,0.0);
    glVertex3f(b-79.0,-75.0,0);
    glEnd();
//sail bamboo
   glBegin(GL_QUADS);
       glColor3f(0.49, 0.32, 0.21);
    glVertex3f(b-71.0,-44.0,0);
    glVertex3f(b-71.5,-44.0,0.0);
     glVertex3f(b-71.5,-70.0,0.0);
    glVertex3f(b-71.0,-70.0,0);
    glEnd();
 //sail
        glColor3f(0.9, 0.9, 0.9);
    sailL(2,22,b-71.5,-69.0);
    sailR(3,25,b-71.0,-69.0);
//railing
    glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(b-80.0,-69.0,0);
    glVertex3f(b-62.0,-69.0,0.0);
    glEnd();


        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(b-75.0,-70.0,0);
    glVertex3f(b-75.0,-69.0,0.0);
    glEnd();

        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(b-65.0,-70.0,0);
    glVertex3f(b-65.0,-69.0,0.0);
    glEnd();

//ship
     glBegin(GL_QUADS);
       glColor3f(0,0,0);
    glVertex3f(sh-98.0,-90.0,0);
    glVertex3f(sh-74.0,-90.0,0.0);
    glVertex3f(sh-74.0,-98.0,0);
    glVertex3f(sh-97.0,-98.0,0.0);
    glEnd();


// ship basement windows
        glColor3f(1, 1, 1);
    sun(.5,.5,sh-78,-92.0);
    sun(.5,.5,sh-81,-92.0);
    sun(.5,.5,sh-84,-92.0);
    sun(.5,.5,sh-87,-92.0);
    sun(.5,.5,sh-90,-92.0);
    sun(.5,.5,sh-93,-92.0);
    sun(.5,.5,sh-96,-92.0);
//1st Floor
         glBegin(GL_QUADS);
       glColor3f(.8,0.8,0.8);
    glVertex3f(sh-96,-87.0,0.0);
    glVertex3f(sh-76.5,-87.0,0);
    glVertex3f(sh-76.5,-90.0,0.0);
    glVertex3f(sh-96.0,-90.0,0);
    glEnd();
// ship 1st floor windows
     glColor3f(1, 1, 1);
    sun(.5,.5,sh-78,-88.5);
    sun(.5,.5,sh-81,-88.5);
    sun(.5,.5,sh-84,-88.5);
    sun(.5,.5,sh-87,-88.5);
    sun(.5,.5,sh-90,-88.5);
    sun(.5,.5,sh-93,-88.5);

//2nd Floor
         glBegin(GL_QUADS);
       glColor3f(.8,0.8,0.8);
    glVertex3f(sh-95,-84.0,0);
    glVertex3f(sh-77,-84.0,0.0);
     glVertex3f(sh-77,-87.0,0.0);
    glVertex3f(sh-96,-87.0,0);
    glEnd();
// ship 2nd floor windows
            glColor3f(1, 1, 1);
    sun(.5,.5,sh-78,-85.5);
    sun(.5,.5,sh-81,-85.5);
    sun(.5,.5,sh-84,-85.5);
    sun(.5,.5,sh-87,-85.5);
    sun(.5,.5,sh-90,-85.5);
    sun(.5,.5,sh-93,-85.5);

// Ship Floor Divider
         glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(sh-77,-87.0,0);
    glVertex3f(sh-96.0,-87.0,0.0);
    glEnd();

//ship back
             glBegin(GL_QUADS);
       glColor3f(0.47, 0.47, 0.47);
    glVertex3f(sh-76.0,-82.0,0);
    glVertex3f(sh-74.5,-82.0,0.0);
     glVertex3f(sh-74.5,-90.0,0.0);
    glVertex3f(sh-76.0,-90.0,0);
    glEnd();
// ship railing
    glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-98.0,-89.0,0);
    glVertex3f(sh-74.0,-89.0,0.0);
    glEnd();


        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-75.0,-89.0,0);
    glVertex3f(sh-75.0,-90.0,0.0);
    glEnd();

        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-80.0,-89.0,0);
    glVertex3f(sh-80.0,-90.0,0.0);
    glEnd();

            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-85.0,-89.0,0);
    glVertex3f(sh-85.0,-90.0,0.0);
    glEnd();
            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-90.0,-89.0,0);
    glVertex3f(sh-90.0,-90.0,0.0);
    glEnd();

            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-95.0,-89.0,0);
    glVertex3f(sh-95.0,-90.0,0.0);
    glEnd();

            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-98.0,-89.0,0);
    glVertex3f(sh-98.0,-90.0,0.0);
    glEnd();
//Tree
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(-94.0,-70.0,0);
    glVertex3f(-92.0,-70.0,0.0);
     glVertex3f(-91.0,-100.0,0.0);
    glVertex3f(-95.0,-100.0,0);
    glEnd();
// Tree leafs
     glColor3f(0, 1, 0);
    sun(15,10,-93.0,-65.0);
         glColor3f(0, 1, 0);
    sun(15,10,-87.0,-78.0);
             glColor3f(0, 1, 0);
    sun(15,10,-100.0,-78.0);


//Hill Behind
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.32, 0);
    glVertex3f(45.0,-5.0,0);
    glVertex3f(65.0,20.0,0.0);
    glVertex3f(90.0,-5.0,0.0);
    glEnd();


//Hill Right
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.32, 0);
    glVertex3f(77.0,-5.0,0);
    glVertex3f(95.0,60.0,0.0);
    glVertex3f(110.0,-5.0,0.0);
    glEnd();



//Hill Middle
    glBegin(GL_POLYGON);
    glColor3f(0.12, 0.35, 0);
    glVertex3f(65.0,-5.0,0);
    glVertex3f(80.0,50.0,0.0);
    glVertex3f(95.0,-5.0,0.0);
    glEnd();


//Hill Left
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.32, 0);
    glVertex3f(40.0,-5.0,0);
    glVertex3f(55.0,40.0,0.0);
    glVertex3f(70.0,-5.0,0.0);
    glEnd();
//Tree 1 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(30.0,15.0,0);
    glVertex3f(32.0,15.0,0.0);
     glVertex3f(33.0,-5.0,0.0);
    glVertex3f(29.0,-5.0,0);
    glEnd();
//Tree 1 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.07, 0.48, 0);
    glVertex3f(22.0,5.0,0);
    glVertex3f(31.0,15.0,0.0);
    glVertex3f(40.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(24.0,12.0,0);
    glVertex3f(31.0,22.0,0.0);
    glVertex3f(38.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(26.0,20.0,0);
    glVertex3f(31.0,30.0,0.0);
    glVertex3f(36.0,20.0,0.0);
    glEnd();

//Tree 2 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(8.0,15.0,0);
    glVertex3f(10.0,15.0,0.0);
     glVertex3f(11.0,-5.0,0.0);
    glVertex3f(7.0,-5.0,0);
    glEnd();
//Tree 2 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.07, 0.48, 0);
    glVertex3f(0.0,5.0,0);
    glVertex3f(9.0,15.0,0.0);
    glVertex3f(18.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(2.0,12.0,0);
    glVertex3f(9.0,22.0,0.0);
    glVertex3f(16.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(4.0,20.0,0);
    glVertex3f(9.0,30.0,0.0);
    glVertex3f(14.0,20.0,0.0);
    glEnd();

//Tree 3 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(-14.0,15.0,0);
    glVertex3f(-12.0,15.0,0.0);
     glVertex3f(-11.0,-5.0,0.0);
    glVertex3f(-15.0,-5.0,0);
    glEnd();
//Tree 3 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.07, 0.48, 0);
    glVertex3f(-22.0,5.0,0);
    glVertex3f(-13.0,15.0,0.0);
    glVertex3f(-4.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-20.0,12.0,0);
    glVertex3f(-13.0,22.0,0.0);
    glVertex3f(-6.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-18.0,20.0,0);
    glVertex3f(-13.0,30.0,0.0);
    glVertex3f(-8.0,20.0,0.0);
    glEnd();

//Tree 4 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(-36.0,15.0,0);
    glVertex3f(-34.0,15.0,0.0);
     glVertex3f(-33.0,-5.0,0.0);
    glVertex3f(-37.0,-5.0,0);
    glEnd();
//Tree 4 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.07, 0.48, 0);
    glVertex3f(-44.0,5.0,0);
    glVertex3f(-35.0,15.0,0.0);
    glVertex3f(-26.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-42.0,12.0,0);
    glVertex3f(-35.0,22.0,0.0);
    glVertex3f(-28.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-40.0,20.0,0);
    glVertex3f(-35.0,30.0,0.0);
    glVertex3f(-30.0,20.0,0.0);
    glEnd();
//Lamp post stand hill left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(38.0,16.0,0);
    glVertex3f(39.0,16.0,0.0);
    glVertex3f(39.0,-5.0,0.0);
    glVertex3f(38.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand hill left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(38.0,16.0,0);
    glVertex3f(41.0,14.0,0.0);
    glVertex3f(41.0,13.0,0.0);
    glVertex3f(38.0,15.0,0.0);
    glEnd();
//Lamp post  lamp hill left
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(41.0,14.0,0);
    glVertex3f(42.0,14.0,0.0);
    glVertex3f(43.0,11.0,0.0);
    glVertex3f(40.0,11.0,0.0);
    glEnd();
//Lamp post stand hill middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(60.0,16.0,0);
    glVertex3f(61.0,16.0,0.0);
    glVertex3f(61.0,-5.0,0.0);
    glVertex3f(60.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand hill middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(60.0,16.0,0);
    glVertex3f(63.0,14.0,0.0);
    glVertex3f(63.0,13.0,0.0);
    glVertex3f(60.0,15.0,0.0);
    glEnd();
//Lamp post  lamp hill middle
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(63.0,14.0,0);
    glVertex3f(64.0,14.0,0.0);
    glVertex3f(65.0,11.0,0.0);
    glVertex3f(62.0,11.0,0.0);
    glEnd();

//Lamp post stand hill right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(82.0,16.0,0);
    glVertex3f(83.0,16.0,0.0);
    glVertex3f(83.0,-5.0,0.0);
    glVertex3f(82.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand hill right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(82.0,16.0,0);
    glVertex3f(85.0,14.0,0.0);
    glVertex3f(85.0,13.0,0.0);
    glVertex3f(82.0,15.0,0.0);
    glEnd();
//Lamp post  lamp hill right
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(85.0,14.0,0);
    glVertex3f(86.0,14.0,0.0);
    glVertex3f(87.0,11.0,0.0);
    glVertex3f(84.0,11.0,0.0);
    glEnd();

//Lamp post stand right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(16.0,16.0,0);
    glVertex3f(17.0,16.0,0.0);
    glVertex3f(17.0,-5.0,0.0);
    glVertex3f(16.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(16.0,16.0,0);
    glVertex3f(19.0,14.0,0.0);
    glVertex3f(19.0,13.0,0.0);
    glVertex3f(16.0,15.0,0.0);
    glEnd();
//Lamp post  lamp right
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(19.0,14.0,0);
    glVertex3f(20.0,14.0,0.0);
    glVertex3f(21.0,11.0,0.0);
    glVertex3f(18.0,11.0,0.0);
    glEnd();

//Lamp post stand middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-6.0,16.0,0);
    glVertex3f(-5.0,16.0,0.0);
    glVertex3f(-5.0,-5.0,0.0);
    glVertex3f(-6.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-6.0,16.0,0);
    glVertex3f(-3.0,14.0,0.0);
    glVertex3f(-3.0,13.0,0.0);
    glVertex3f(-6.0,15.0,0.0);
    glEnd();
//Lamp post  lamp middle
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(-3.0,14.0,0);
    glVertex3f(-2.0,14.0,0.0);
    glVertex3f(-1.0,11.0,0.0);
    glVertex3f(-4.0,11.0,0.0);
    glEnd();

//Lamp post stand left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-28.0,16.0,0);
    glVertex3f(-27.0,16.0,0.0);
    glVertex3f(-27.0,-5.0,0.0);
    glVertex3f(-28.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-28.0,16.0,0);
    glVertex3f(-25.0,14.0,0.0);
    glVertex3f(-25.0,13.0,0.0);
    glVertex3f(-28.0,15.0,0.0);
    glEnd();
//Lamp post  lamp left
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(-25.0,14.0,0);
    glVertex3f(-24.0,14.0,0.0);
    glVertex3f(-23.0,11.0,0.0);
    glVertex3f(-26.0,11.0,0.0);
    glEnd();

//Watch Tower Base
   glBegin(GL_QUADS);
     glColor3f(0.53, 0.53, 0.53);
    glVertex3f(-55.0,-25.0,0.0);
    glVertex3f(-35.0,-25,0.0);
    glVertex3f(-40.0,-30.0,0.0);
    glVertex3f(-60.0,-30.0,0);
    glEnd();
//Watch Tower Body
    glBegin(GL_QUADS);
         glColor3f(0.67, 0.67, 0.67);
    glVertex3f(-57.0,25.0,0.0);
    glVertex3f(-37.0,25.0,0.0);
    glVertex3f(-42.0,-28.0,0.0);
    glVertex3f(-52.0,-28.0,0.0);
    glEnd();
//Watch Tower Top
     glColor3f(0.95, 1, 0);
    wave(15,5,-47.0,30.0);
//Watch Tower Bamboo
glBegin(GL_QUADS);
         glColor3f(0.74, 0, 0);
    glVertex3f(-55.0,30.0,0.0);
    glVertex3f(-54.0,30.0,0.0);
    glVertex3f(-54.0,25.0,0.0);
    glVertex3f(-55.0,25.0,0.0);
    glEnd();

 glBegin(GL_QUADS);
         glColor3f(0.74, 0, 0);
    glVertex3f(-40.0,30.0,0.0);
    glVertex3f(-39.0,30.0,0.0);
    glVertex3f(-39.0,25.0,0.0);
    glVertex3f(-40.0,25.0,0.0);
    glEnd();

glutPostRedisplay();
    glFlush();
}






void Night()
{
glClear(GL_COLOR_BUFFER_BIT);
//Sky
    glBegin(GL_QUADS);
       glColor3f(0,0, 0);
    glVertex3f(-100,100, 0);
    glVertex3f(100.0,100.0,0);
    glVertex3f(100.0,-6.0,0.0);
    glVertex3f(-100.0,-1,0);
    glEnd();
//Star
    glColor3f(1, 1, 1);
    moon(.3,.2,70.0,70.0);
    moon(.3,.2,-90.0,65.0);
    moon(.3,.2,-50.0,8.0);
    moon(.3,.2,76.0,94.0);
    moon(.3,.2,87.0,50.0);
    moon(.3,.2,0.0,58.0);
    moon(.3,.3,-7.0,30.0);
    moon(.3,.2,46.0,26.0);
    moon(.3,.2,65.0,30.0);
    moon(.3,.1,-20.0,85.0);
    moon(.3,.2,-56.0,26.0);
    moon(.3,.1,-70.0,65.0);
    moon(.3,.1,-35.0,35.0);
    moon(.3,.2,-64.0,90.0);
    moon(.3,.2,-94.0,94.0);
    moon(.3,.1,50.0,50.0);
    moon(.3,.2,-56.0,75.0);
    moon(.3,.2,9.0,80.0);
    moon(.3,.1,16.0,26.0);
    moon(.3,.2,46.0,85.0);

//move Moon
    if(m>=-60)   //moving limit with the display measurement
       m=m-.01; //changing the object position for redisplaying

       else
       m=190;
//move boat
       if(b<=200)   //moving limit with the display measurement
       b=b+.08; //changing the object position for redisplaying

       else
       b=-50;
//move wave
       if(w<=150)   //moving limit with the display measurement
       w=w+0.5; //changing the object position for redisplaying

       else
       w=-20;
//move cloud
      if(c>=-100)   //moving limit with the display measurement
       c=c-.05; //changing the object position for redisplaying

       else
       c=300;
//move human from swim
       if(h2<=40)   //moving limit with the display measurement
       h2=h2+.02; //changing the object position for redisplaying

       else
       h2=-12;
//move human beside sea
      if(h1>=-110)   //moving limit with the display measurement
       h1=h1-.02; //changing the object position for redisplaying

       else
       h1=75;
//move ship
      if(sh>=45)   //moving limit with the display measurement
       sh=sh-.05; //changing the object position for redisplaying

       else
       sh=200;

//move car
      if(car>=-100)   //moving limit with the display measurement
       car=car-.09; //changing the object position for redisplaying

       else
       car=200;

//move cloud small
      if(cs>=-100)   //moving limit with the display measurement
       cs=cs-.05; //changing the object position for redisplaying

       else
       cs=350;


//move cloud last
      if(cl>=-100)   //moving limit with the display measurement
       cl=cl-.05; //changing the object position for redisplaying

       else
       cl=450;

 //moon
    glColor3f(1, 1, 1);
    moon(17,25,m-70.0,70.0);
    glColor3f(0, 0, 0);
    moon(17,25,m-65.0,75.0);

 //cloud small
    glColor3f(0.73, 0.73, 0.73);
    sun(10,10,cs-60.0,80.0);
    sun(10,10,cs-70.0,85.0);
     sun(10,10,cs-75.0,80.0);

//cloud last
    sun(11,10,cl-95.0,60.0);
    sun(11,10,cl-105.0,53.0);
     sun(11,10,cl-110.0,65.0);

//cloud
    sun(15,20,c-90.0,55.0);
    sun(15,20,c-110.0,60.0);
    sun(15,20,c-120.0,50.0);
    sun(15,20,c-105.0,50.0);

//Grass
    glBegin(GL_QUADS);
       glColor3f(0.14, 0.41, 0);
    glVertex3f(-100.0,-15.0,0);
    glVertex3f(100.0,-15.0,0.0);
     glVertex3f(100.0,-5.0,0.0);
    glVertex3f(-100.0,0.0,0);
    glEnd();
//sea beach
    glBegin(GL_QUADS);
       glColor3f(0.61, 0.61, 0.61);
    glVertex3f(-100.0,-10.0,0);
    glVertex3f(100.0,-5.0,0.0);
     glColor3f(1, 1, 1);
    glVertex3f(100.0,-40.0,0);
    glVertex3f(-100.0,-40.0,0.0);
    glEnd();
//Road
 glBegin(GL_QUADS);
     glColor3f(0, 0, 0);
    glVertex3f(-100.0,-5.0,0);
    glVertex3f(100.0,-5.0,0.0);
    glVertex3f(100.0,-15.0,0.0);
    glVertex3f(-100.0,-15.0,0.0);
    glEnd();
//Road middle line
     glBegin(GL_QUADS);
     glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-95.0,-9.5,0);
    glVertex3f(-75.0,-9.5,0.0);
    glVertex3f(-75.0,-10.5,0.0);
    glVertex3f(-95.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-55.0,-9.5,0);
    glVertex3f(-35.0,-9.5,0.0);
    glVertex3f(-35.0,-10.5,0.0);
    glVertex3f(-55.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(-15.0,-9.5,0);
    glVertex3f(5.0,-9.5,0.0);
    glVertex3f(5.0,-10.5,0.0);
    glVertex3f(-15.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(25.0,-9.5,0);
    glVertex3f(45.0,-9.5,0.0);
    glVertex3f(45.0,-10.5,0.0);
    glVertex3f(25.0,-10.5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3f(65.0,-9.5,0);
    glVertex3f(85.0,-9.5,0.0);
    glVertex3f(85.0,-10.5,0.0);
    glVertex3f(65.0,-10.5,0.0);
    glEnd();

//Car upper part
     glBegin(GL_QUADS);
       glColor3f(0.68, 0, 0);
    glVertex3f(car-92.0,-7.0,0);
    glVertex3f(car-86.0,-7.0,0.0);
    glVertex3f(car-84.0,-9.0,0);
    glVertex3f(car-94.0,-9.0,0.0);
    glEnd();

//Car Down part
     glBegin(GL_QUADS);
       glColor3f(0.68, 0, 0);
    glVertex3f(car-97.0,-9.0,0);
    glVertex3f(car-80.0,-9.0,0.0);
    glVertex3f(car-80.0,-12.0,0);
    glVertex3f(car-98.0,-12.0,0.0);
    glEnd();
//car light
         glBegin(GL_QUADS);
       glColor3f(1, 1, 1);
    glVertex3f(car-107.0,-8.0,0);
    glVertex3f(car-97.0,-10.0,0.0);
    glVertex3f(car-97.0,-11.0,0);
    glVertex3f(car-107.0,-14.0,0.0);
    glEnd();
    sun(2,3,car-107.0,-11.0);


//Car Windows front
     glBegin(GL_QUADS);
       glColor3f(0,0,0);
    glVertex3f(car-91.5,-7.2,0);
    glVertex3f(car-89.0,-7.2,0.0);
    glVertex3f(car-89.0,-8.8,0);
    glVertex3f(car-93,-8.8,0.0);
    glEnd();

//Car Windows Back
     glBegin(GL_QUADS);
    glColor3f(0,0,0);
   glVertex3f(car-88.5,-7.2,0);
    glVertex3f(car-86.5,-7.2,0.0);
    glVertex3f(car-85,-8.8,0);
    glVertex3f(car-88.5,-8.8,0.0);
    glEnd();
//Car wheel
    glColor3f(0.8, 0.8, 0.8);
    sun(1.5,1.5,car-93.0,-12.0);
    sun(1.5,1.5,car-84.0,-12.0);

        glColor3f(0,0,0);
    sun(0.5,0.5,car-93.0,-12.0);
    sun(0.5,0.5,car-84.0,-12.0);

//MAN LEFT
//man head
       glColor3f(1, 0.76, 0.41);
    sun(1.5,1.5,-80.0,h2-20.5);

//LEFT man chest
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(-83.0,h2-22.0,0);
    glVertex3f(-77.0,h2-22.0,0.0);
    glVertex3f(-77.0,h2-28.0,0);
    glVertex3f(-83.0,h2-28.0,0.0);
    glEnd();
//LEFT man left arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-82.0,h2-24.0,0);
    glVertex3f(-82.0,h2-28.0,0.0);
    glEnd();
//LEFT man right arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-78.0,h2-24.0,0);
    glVertex3f(-78.0,h2-28.0,0.0);
    glEnd();
//LEFT man pent
    glBegin(GL_QUADS);
       glColor3f(1.0, 0.0, 0);
    glVertex3f(-82.0,h2-28.0,0);
    glVertex3f(-78.0,h2-28.0,0.0);
    glVertex3f(-78.0,h2-35.0,0);
    glVertex3f(-82.0,h2-35.0,0.0);
    glEnd();
//LEFT man legs
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(-81.5,h2-35.0,0);
    glVertex3f(-78.5,h2-35.0,0.0);
    glVertex3f(-78.5,h2-38.0,0);
    glVertex3f(-81.5,h2-38.0,0.0);
    glEnd();
//LEFT man leg divider
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(-80.0,h2-32.0,0);
    glVertex3f(-80.0,h2-38.0,0.0);
    glEnd();

//Hotel
    glBegin(GL_QUADS);
     glColor3f(0.52, 0.67, 0.48);
    glVertex3f(-95.0,70.0,0);
    glVertex3f(-65.0,70.0,0.0);
    glVertex3f(-65.0,-5.0,0.0);
    glVertex3f(-95.0,-5.0,0.0);
    glEnd();

//Top of Hotel
    glBegin(GL_QUADS);
     glColor3f(0.54, 0.8, 0.47);
    glVertex3f(-96.0,75.0,0);
    glVertex3f(-64,75.0,0.0);
    glVertex3f(-64,70.0,0.0);
    glVertex3f(-96.0,70.0,0.0);
    glEnd();

//top of door
    glBegin(GL_TRIANGLES);
     glColor3f(0.66, 0, 0);
    glVertex3f(-85.0,7.0,0);
    glVertex3f(-80.0,10.0,0.0);
    glVertex3f(-75.0,7.0,0.0);
    glEnd();

//Door
    glBegin(GL_QUADS);
     glColor3f(0.5, 0.24, 0.03);
    glVertex3f(-83.0,6.0,0);
    glVertex3f(-77.0,6.0,0.0);
    glVertex3f(-77.0,-5.0,0.0);
    glVertex3f(-83.0,-5.0,0.0);
    glEnd();



//Lamp post stand
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-63.0,16.0,0);
    glVertex3f(-62.0,16.0,0.0);
    glVertex3f(-62.0,-5.0,0.0);
    glVertex3f(-63.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-63.0,16.0,0);
    glVertex3f(-60.0,14.0,0.0);
    glVertex3f(-60.0,13.0,0.0);
    glVertex3f(-63.0,15.0,0.0);
    glEnd();
//Lamp post  lamp
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(-60.0,14.0,0);
    glVertex3f(-59.0,14.0,0.0);
    glVertex3f(-58.0,11.0,0.0);
    glVertex3f(-61.0,11.0,0.0);
    glEnd();
// Lamp post  lamp light
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(-59.8,11.0,0);
    glVertex3f(-59.2,11.0,0.0);
    glVertex3f(-50.0,-5.0,0.0);
    glVertex3f(-70.0,-5.0,0.0);
    glEnd();


// 1st Floor Right Windows
      glBegin(GL_QUADS);
     glColor3f(0.27, 0.27, 0.27);
    glVertex3f(-74.0,7.0,0);
    glVertex3f(-68.0,7.0,0.0);
    glVertex3f(-68.0,-2.0,0.0);
    glVertex3f(-74.0,-2.0,0.0);
    glEnd();


// 2nd Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,22.0,0);
    glVertex3f(-68.0,22.0,0.0);
    glVertex3f(-68.0,13.0,0.0);
    glVertex3f(-74.0,13.0,0.0);
    glEnd();


// 3rd Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,37.0,0);
    glVertex3f(-68.0,37.0,0.0);
    glVertex3f(-68.0,28.0,0.0);
    glVertex3f(-74.0,28.0,0.0);
    glEnd();


// 4th Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,52.0,0);
    glVertex3f(-68.0,52.0,0.0);
    glVertex3f(-68.0,43.0,0.0);
    glVertex3f(-74.0,43.0,0.0);
    glEnd();


// 5th Floor Right Windows
      glBegin(GL_QUADS);
    glVertex3f(-74.0,67.0,0);
    glVertex3f(-68.0,67.0,0.0);
    glVertex3f(-68.0,58.0,0.0);
    glVertex3f(-74.0,58.0,0.0);
    glEnd();

// 1st Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,7.0,0);
    glVertex3f(-86.0,7.0,0.0);
    glVertex3f(-86.0,-2.0,0.0);
    glVertex3f(-92.0,-2.0,0.0);
    glEnd();

// 2nd Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,22.0,0);
    glVertex3f(-86.0,22.0,0.0);
    glVertex3f(-86.0,13.0,0.0);
    glVertex3f(-92.0,13.0,0.0);
    glEnd();

// 3rd Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,37.0,0);
    glVertex3f(-86.0,37.0,0.0);
    glVertex3f(-86.0,28.0,0.0);
    glVertex3f(-92.0,28.0,0.0);
    glEnd();

// 4th Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,52.0,0);
    glVertex3f(-86.0,52.0,0.0);
    glVertex3f(-86.0,43.0,0.0);
    glVertex3f(-92.0,43.0,0.0);
    glEnd();

// 5th Floor Left Windows
          glBegin(GL_QUADS);
    glVertex3f(-92.0,67.0,0);
    glVertex3f(-86.0,67.0,0.0);
    glVertex3f(-86.0,58.0,0.0);
    glVertex3f(-92.0,58.0,0.0);
    glEnd();

//1st Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,10.0,0);
    glVertex3f(-65.0,10.0,0.00);
    glEnd();

//2nd Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,25.0,0);
    glVertex3f(-65.0,25.0,0.00);
    glEnd();

//3rd Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,40.0,0);
    glVertex3f(-65.0,40.0,0.00);
    glEnd();

//4th Floor line
            glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(-95.0,55.0,0);
    glVertex3f(-65.0,55.0,0.00);
    glEnd();

//sea water BOTTOM
    glBegin(GL_QUADS);
     glColor3f(0.05, 0.43, 0.82);
    glVertex3f(-100.0,-80.0,0);
    glVertex3f(100.0,-80.0,0.0);
     glColor3f(0, 0.34, 0.68);
    glVertex3f(100.0,-100.0,0.0);
    glVertex3f(-100.0,-100.0,0.0);
    glEnd();


//sea water MIDDLE
    glBegin(GL_QUADS);
           glColor3f(0.12, 0.52, 0.93);
    glVertex3f(-100.0,-60.0,0);
    glVertex3f(100.0,-60.0,0.0);
         glColor3f(0.05, 0.43, 0.82);
    glVertex3f(100.0,-80.0,0);
    glVertex3f(-100.0,-80.0,0.0);
    glEnd();




//water ballon Bamboo
    glBegin(GL_QUADS);
       glColor3f(0.3, 0.19, 0.12);
    glVertex3f(79.5,-16.0,0);
    glVertex3f(80.5,-16.0,0.0);
    glVertex3f(80.5,-30.7,0);
    glVertex3f(79.5,-30.7,0.0);
    glEnd();





//Umbrella bamboo
     glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(46.5,-17.0,0.0);
    glVertex3f(47.5,-17.0,0.0);
    glVertex3f(47.0,-35.0,0.0);
    glVertex3f(46.0,-35.0,0.0);
    glEnd();
//Umbrella
     glColor3f(0.72, 0, 0);
    wave(1,15,47.0,-27.0);
//Tree 4 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(-36.0,15.0,0);
    glVertex3f(-34.0,15.0,0.0);
     glVertex3f(-33.0,-5.0,0.0);
    glVertex3f(-37.0,-5.0,0);
    glEnd();
//Tree 4 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.39, 0);
    glVertex3f(-44.0,5.0,0);
    glVertex3f(-35.0,15.0,0.0);
    glVertex3f(-26.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-42.0,12.0,0);
    glVertex3f(-35.0,22.0,0.0);
    glVertex3f(-28.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-40.0,20.0,0);
    glVertex3f(-35.0,30.0,0.0);
    glVertex3f(-30.0,20.0,0.0);
    glEnd();
//Watch Tower Base
   glBegin(GL_QUADS);
     glColor3f(0.53, 0.53, 0.53);
    glVertex3f(-60.0,-30.0,0);
    glVertex3f(-40.0,-30.0,0.0);
    glVertex3f(-35.0,-25,0.0);
    glVertex3f(-55.0,-25.0,0.0);
    glEnd();
//Watch Tower Body
    glBegin(GL_QUADS);
         glColor3f(0.67, 0.67, 0.67);
    glVertex3f(-57.0,25.0,0.0);
    glVertex3f(-37.0,25.0,0.0);
    glVertex3f(-42.0,-28.0,0.0);
    glVertex3f(-52.0,-28.0,0.0);
    glEnd();
//Watch Tower Top
     glColor3f(0.65, 0.68, 0);
    wave(15,5,-47.0,30.0);
//Watch Tower Bamboo
glBegin(GL_QUADS);
         glColor3f(0.74, 0, 0);
    glVertex3f(-55.0,30.0,0.0);
    glVertex3f(-54.0,30.0,0.0);
    glVertex3f(-54.0,25.0,0.0);
    glVertex3f(-55.0,25.0,0.0);
    glEnd();

 glBegin(GL_QUADS);
         glColor3f(0.74, 0, 0);
    glVertex3f(-40.0,30.0,0.0);
    glVertex3f(-39.0,30.0,0.0);
    glVertex3f(-39.0,25.0,0.0);
    glVertex3f(-40.0,25.0,0.0);
    glEnd();
//MAN 1st
//1st man head
       glColor3f(1, 0.76, 0.41);
    sun(1.5,1.5,h1+30.0,-22.5);

//1st man chest
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(h1+27.0,-24.0,0);
    glVertex3f(h1+33.0,-24.0,0.0);
    glVertex3f(h1+33.0,-29.0,0);
    glVertex3f(h1+27.0,-29.0,0.0);
    glEnd();
//1st man left arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(h1+28.0,-26.0,0);
    glVertex3f(h1+28.0,-29.0,0.0);
    glEnd();
//v man right arms
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(h1+32.0,-26.0,0);
    glVertex3f(h1+32.0,-29.0,0.0);
    glEnd();
//1st man pent
    glBegin(GL_QUADS);
       glColor3f(.0, 0.0, 1.0);
    glVertex3f(h1+28.0,-29.0,0);
    glVertex3f(h1+32.0,-29.0,0.0);
    glVertex3f(h1+32.0,-35.0,0);
    glVertex3f(h1+28.0,-35.0,0.0);
    glEnd();
//1st man legs
    glBegin(GL_QUADS);
       glColor3f(1, 0.76, 0.41);
    glVertex3f(h1+28.5,-35.0,0);
    glVertex3f(h1+31.5,-35.0,0.0);
    glVertex3f(h1+31.5,-38.0,0);
    glVertex3f(h1+28.5,-38.0,0.0);
    glEnd();
//1st man leg divider
    glBegin(GL_LINES);
       glColor3f(0.0, 0.0, 0);
    glVertex3f(h1+30.0,-33.0,0);
    glVertex3f(h1+30.0,-38.0,0.0);
    glEnd();
//wave Left
    glColor3f(0.31, 0.65, 1);
    wave(50,15,w-100.0,-50.0);



//wave middle
    wave(50,15,w-3,-52.0);


//wave Right
    wave(35,15,w+90.0,-50.0);
//Boat stand
    glBegin(GL_QUADS);
       glColor3f(0.24, 0.2, 0.1);
    glVertex3f(-54.0,-31.0,0);
    glVertex3f(-53.0,-31.0,0.0);
    glVertex3f(-53.0,-37.0,0);
    glVertex3f(-54.0,-37.0,0.0);
    glEnd();
//Boat rope
    glBegin(GL_LINES);
       glColor3f(0.24, 0.2, 0.1);
    glVertex3f(-54.0,-33.0,0);
    glVertex3f(-60.0,-40.0,0.0);
    glEnd();

//sea water UP
    glBegin(GL_QUADS);
       glColor3f(0.31, 0.65, 1);
    glVertex3f(-100.0,-40.0,0);
    glVertex3f(100.0,-40.0,0.0);
     glColor3f(0.12, 0.52, 0.93);
    glVertex3f(100.0,-60.0,0);
    glVertex3f(-100.0,-60.0,0.0);
    glEnd();
//Island
    glColor3f(0.68, 0.68, 0.68);
    sun(25,15,-90.0,-100.0);



//Boat
   glBegin(GL_QUADS);
       glColor3f(0.77, 0.77, 0.77);
    glVertex3f(-80.0,-40.0,0);
    glVertex3f(-60.0,-40.0,0.0);
     glVertex3f(-64.0,-45.0,0.0);
    glVertex3f(-79.0,-45.0,0);
    glEnd();
//sail bamboo
   glBegin(GL_QUADS);
       glColor3f(0.49, 0.32, 0.21);
    glVertex3f(-71.0,-14.0,0);
    glVertex3f(-71.5,-14.0,0.0);
     glVertex3f(-71.5,-40.0,0.0);
    glVertex3f(-71.0,-40.0,0);
    glEnd();
 //sail
        glColor3f(0.9, 0.9, 0.9);
    sailL(2,22,-71.5,-39.0);
    sailR(3,25,-71.0,-39.0);
//railing
    glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(-80.0,-39.0,0);
    glVertex3f(-62.0,-39.0,0.0);
    glEnd();


        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(-75.0,-39.0,0);
    glVertex3f(-75.0,-40.0,0.0);
    glEnd();

        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(-65.0,-39.0,0);
    glVertex3f(-65.0,-40.0,0.0);
    glEnd();
//ship
     glBegin(GL_QUADS);
       glColor3f(0,0,0);
    glVertex3f(sh-98.0,-90.0,0);
    glVertex3f(sh-74.0,-90.0,0.0);
    glVertex3f(sh-74.0,-98.0,0);
    glVertex3f(sh-97.0,-98.0,0.0);
    glEnd();
//ship light
         glBegin(GL_QUADS);
       glColor3f(1, 1, 1);
    glVertex3f(sh-140.0,-100.0,0);
    glVertex3f(sh-97,-92.0,0.0);
    glVertex3f(sh-97,-93.0,0);
    glVertex3f(sh-107.0,-100.0,0.0);
    glEnd();
// ship basement windows
        glColor3f(1, 1, 1);
    sun(.5,.5,sh-78,-92.0);
    sun(.5,.5,sh-81,-92.0);
    sun(.5,.5,sh-84,-92.0);
    sun(.5,.5,sh-87,-92.0);
    sun(.5,.5,sh-90,-92.0);
    sun(.5,.5,sh-93,-92.0);
    sun(.5,.5,sh-96,-92.0);
//1st Floor
         glBegin(GL_QUADS);
       glColor3f(.8,0.8,0.8);
    glVertex3f(sh-96,-87.0,0.0);
    glVertex3f(sh-76.5,-87.0,0);
    glVertex3f(sh-76.5,-90.0,0.0);
    glVertex3f(sh-96.0,-90.0,0);
    glEnd();
// ship 1st floor windows
     glColor3f(1, 1, 1);
    sun(.5,.5,sh-78,-88.5);
    sun(.5,.5,sh-81,-88.5);
    sun(.5,.5,sh-84,-88.5);
    sun(.5,.5,sh-87,-88.5);
    sun(.5,.5,sh-90,-88.5);
    sun(.5,.5,sh-93,-88.5);

//2nd Floor
         glBegin(GL_QUADS);
       glColor3f(.8,0.8,0.8);
    glVertex3f(sh-95,-84.0,0);
    glVertex3f(sh-77,-84.0,0.0);
     glVertex3f(sh-77,-87.0,0.0);
    glVertex3f(sh-96,-87.0,0);
    glEnd();
// ship 2nd floor windows
            glColor3f(1, 1, 1);
    sun(.5,.5,sh-78,-85.5);
    sun(.5,.5,sh-81,-85.5);
    sun(.5,.5,sh-84,-85.5);
    sun(.5,.5,sh-87,-85.5);
    sun(.5,.5,sh-90,-85.5);
    sun(.5,.5,sh-93,-85.5);

// Ship Floor Divider
         glBegin(GL_LINES);
       glColor3f(0, 0, 0);
    glVertex3f(sh-77,-87.0,0);
    glVertex3f(sh-96.0,-87.0,0.0);
    glEnd();

//ship back
             glBegin(GL_QUADS);
       glColor3f(0.47, 0.47, 0.47);
    glVertex3f(sh-76.0,-82.0,0);
    glVertex3f(sh-74.5,-82.0,0.0);
     glVertex3f(sh-74.5,-90.0,0.0);
    glVertex3f(sh-76.0,-90.0,0);
    glEnd();
// ship railing
    glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-98.0,-89.0,0);
    glVertex3f(sh-74.0,-89.0,0.0);
    glEnd();


        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-75.0,-89.0,0);
    glVertex3f(sh-75.0,-90.0,0.0);
    glEnd();

        glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-80.0,-89.0,0);
    glVertex3f(sh-80.0,-90.0,0.0);
    glEnd();

            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-85.0,-89.0,0);
    glVertex3f(sh-85.0,-90.0,0.0);
    glEnd();
            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-90.0,-89.0,0);
    glVertex3f(sh-90.0,-90.0,0.0);
    glEnd();

            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-95.0,-89.0,0);
    glVertex3f(sh-95.0,-90.0,0.0);
    glEnd();

            glBegin(GL_LINES);
       glColor3f(0,0,0);
    glVertex3f(sh-98.0,-89.0,0);
    glVertex3f(sh-98.0,-90.0,0.0);
    glEnd();
//Tree
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(-94.0,-70.0,0);
    glVertex3f(-92.0,-70.0,0.0);
     glVertex3f(-91.0,-100.0,0.0);
    glVertex3f(-95.0,-100.0,0);
    glEnd();
// Tree leafs
     glColor3f(0.1, 0.55, 0.1);
    sun(15,10,-93.0,-65.0);
    sun(15,10,-87.0,-78.0);
    sun(15,10,-100.0,-78.0);


//Hill Behind
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.32, 0);
    glVertex3f(45.0,-5.0,0);
    glVertex3f(65.0,20.0,0.0);
    glVertex3f(90.0,-5.0,0.0);
    glEnd();


//Hill Right
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.32, 0);
    glVertex3f(77.0,-5.0,0);
    glVertex3f(95.0,60.0,0.0);
    glVertex3f(110.0,-5.0,0.0);
    glEnd();



//Hill Middle
    glBegin(GL_POLYGON);
    glColor3f(0.12, 0.35, 0);
    glVertex3f(65.0,-5.0,0);
    glVertex3f(80.0,50.0,0.0);
    glVertex3f(95.0,-5.0,0.0);
    glEnd();


//Hill Left
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.32, 0);
    glVertex3f(40.0,-5.0,0);
    glVertex3f(55.0,40.0,0.0);
    glVertex3f(70.0,-5.0,0.0);
    glEnd();
//Tree 1 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(30.0,15.0,0);
    glVertex3f(32.0,15.0,0.0);
     glVertex3f(33.0,-5.0,0.0);
    glVertex3f(29.0,-5.0,0);
    glEnd();
//Tree 1 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.35, 0.01);
    glVertex3f(22.0,5.0,0);
    glVertex3f(31.0,15.0,0.0);
    glVertex3f(40.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(24.0,12.0,0);
    glVertex3f(31.0,22.0,0.0);
    glVertex3f(38.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(26.0,20.0,0);
    glVertex3f(31.0,30.0,0.0);
    glVertex3f(36.0,20.0,0.0);
    glEnd();

//Tree 2 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(8.0,15.0,0);
    glVertex3f(10.0,15.0,0.0);
     glVertex3f(11.0,-5.0,0.0);
    glVertex3f(7.0,-5.0,0);
    glEnd();
//Tree 2 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.35, 0.01);
    glVertex3f(0.0,5.0,0);
    glVertex3f(9.0,15.0,0.0);
    glVertex3f(18.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(2.0,12.0,0);
    glVertex3f(9.0,22.0,0.0);
    glVertex3f(16.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(4.0,20.0,0);
    glVertex3f(9.0,30.0,0.0);
    glVertex3f(14.0,20.0,0.0);
    glEnd();

//Tree 3 beside Road
       glBegin(GL_QUADS);
       glColor3f(0.35, 0.2, 0);
    glVertex3f(-14.0,15.0,0);
    glVertex3f(-12.0,15.0,0.0);
     glVertex3f(-11.0,-5.0,0.0);
    glVertex3f(-15.0,-5.0,0);
    glEnd();
//Tree 3 leafs beside Road
    glBegin(GL_POLYGON);
    glColor3f(0.06, 0.35, 0.01);
    glVertex3f(-22.0,5.0,0);
    glVertex3f(-13.0,15.0,0.0);
    glVertex3f(-4.0,5.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-20.0,12.0,0);
    glVertex3f(-13.0,22.0,0.0);
    glVertex3f(-6.0,12.0,0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glVertex3f(-18.0,20.0,0);
    glVertex3f(-13.0,30.0,0.0);
    glVertex3f(-8.0,20.0,0.0);
    glEnd();
//Lamp post stand hill left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(38.0,16.0,0);
    glVertex3f(39.0,16.0,0.0);
    glVertex3f(39.0,-5.0,0.0);
    glVertex3f(38.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand hill left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(38.0,16.0,0);
    glVertex3f(41.0,14.0,0.0);
    glVertex3f(41.0,13.0,0.0);
    glVertex3f(38.0,15.0,0.0);
    glEnd();
//Lamp post  lamp hill left
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(41.0,14.0,0);
    glVertex3f(42.0,14.0,0.0);
    glVertex3f(43.0,11.0,0.0);
    glVertex3f(40.0,11.0,0.0);
    glEnd();
// Lamp post  lamp light hill left
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(41.2,11.0,0);
    glVertex3f(41.8,11.0,0.0);
    glVertex3f(51.0,-5.0,0.0);
    glVertex3f(33.0,-5.0,0.0);
    glEnd();
//Lamp post stand hill middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(60.0,16.0,0);
    glVertex3f(61.0,16.0,0.0);
    glVertex3f(61.0,-5.0,0.0);
    glVertex3f(60.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand hill middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(60.0,16.0,0);
    glVertex3f(63.0,14.0,0.0);
    glVertex3f(63.0,13.0,0.0);
    glVertex3f(60.0,15.0,0.0);
    glEnd();
//Lamp post  lamp hill middle
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(63.0,14.0,0);
    glVertex3f(64.0,14.0,0.0);
    glVertex3f(65.0,11.0,0.0);
    glVertex3f(62.0,11.0,0.0);
    glEnd();
// Lamp post  lamp light hill middle
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(63.2,11.0,0);
    glVertex3f(63.8,11.0,0.0);
    glVertex3f(73.0,-5.0,0.0);
    glVertex3f(55.0,-5.0,0.0);
    glEnd();

//Lamp post stand hill right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(82.0,16.0,0);
    glVertex3f(83.0,16.0,0.0);
    glVertex3f(83.0,-5.0,0.0);
    glVertex3f(82.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand hill right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(82.0,16.0,0);
    glVertex3f(85.0,14.0,0.0);
    glVertex3f(85.0,13.0,0.0);
    glVertex3f(82.0,15.0,0.0);
    glEnd();
//Lamp post  lamp hill right
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(85.0,14.0,0);
    glVertex3f(86.0,14.0,0.0);
    glVertex3f(87.0,11.0,0.0);
    glVertex3f(84.0,11.0,0.0);
    glEnd();
// Lamp post  lamp light hill right
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(85.2,11.0,0);
    glVertex3f(85.8,11.0,0.0);
    glVertex3f(95.0,-5.0,0.0);
    glVertex3f(77.0,-5.0,0.0);
    glEnd();

//Lamp post stand right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(16.0,16.0,0);
    glVertex3f(17.0,16.0,0.0);
    glVertex3f(17.0,-5.0,0.0);
    glVertex3f(16.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand right
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(16.0,16.0,0);
    glVertex3f(19.0,14.0,0.0);
    glVertex3f(19.0,13.0,0.0);
    glVertex3f(16.0,15.0,0.0);
    glEnd();
//Lamp post  lamp right
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(19.0,14.0,0);
    glVertex3f(20.0,14.0,0.0);
    glVertex3f(21.0,11.0,0.0);
    glVertex3f(18.0,11.0,0.0);
    glEnd();
// Lamp post  lamp light right
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(19.2,11.0,0);
    glVertex3f(19.8,11.0,0.0);
    glVertex3f(29.0,-5.0,0.0);
    glVertex3f(11.0,-5.0,0.0);
    glEnd();


//Lamp post stand middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-6.0,16.0,0);
    glVertex3f(-5.0,16.0,0.0);
    glVertex3f(-5.0,-5.0,0.0);
    glVertex3f(-6.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand middle
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-6.0,16.0,0);
    glVertex3f(-3.0,14.0,0.0);
    glVertex3f(-3.0,13.0,0.0);
    glVertex3f(-6.0,15.0,0.0);
    glEnd();
//Lamp post  lamp middle
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(-3.0,14.0,0);
    glVertex3f(-2.0,14.0,0.0);
    glVertex3f(-1.0,11.0,0.0);
    glVertex3f(-4.0,11.0,0.0);
    glEnd();
// Lamp post  lamp light middle
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(-2.8,11.0,0);
    glVertex3f(-2.2,11.0,0.0);
    glVertex3f(7.0,-5.0,0.0);
    glVertex3f(-11.0,-5.0,0.0);
    glEnd();

//Lamp post stand left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-28.0,16.0,0);
    glVertex3f(-27.0,16.0,0.0);
    glVertex3f(-27.0,-5.0,0.0);
    glVertex3f(-28.0,-5.0,0.0);
    glEnd();

//Lamp post Light stand left
    glBegin(GL_QUADS);
     glColor3f(0.79, 0.79, 0.79);
    glVertex3f(-28.0,16.0,0);
    glVertex3f(-25.0,14.0,0.0);
    glVertex3f(-25.0,13.0,0.0);
    glVertex3f(-28.0,15.0,0.0);
    glEnd();
//Lamp post  lamp left
    glBegin(GL_QUADS);
     glColor3f(0.49, 0, 0.78);
    glVertex3f(-25.0,14.0,0);
    glVertex3f(-24.0,14.0,0.0);
    glVertex3f(-23.0,11.0,0.0);
    glVertex3f(-26.0,11.0,0.0);
    glEnd();
// Lamp post  lamp light left
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(-24.8,11.0,0);
    glVertex3f(-24.2,11.0,0.0);
    glVertex3f(-15.0,-5.0,0.0);
    glVertex3f(-33.0,-5.0,0.0);
    glEnd();



glutPostRedisplay();
    glFlush();

}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutDisplayFunc(Day);
                glutMainLoop();

         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
                        glutDisplayFunc(Night);
                            glutMainLoop();


      break;
   }
}

int main(int argc, char** argv)
{
    glutInit(& argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(200,200);
    glutInitWindowSize(600,600);
    glutCreateWindow("Sea Beach With Island");
    init();
    glutMouseFunc(my_mouse);
    glutDisplayFunc(Day);
    glutMainLoop();
    return 0;

}
