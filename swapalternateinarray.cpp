#include<iostream>
using namespace std;
void swapalt(int a[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int size=sizeof(a)/sizeof(int );
    swapalt(a,size);
    for(int i=0;i<size;i++){
        cout<<" "<<a[i];
    }

}