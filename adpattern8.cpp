#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,p,s=1;
    cout<<"Enter the number ";
    cin>>n;
    i=1;
    s=0;p=n;
    while(i<=n){
        j=1;
       // s=1;
        while(j<=s){
            cout<<" ";
            j++;
        }
        s++;
        k=1;
        while(k<=p){
            cout<<"*";
            k++;
        }
        p--;
        i++;
        cout<<endl;
    }


}