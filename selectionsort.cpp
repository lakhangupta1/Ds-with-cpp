#include<iostream>
using namespace std;
void swap(int *p,int *q);
void selectionsort(int arr[],int size){
    int minindex;
    for(int i=0;i<size-1;i++){
        minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=i;
            }
            
        }
        swap1(&arr[minindex],&arr[i]);
    }

}
int main(){
    int arr[]={3,5,6,9,0,8,7,5,3,1,2};
    int size=sizeof(arr)/sizeof(int );
    selectionsort(arr,size);
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}
void swap1(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *p=temp;
}