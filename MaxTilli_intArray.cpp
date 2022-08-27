#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int max1=INT_MIN;
    for(int i=0;i<n;i++){
        max1=max(max1,a[i]);
        cout<<max1<<" ";

    }
}
