#include<iostream>
using namespace std;
class A{
    public :
     virtual void f(){
        cout<<"base "<<endl;
    }
    virtual  void g(){
        cout<<"1 "<<endl;
    }
};
class B: public A{
    public :
   virtual void f(){
        cout<<" Derived"<<endl;
    }
    virtual void g(){
        cout<<" 2"<<endl;
    }
};
int main(){
     A a;
     B b;
    /*   a.f();
     a.g();
     b.f();
     b.g();
    */
   A *pa=&a;
   A* pb=&b;
   pa->f();
   pa->g();

   cout<<"this is of pointer of pa \n";
   pb->f();
   pb->g();





     return 0;


 }