#include<iostream>
using namespace std;
long long int squareroot(int n){
    int s=0;
    int e=n;
    long long int mid=(s+e)/2;
    long long int  ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;

}
int main(){
    int n;
    cout<<"ENter the number for printing square root "<<endl;
    cin>>n;
    cout<<squareroot(n)<<endl;
}