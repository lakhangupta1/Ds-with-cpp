#include<iostream>
using namespace std;
int pivot(int arr[],int size){ 


    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;

}
int binarysearch(int arr[],int s,int e,int k){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[]={7,9,10,12,1,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int );
    int k;
    cout<<"Enter the value of k;";
    cin>>k;
    int pivot1=pivot(arr,size);
    if(arr[pivot1]<=k&&k<=arr[size-1]){
       int i= binarysearch(arr,pivot1,size-1,k);
       if(i!=-1){
        cout<<"key is present at index  "<<k<<endl;

       }
       else{
        cout<<"key is not present ";

       }
    }
    else{
       int i= binarysearch(arr,0,pivot1-1,k);
        if(i!=-1){
        cout<<"key is present at index  "<<k<<endl;

       }
       else{
        cout<<"key is not present ";

       }

    }

}