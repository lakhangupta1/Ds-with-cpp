#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;
    cout<<"Enter the number ";
    cin>>n;
    i=1;
    k=n;
    while(i<=n){
        j=1;
        while(j<=k){
            cout<<"*";
            j++;
        }
        k--;
        i++;
        cout<<endl;
    }

}
// also we can writte ;;;;
/* 
     i=1; 
     int k;
     while(i<=n){
         j=1; 
         k=n-i+1;
         while(j<=k){
            cout<<"*";
            j++;
         }
         cout<<endl;
         i++;
     }