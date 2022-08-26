#include<iostream>
#include<algorithm>
using namespace std;
void closestright(int a[],int n){

    for(int i=0;i<n;i++){
        int f=0;
        for(int j=i+1;j<n-1;j++){
            if(a[j]>a[i])
            {   f=1;
                cout<<a[j]<<" ";
                break;
            }
        }
        if(f==0)
        cout<<-1<<" ";
    }
}
int main(){
    int a[]={6,16,11,9,3,10,19,5};
    int n=8;
    closestright(a,n);
    return 0;

}
