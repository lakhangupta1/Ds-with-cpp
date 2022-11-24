#include<iostream>
#include<vector>
using namespace std ;
vector<int> SortedSquire(vector<int>v1){
    vector<int>v(v1.size());
    int i=0,k=0;
    int j=v.size();
    while(i<=j){
        if(abs(v1[i])>abs(v1[j])){
            v[k++]=v1[j]*v1[j];
            j--;
        }else{
             v[k++]=v1[i]*v1[i];
            i++;

        }
    }
    return v;
}

bool IsExistDiff(vector<int>v,int x){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(abs(v[i]-v[j])==x)
        return true;
        if((v[i]+v[j])>x){
            j--;
        }else{
            i++;
        }
    }
    return false ;
}
bool IsExist(vector<int>v,int x){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if((v[i]+v[j])==x)
        return true;
        if((v[i]+v[j])>x){
            j--;
        }else{
            i++;
        }
    }
    return false ;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // cout<<IsExistDiff(v,x);
    vector<int>v1=SortedSquire(v);
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    return 0;

}
