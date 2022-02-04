#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return n;
    }
    else
    return n*fact(n-1);
}
int ncr(int n,int r ){ 
    int a=fact(r)*fact(n-r);
    return ((fact(n))/a);

}
int main(){ 
    int n,r;
    cout<<"Enter the value of n="<<endl;
    cin>>n;
    cout<<"Enter the value of r="<<endl;
    cin>>r;
    int ans=ncr(n,r);
    cout<<"The answer is="<<ans<<endl;




    return 0;

}