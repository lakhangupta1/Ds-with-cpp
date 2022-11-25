#include<iostream>
#include<vector>
using namespace std;
void SpiralPrint(int **v,int n,int m){
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=m-1;
    int total=n*m;
    while(left<=right || top <=bottom ){
        for(int i=left;i<=right;i++){
            cout<<v[top][i]<<" ";
            top++;
        }
        for(int i=top;i<=bottom;i++){
            cout<<v[i][right]<<" ";
            right--;
        }
        for(int i=right;i>=left;i--){
            cout<<v[bottom][i]<<" ";
            bottom--;
        }
        for(int i=bottom;i>=top;i--){
            cout<<v[i][left]<<" ";
            left++;
        }

    }

}
int main(){
    int n=3,m=3;
    cout<<"Enter the row  and Column ";
    // cin>>n>>m;
    // vector<vector<int>>v(n,vector<int>(m));
    int a[n][m];
    cout<<"Enter the Array data";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    SpiralPrint(a,n,m);
    return 0;

}
