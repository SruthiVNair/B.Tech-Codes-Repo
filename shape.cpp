#include<iostream>
using namespace std;
class shape
{
public:
void setWidth(int w)
{
width=w;
}
void setHeight(int h)
{
height=h;
}
void setRadius(float r)
{
radius=r;
}
protected:
int width;
int height;
float radius;
};
class rectangle:public shape
{
public:
int getarea()
{
return(width*height);
}
};
class triangle:public shape
{
public:
int getarea()
{
return((width*height)/2);
}
};
class circle:public shape
{
public:
int getarea()
{
return(3.14*radius*radius);
}
};
int main()
{
rectangle rect;
triangle tri;
circle cir;
rect.setWidth(2);
tri.setWidth(2);
rect.setHeight(4);
tri.setHeight(4);
cir.setRadius(3.2);
cout<<"areas \n "<<"rectangle = "<<rect.getarea()<<"\ntriangle = "<<tri.getarea()<<"\ncircle = "<<cir.getarea();
return 0;
}




