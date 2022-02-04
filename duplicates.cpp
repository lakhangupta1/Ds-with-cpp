#include<iostream>
using namespace std;
int duplicate(int a[],int size){
    int i;
    int ans=0;
    for(i=0;i<size;i++){ 
         ans=ans^a[i]^i;
    }
    return ans;
}
int main(){
    int i;
    int a[]={1,2,3,4,5,9,6,7,8,9};
    int size=sizeof(a)/sizeof(int );
   cout<<duplicate(a,size);

}