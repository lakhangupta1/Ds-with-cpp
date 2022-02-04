#include<iostream>
#include<iomanip>
using namespace std;
int  main()
{
    int i;
    int a=3;
    int b=12;
    int c=123;
    int d=1234;
    cout<<"the number is "<<setw(4)<<a<<endl;
    cout<<"the number is "<<setw(4)<<b<<endl;
    cout<<"the number is "<<setw(4)<<c<<endl;
    cout<<"the number is "<<setw(4)<<d<<endl;
    int *m=&a;
    cout<<"0x61feec";
    cout<<m<<endl;
    return 0;
}