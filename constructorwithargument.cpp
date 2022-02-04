#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(int x,int y);
    void display(void)
    {
        cout<<"Complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex ::complex(int x,int y)
{
    a=x;
    b=y;
}
int main()
{   
    complex a(4,6);
    a.display();
    complex b=complex(2,7);
    b.display();

}