#include<iostream>
using namespace std;
int onescomp(int n);
int main(){
    int i,n;
    cout<<"Enter the number";
    cin>>n;
   i=onescomp(n);
   cout<<" "<<i;
    return 0;
}
int onescomp(int n){
    int m=n;
    int marks=0;
    while(m!=0){
        marks=(marks<<1)|1;
        m=m>>1;

    }
    int ans=(~n)&marks;
    return ans;
}