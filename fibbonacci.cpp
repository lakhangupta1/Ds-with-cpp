#include<iostream>
using namespace std;
int main(){
     int i,n;
     int a=0;
     int b=1;
     cout<<"Enter the number ";
     cin>>n;
     int sum;
     cout<<a<<" "<<b;
     for(i=0;i<n;i++){
         sum=a+b;
         cout<<" "<<sum;
         a=b;
         b=sum;
     }

}