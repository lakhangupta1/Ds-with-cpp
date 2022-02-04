#include<iostream>
using namespace std;
int finduniq(int a[],int n){
    int i;
    int ans=0;
    for(i=0;i<n;i++){
        ans=ans^a[i];

    }
    return ans;
}
int main(){
    int a[]={1,2,3,4,5,5,4,3,2,1,6,6,10};
    int size=sizeof(a)/sizeof(int );
    int ans=finduniq(a,size);
    cout<<ans<<" "<<endl;
    return 0;


}