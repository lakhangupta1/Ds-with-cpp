#include<iostream>
using namespace std;
bool issafe(int row ,int col,int n,int arr[20][20]){
       int duprow=row;
       int dupcol=col;
     while(row>=0&& col>=0){
        if(arr[row][col]==1)
        return false;
        row--;
        col--;
     }
     col=dupcol;
     row=duprow;
     while(col>=0){
        if(arr[row][col]==1)
        return false;
        col--;
     }
     col=dupcol;
     row=duprow;
     while(row<n&&col>=0){
        if(arr[row][col]==1)
        return false;
        row++;
        col--;
     }

}
void solve(int col,int n,int arr[20][20]){
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
     
     for(int row=0;row<n;row++){
        if(issafe(row,col,n,arr)){
            arr[row][col]=1;
            solve(col+1,n,arr);
            arr[row][col]=0;
        }
     }
}
int main(){
    int arr[20][20]={0};
    int n=4;
    solve(0,n,arr);
    return 0;
}
