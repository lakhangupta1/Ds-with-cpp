#include<iostream>
using namespace std;
bool search(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k)
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the target ";
    cin>>k;
    if(search(a,n,k)){
        cout<<"Element is present ";
    }
    else{
        cout<<"Element is not present ";
    }
}
