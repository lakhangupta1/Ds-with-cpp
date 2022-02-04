#include<iostream>
using namespace std;
int bits(int n);
int main(){
    int i,n;
    cout<<"Enter the number ";
    cin>>n;
    i=bits(n);
    cout<<"number of bits="<<i<<endl;
}
int bits(int n){
    int count=0;
    while(n!=0){
        n>>=1;
        count++;
    }
    return count;
}