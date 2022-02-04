#include<iostream>
using namespace std;
void inseriton(int arr[],int size){
    int i,j;
    for(i=1;i<size;i++){
        int temp=arr[i];
        j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int i;
    int arr[]={2,4,7,9,8,5,6,3,1};
    int size=sizeof(arr)/sizeof(int );
    inseriton(arr,size);
    for(i=0;i<size;i++){
        cout<<" "<<arr[i];
    }

}