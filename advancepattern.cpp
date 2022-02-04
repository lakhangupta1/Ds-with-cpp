#include<iostream>
using namespace std;
int main(){
    int i,k=1,j,t;
    for(i=1;i<=4;i++){
        if(i%2!=0){
            for(j=1;j<=4;j++){
                
                cout<<k<<" ";
                k++;

            }
            cout<<"\n";
        }
        else{
            for(t=k+3;t>=k;t--){
                cout<<t<<" ";


            }
            cout<<"\n";
            k=k+4;
        }
       
    }
    return 0;
}