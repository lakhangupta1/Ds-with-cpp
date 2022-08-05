#include<iostream>
//#include<stack>
using namespace std;
class stack{
     public :
     int * arr;
     int size ;
     int top;

     stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];

     }

     void push(int d){
        if(top==size-1){
            cout<<"stack is overflow"<<endl;
            return ;

        }
        top++;
        arr[top]=d;
     }

     void pop(){
        if(top==-1){
          cout<<"stack is underflow"<<endl;
         return ;

        }
        top--;

     }
     bool empty(){
        if(top==-1)
        return true;
        return false;
     }

     int gettop(){
        int x= arr[top];
        return x;
     }


};
int main(){
    /*stack<int >st;
    st.push(5);
    cout<<st.size();*/

      stack *st=new stack(5);
      st->push(5);
      cout<<st->gettop()<<endl;
      cout<<st->empty();

    return 0;
  

 }