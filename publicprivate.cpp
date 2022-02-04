#include<iostream>
using namespace std;
class employee{
    private :
    int a=1,b=2,c=3;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"the data a is "<<a<<endl;
        cout<<"the data a is "<<b<<endl;
        cout<<"the data a is "<<c<<endl;

    }

};
void employee::setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee lakhan;
    lakhan.d=9;
    lakhan.setdata(8,7,6);
    lakhan.getdata();
    cout<<"the data is "<<lakhan.d;


}