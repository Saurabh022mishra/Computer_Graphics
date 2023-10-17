//A program to draw a circle using the Polynomial Method.
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void plot8pixel(int,int,int,int);
int main()
{
int x,y,r,h,k;
cout<<"Polynomial method to draw a circle";
cout<<"\nenter the x and y coordinates:-\n";
cin>>h>>k;
cout<<"\nenter the radius:-\n";
cin>>r;
x=0;
y=r;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
setbkcolor(WHITE);
while(x<=y)
{
plot8pixel(x,y,h,k);
x++;
y=sqrt((r*r)-(x*x));
}
setcolor(8);
getch();
closegraph();
}
void plot8pixel(int x,int y,int h,int k)
{
putpixel(x+h,y+k,8);
putpixel(x+h,-y+k,8);
putpixel(-x+h,y+k,8);
putpixel(-x+h,-y+k,8);
putpixel(y+h,x+k,8);
putpixel(y+h,-x+k,8);
putpixel(-y+h,x+k,8);
putpixel(-y+h,-x+k,8);
}
