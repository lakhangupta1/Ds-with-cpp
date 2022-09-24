#include<iostream>
using namespace std;
int maxsum(int a[],int n){
    int ans=a[0];
    int sum=a[0];
    for(int i=1;i<n;i++){
        if(sum<0){
            sum=a[i];
        }
        else{
            sum+=a[i];
        }
        if(ans<sum){
            ans=sum;
        }

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<" max sum "<<maxsum(a,n);
    return 0;
}
