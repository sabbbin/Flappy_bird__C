You've used 83% of your storage. … If you run out of storage, you won't be able to upload new files.Learn more
khwopabird.txt
Long ago
Sep 27, 2019

You uploaded an item
Text
khwopabird.txt
#include <graphics.h>
# include <conio.h>
#include <stdlib.h>
# include <time.h>
#include <iostream>
void setup();
void bar(int);
bool rect1=true;
bool rect2=true;
bool rect3=true;
bool rect4=true;
bool rect5=true;
bool rect6=true;
bool gameover =true;
bool kill =true;
static int be=0;
static   int score=0;
static int life =5;
char zz[44],yy[44];
int i,a,bb,cc,dd,e,f,g[5]={0},h[5]={0};
char mm[44];
int main ()
{
    int a=DETECT ,b;
    initgraph(&a,&b,"");
while (gameover){
  for ( i=20;i<419;i++)
   //     while (i<getmaxy())
    {
        line (1,20,678,20);
line (1,419,678,419);
sprintf (zz,"SCORE : %d",score);
sprintf (yy,"LIFE : %d",life);
outtextxy(60,2,zz);
outtextxy(400,2,yy);
    dd++;
e++;
f=i;

if (e>=113)
{
    if (rect1){
    h[0]= rand()%170;

    }
    rect1=false;
    if(g[0]>550)
    {
        rect1=true;

    g[0]=1;
}setcolor(RED);
    rectangle (550-g[0],20,600-g[0],20+h[0]);
    rectangle (550-g[0],419-h[0],600-g[0],419);
     setfillstyle(SOLID_FILL,RED);
     floodfill(555-g[0],22,RED);
     floodfill(555-g[0],417,RED);
    g[0]++;
}
if (e>=226)
{
    if (rect2){
    h[1]= rand()%170;

    }
    rect2=false;
    if(g[1]>550)
    {
        rect2=true;
    g[1]=1;

}setcolor(BLUE);
    rectangle (550-g[1],20,600-g[1],20+h[1]);
     rectangle (550-g[1],419-h[1],600-g[1],419);
      setfillstyle(SOLID_FILL,BLUE);
     floodfill(555-g[1],22,BLUE);
     floodfill(555-g[1],417,BLUE);
    g[1]++;
}
if (e>=339)
{
    if (rect3)
    {
    h[2]= rand()%170;

    }
    rect3=false;
    if(g[2]>550)
    {
        rect3=true;
    g[2]=1;

}
setcolor(YELLOW);

    rectangle (550-g[2],20,600-g[2],20+h[2]);
     rectangle (550-g[2],419-h[2],600-g[2],419);
     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(555-g[2],22,YELLOW);
     floodfill(555-g[2],417,YELLOW);
    g[2]++;
}
if (e>=452)

{

     if (rect4)
{


    h[3]= rand()%170;
}
    rect4=false;

    if(g[3]>550)
    {
    g[3]=1;
    rect4=true;

}

setcolor(GREEN);
//setfillstyle(SOLID_FILL,GREEN);

    rectangle (550-g[3],20,600-g[3],20+h[3]);

     rectangle (550-g[3],419-h[3],600-g[3],419);
     setfillstyle(SOLID_FILL,GREEN);
     floodfill(555-g[3],22,GREEN);
     floodfill(555-g[3],418,GREEN);
  g[3]++;
}
if (e>=565)
{
    if (rect5){
    h[4]= rand()%170;

    }
    rect5=false;
    if(g[4]>550)
    {
        rect5=true;
    g[4]=1;

}
setcolor (BROWN);
    rectangle (550-g[4],20,600-g[4],20+h[4]);
     rectangle (550-g[4],419-h[4],600-g[4],419);
      setfillstyle(SOLID_FILL,BROWN);
     floodfill(555-g[4],22,BROWN);
     floodfill(555-g[4],417,BROWN);
    g[4]++;
}
if (600-g[0]==250)
{kill=true;
    score++;
}
if(600-g[1]==250)
{kill=true;
    score++;
}
    if(600-g[2]==250)
    {kill=true;
        score++;
    }
    if(600-g[3]==250)
    {kill=true;
    score++;
    }
    if(600-g[4]==250)
    {kill=true;
        score++;
    }
   // if (dd==70)
    //{
      //  dd=0;
      //        bb= rand()%180;
     //        bar(bb);
   // }
       // rectangle (550-f,20,600-f,20+bb);
  //      bb= rand()%180;                        rectangle (550-g[4],419-h[4],600-g[4],419);
//bar(dd);
//lower part
if (35+f>419-h[4]&&550-g[4]<250&&600-g[4]>250&&kill)
{ kill=false;
    life--;
    //score++;
    circle(250,200,15);
    i=180;
}

if (35+f>419-h[3]&&550-g[3]<250&&600-g[3]>250&&kill)
{kill=false;
   // score++;
    life--;
    circle(250,200,15);
    i=180;
}
if (35+f>419-h[2]&&550-g[2]<250&&600-g[2]>250&&kill)
{kill=false;
   // score++;
    life--;
    circle(250,200,15);
    i=180;
}
if (35+f>419-h[1]&&550-g[1]<250&&600-g[1]>250&&kill)
{kill=false;
    life--;
    circle(250,200,15);
    i=180;
}
if (35+f>419-h[0]&&550-g[0]<250&&600-g[0]>250&&kill)
{kill=false;
    life--;
    circle(250,200,15);
    i=180;
}
// upper level
if (550-g[0]<250&&600-g[0]>250&&5+f<20+h[0]&&kill)
{kill=false;
    life--;


    circle(250,200,15);
    i=180;
}
if (550-g[1]<250&&600-g[1]>250&&5+f<20+h[1]&&kill)
{
    life--;

kill=false;
    circle(250,200,15);
    i=180;
}
if (550-g[2]<250&&600-g[2]>250&&5+f<20+h[2]&&kill)
{
    life--;

kill=false;
    circle(250,200,15);
    i=180;
}
if (550-g[2]<250&&600-g[2]>250&&5+f<20+h[2]&&kill)
{
    life--;

kill=false;
    circle(250,200,15);
    i=180;
}
if (550-g[3]<250&&600-g[3]>250&&5+f<20+h[3]&&kill)
{
    life--;

kill=false;
    circle(250,200,15);
    i=180;
}
if (550-g[4]<250&&600-g[4]>250&&5+f<20+h[4])
{
    life--;

kill=false;
    circle(250,200,15);
    i=180;
}
setup();
//setfillstyle(SOLID_FILL,GREEN);wwwwwww
setcolor(WHITE);
    circle(250,20+i,15);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(250,20+i,WHITE);
  //  floodfill(250,20+i,2);
   // delay(be);
   //  int b= rand()%180;

   if (score==15)
   {
       be=5;
   }
  else if (score==30)
   {
       be=10;
   }
  else if (score==45)
   {
       be=15;
   }
   delay(20-be);
    cleardevice();
    if (i<=20){
      i=20;
    }


if(life<=0)
{
    break;
}
    }
   gameover=false;
    }
    sprintf (mm,"TOTAL SCORE: %d",score);
    outtextxy(235,200,mm);
    getch();
    return 0;
}
void setup()
{
    char a;
    if (kbhit())
    {
        static int k=1;
      a=getch();
      {
      if((a)=='w')
        {
            circle (250,20+i-k,15);
            k+=1;
            i=i-k;
            delay(5);
}
      }

    }
}

void bar (int cc)
{


rectangle (550,20,600,20+cc);
//delay(300);
}