#include<iostream>
using namespace std;
int fibbo(int n);
void swastic(int n){
    n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2 || j==n/2){
                cout<<"*";
            }
            else if(i==1 && j>=n/2){
                cout<<"*";
            }
            else if(j==1 && i<=n/2){
                cout<<"*";
            }
            else if(i==n && j<=n/2){
                cout<<"*";
            }
            else if(j==n && i>=n/2){
                cout<<"*";
            }
            else {
                cout<<" ";
            }

        }
        cout<<"\n";
    }
}
int main(){
    
    swastic(12);



    return 0;
}
