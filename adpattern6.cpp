#include<iostream>
using namespace std;
int main(){
    int i,j,n,s,k;
    cout<<"Enter the number ";
    cin>>n;
    i=1;
    k=1;
    while(i<=n){
        s=n-i;
        j=1;
        while(j<=s){
            cout<<" ";
            j++;
        }
        k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        i++;
        cout<<endl;

    }

}