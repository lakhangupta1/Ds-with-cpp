#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<int>v){
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}
vector<int> Merge(vector<int>v1,vector<int>v2){
    int totalsize=v1.size()+v2.size();
    vector<int>v(totalsize+1);
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
           v[k++]=v2[j++];
        }else{
            v[k++]=v1[i++];
        }
    }
    while(i<v1.size()){
        v[k++]=v1[i++];
    }
    while(j<v2.size()){
        v[k++]=v2[j++];
    }
    return v;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
      for(int i=0;i<m;i++){
        cin>>v2[i];
    }

  
  printvector(Merge(v1,v2));
  return 0;
}
