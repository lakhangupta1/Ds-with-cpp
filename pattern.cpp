#include<iostream>
using namespace std; 
int main(){
    int n=6;
   for(int i=1;i<=n;i++){
    if(i==1){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
    }
    else{
        cout<<"* ";
        for(int j=1;j<=n-i-1;j++)
            cout<<"  ";
            if(i!=n){
                cout<<"* ";
            }
        
    }
    cout<<endl;
   }
   return 0;
}
