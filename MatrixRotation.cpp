#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void rightDegreeRotate(vector<vector<int>>&v){
    int n=v.size();
    //transpose of matrix.
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    //Reverse ColumWise .
    for(int i=0;i<n;i++){
       for(int j=0;j<v[i].size()/2;j++){
        swap(v[i][j],v[i][v[i].size()-j-1]);
       }
    }
    return ;

}
int MaxiOnes(vector<vector<int>>&v){
    int maxOnes=INT_MIN;
    int ans=-1;
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=0;
        for(int j=0;j<v[0].size();j++){
           if(v[i][j]==1){
            sum+=1;
           }
           if(sum>maxOnes){
            maxOnes=sum;
            ans=i;
           }
        }

    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }


    rightDegreeRotate(v);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }
//   cout<<"indexe : "<<MaxiOnes(v);
  return 0;
}
