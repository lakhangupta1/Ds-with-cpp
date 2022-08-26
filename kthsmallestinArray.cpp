#include<iostream>
#include<bits/c++io.h>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cout<<"Enter the kth smallest element ";
    cin>>k;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    cout<<pq.top()<<endl;
    return 0;



}
