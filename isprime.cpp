#include<iostream>
using namespace std;
int main(){
     int i;
     int n;
     cout<<"Enter the number ";
     cin>>n;
     int isprime=1;
     for(i=2;i<n;i++){ 
         if(n%i==0){
             isprime=0;
             break;
         }

     }
     if(isprime==0){
         cout<<"Number is not prime "<<endl;
     }
     else {
         cout<<"Number is prime "<<endl;
     }

}