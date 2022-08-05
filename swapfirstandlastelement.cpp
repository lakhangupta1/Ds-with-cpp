#include<iostream>
using namespace std;
int  swapfirstandlast(int n){
    int a[10];
    int d;
    int i=0;
    int x=n;
    while(n){
        d=n%10;
        a[i++]=d;
        n=n/10;
    }
    swap(a[0],a[i-1]);
    int sum=0;
    for(int j=i-1;j>=0;j--){
        sum=sum*10+a[j];
          
        
    }
  return   cout<<sum;
}
int main(){
    int a=12345;
   int x= swapfirstandlast(a);
   cout<<x;

    return 0;

}