#include<iostream>
using namespace std;
int binary(int arr[],int size,int key ){
    int s=0;
    int end=size-1;
    int mid=(s+end)/2;
    while(s<=end){  
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(s+end)/2;

    }
    return -1;
}
int main(){
     
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size =sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter the key";
    cin>>key;
   int index=binary(arr,size,key);
   if(index!=-1)
   cout<<"the index is "<<index;
   else
   cout<<"The index is not present";
}