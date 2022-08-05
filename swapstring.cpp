#include<iostream>
using namespace std;
char * rotate(char a[],int n,int k){
    if(k>=n)
    return a;
     int b[k];
     for(int i=0;i<k;i++){
        b[i]=a[i];
     }
     int j=0;
     for(int i=k;i<n;i++){
        a[j++]=a[i];
     }
     j=0;
     for(int i=n-k;i<n;i++){
        a[i]=b[j++];
     }
     return a;
}
int main(){
    char a[]="table123";
    int n=8;
    int k=1;
    char *b=rotate(a,n,k);
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

}