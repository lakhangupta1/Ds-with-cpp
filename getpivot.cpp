#include<iostream>
using namespace std;
int getpivot(int a[],int size){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;            //mid=s+(e-s)/2;
    while(s<e){
        if(a[mid]>=a[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;  //mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int i;
    int a[]={1,2,3,4,7,9,10,12};
    int r[]={4,7,9,10,12,1,2,3};
    int size=sizeof(a)/sizeof(int );
    i=getpivot(r,size);
    cout<<i;
}