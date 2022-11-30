#include<iostream>
using namespace std;
int UniquePair(int a[],int n,int x){
    int ans=0;
    int i=0;
    int j=n-1;
    while(i<j){
        if((a[i]+a[j])==x){
            ans++;
            i++;
            j--;
        }
        else if((a[i]+a[j])<x){
            i++;
        }else{
            j--;
        }
    }
    return ans;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=9;
   cout<< UniquePair(a,n,11);
    return 0;
}
