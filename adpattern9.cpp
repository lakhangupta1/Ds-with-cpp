#include<iostream>
using namespace std;
int main(){
    int i,j,n,k,s,p,t;
    i=1;
    cout<<"Enter the number ";
    cin>>n;
    s=n-1;
    while(i<=n){
        k=1;
        while(k<=s){
            cout<<" ";
            k++;
        }
        s--;j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        t=i-1;
         while(t){
             cout<<t;
             t--;
         }
     cout<<endl;
     i++;

    
    }
}