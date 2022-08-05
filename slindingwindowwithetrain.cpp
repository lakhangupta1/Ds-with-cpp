#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int maxplateform(float a[],float b[],int n){
    int ans=INT_MIN;
    int plateform=1;
    int i=1;
    int j=0;
    while(j<n){
        if(a[i]>b[j]){
        plateform--;
        j++;
    }
        if(b[j]>a[i]){

        plateform++;
        i++;

        }
        ans=max(ans,plateform);

    }
    return ans;
}
int main(){
    
    float a[]={9,9.4,9.5,11,15,18};
    float b[]={9.1,11.2,11.3,12,19,20};
    int k=maxplateform(a,b,6);
    cout<<k<<endl;

    return 0;

}