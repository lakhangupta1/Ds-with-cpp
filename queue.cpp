#include<iostream>
using namespace std;
#define SIZE 10
#include<stdlib.h>
int q[SIZE];
int f=-1;
int r=-1;
void enqueue(int x){  
    if(f==-1){
      f=r=0;
      q[r]=x;

    }
    if(r==SIZE-1){
       cout<<"QUEUE is overflow";
       return ;

    }
    else 
    {
        r=r+1;
        q[r]=x;

    }


}
int dequeue(){
    int temp;
    if(f==-1){
        cout<<"QUEUE is underflow"<<endl;
        return 0;
    }
    else if (f==r){
        temp=q[f];
        f=r=-1;
        return temp;

    }
    else{
          temp=q[f];
          f=f-1;
          return temp;
    }
}
int mian(){
    int i,n;
    int key; 
    cout<<"Enter the how many number of element ";
    cin>>n;
    for(i=0;i<n;i++){ 
          cout<<"Enter the number for enqueueu";
          cin>>key;
          enqueue(key);

    }
    int p=dequeue();
    cout<<p;
    return 0;

}