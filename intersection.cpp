#include<iostream>
#include<vector>
// #include<bits/c++io.h>
#include<set>
#include<map>
using namespace std;
void  intersection(vector<int>v1,vector<int>v2){
    set<int>st;
    map<int,bool>mp;
    for(int i=0;i<v1.size();i++){
        mp[v1[i]]=true;
    }
    for(int i=0;i<v2.size();i++){
        if(mp[v2[i]]==true){
            st.insert(v2[i]);
        }

    }
    for(auto i: st){
        cout<<i<<" ";
    }

}
int main(){
    vector<int>v1={1};
    vector<int>v2={1,2,3,8,9,0,5,6,7};
    intersection(v1,v2);
    return 0;
    
}
