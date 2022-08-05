#include<iostream>
using namespace std;
int binarysqrt(int n){
    int s=0;
    int e=n;
    int  mid=s+(e-s)/2;
    int square=mid*mid;
    int ans=-1;
    while(s<=e){
        square=mid*mid;
        if(square==n){
            return mid;

        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;

    }
    return ans;
}
double root(int n,int precision,int sqrt){
    double factor=1;
    double ans=sqrt;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<=n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
SS    cout<<"Enter the number ";
    cin>>n;
    int answer=binarysqrt(n);
    cout<<"Square root of "<<n<<"is the "<<root(n,3,answer);

}