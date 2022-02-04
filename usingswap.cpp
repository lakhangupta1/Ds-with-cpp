#include<iostream>
using namespace std;
//void display( &x,y);
class y;
class x
{
    int data;
    public:
    void set(int value)
    {
        data=value;
    }
    void display()
    {
        cout<<"The data of x is "<<data<<endl;
    }
   friend void display1(x &,y &);
};
class y
{
    int data;
    public:
    void set(int value)
    {
        data=value;
    }
    void display(void )
    {
        cout<<"The data of y is "<<data<<endl;
    }
   friend void display1(x &,y &);
};
void display1(x & o1,y & o2)
{
    int temp;
    temp=o1.data;
    o1.data=o2.data;
    o2.data=temp;
}
int main()
{
    int i;
    x o1;
    o1.set(3);
    y o2;
    o2.set(7);
   display1(o1,o2);
  o1.display();
  o2.display();
}