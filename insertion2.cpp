#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void insertion(int arr[],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(&arr[j],&arr[j-1]);
            }
        }
    }
}

int main(){
    int arr[]={3,4,6,8,9,10,2,1,5};
    int size=sizeof(arr)/sizeof(int );
    insertion(arr,size);
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}