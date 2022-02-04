#include<iostream>
using namespace std;
int peak(int arr[],int size){

    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;

        }
        else{
            e=mid;

        }
        mid=(s+e)/2;
    }
    return s;

}
int main(){
    int arr[]={1,4,7,9,13,16,15,14,12,5,2};
    int size =sizeof(arr)/sizeof(int );
    int index=peak(arr,size);
    cout<<"index is "<<index;
}