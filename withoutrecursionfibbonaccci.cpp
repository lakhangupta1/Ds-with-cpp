#include<iostream>
using namespace std;
void fibbo(int n);
int main(){
    int n;

   fibbo(8);
}
void fibbo(int n){
    int i;
    int a=0,b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(i=1;i<n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        
    }
}