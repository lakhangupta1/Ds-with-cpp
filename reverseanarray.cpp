#include<iostream>
using namespace std;
int reverse(int *a,int size);
int main(){
    int i;
    int size ;
    int a[]={1,2,3,4,5,6,7,8};
    size=sizeof(a)/sizeof(int );
    reverse(a,size);
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

}
int reverse(int *a,int size){
    int i=0;
    int n=size-1;
    int temp;
    while(i<n){
        temp=a[i];
        a[i]=a[n];
        a[n]=temp;
        i++;
        n--;

    }
}