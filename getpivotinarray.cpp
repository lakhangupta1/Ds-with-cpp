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
int main(){
    int arr[]={7,9,10,11,12,1,2,3,4};
    int size=sizeof(arr)/sizeof(int );
    int i=pivot(arr,size);
    cout<<"pivot element is "<<i;
}