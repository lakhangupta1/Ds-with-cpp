#include<iostream>
#include<limits.h>
using namespace std;
int maxisum(int a[3][3]){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans=max(ans,a[j][i]);
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
   int p=maxisum(arr);
   cout<<"maximum sum is ->"<<p<<endl;

   return 0;
}
