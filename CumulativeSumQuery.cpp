#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        int sum=0;
        for(int i=p;i<=q;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
