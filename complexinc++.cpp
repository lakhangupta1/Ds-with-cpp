#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int a1,int b1)
    {
         a=a1;
         b=b1;
    }
    void getdata(void )
    {
        cout<<"the complex data is "<<a<<"+"<<b<<"i"<<endl;

    }
    friend complex sumdata1(complex o1,complex o2);


};
complex sumdata1(complex o1,complex o2)
{
      complex o3;
      o3.setdata((o1.a+o2.a),(o1.b+o2.b));
      return o3;
}
int main()
{
    
    complex o1,o2,sum;
    o1.setdata(1,2);
    o2.setdata(3,8);
    sum=sumdata1(o1,o2);
    o1.getdata();
    o2.getdata();
    sum.getdata();
}