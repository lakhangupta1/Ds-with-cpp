#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascal(int n){
    vector<vector<int>>pascals(n);
    for(int i=0;i<n;i++){
        pascals[i].resize(i+1);
        for(int j=0;j<=i;j++){
           if(j==0 || j== i){
             pascals[i][j]=1;
           }else{
            pascals[i][j]=pascals[i-1][j]+pascals[i-1][j-1];
           }
        }
    }
    return pascals;
}
int main(){
    int n=8;
    vector<vector<int>>v(n);
    v=pascal(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }


}
