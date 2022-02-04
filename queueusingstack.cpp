#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 10
int s1[size];
int s2[size];
int c=0;
int top1=-1;
int top2=-1;
void push1(int x){
    if(top1!=size-1)
    s1[++top1]=x;
    c++;
}
void enqueue(int x){
    push1(x);


}
int pop1(){
    if(top1!=-1)
    return s1[top1--];
}
void push2(int x){
    if(top2!=size-1)
    s2[++top2]=x;


}
int pop2(){
    if(top2!=-1)
    return s2[top2--];
}
int dequeue(){
    int a,b;
    for(int i=0;i<c;i++){
        push2(pop1());
    }
    b=pop2();
    for(int i=0;i<c-1;i++){
        push1(pop2());

    }
    c--;
    return b;
}
int main(){
    int n,k;
    cout<<"Enter the size for inserting enqueue"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
      cout<<"Enter the data of Q"<<endl;
      cin>>k;
      enqueue(k);
    }
    int p=dequeue();
    cout<<"The data is "<<p<<endl;
       p=dequeue();
    cout<<"The data is "<<p<<endl;
       p=dequeue();
    cout<<"The data is "<<p<<endl;
       p=dequeue();
    cout<<"The data is "<<p<<endl;

}