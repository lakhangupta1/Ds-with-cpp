#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public :
    complex(void )   //costructor  declaration ...
    {
        a=10;
        b=0;
    }
    void printnumber(void )
    {
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

};
/*complex::complex(void )
{
   a=10;
   b=0;
}*/
int main()
{
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

}