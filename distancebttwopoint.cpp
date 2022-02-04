#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x;
    int y;
    public:
    point(int x,int y);
    friend float  distance(point o1,point o2);


};
float distance(point o1,point o2)
{
    int x1,y1,x2,y2;
    float d;
    float x,y;
    x1=o1.x;
    y1=o1.y;
    x2=o2.x;
    y2=o2.y;
    x=(x2-x1)*(x2-x1);
    y=(y2-y1)*(y2-y1);
    d=x+y;
    d=sqrt(d);
    return d;
}
point::point(int a,int b)
{
    x=a;
    y=b;
}
int main()
{   float d;
    point a(2,3);
    point b(7,9);
    d=distance(a,b);
    cout<<"Distance is "<<d<<endl;
    return 0;
}