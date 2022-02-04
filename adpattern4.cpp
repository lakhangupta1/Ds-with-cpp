#include<iostream>
using namespace  std;
int main(){
    int i,j,n;
    cout<<"Enter the number ";
    cin>>n;
    i=1;
    char start='A';
    while(i<=n){
        j=1;
        start='A'+i-1;
        while(j<=n){
            cout<<" "<<start++;
            j++;
        }
        cout<<endl;
        i++;
    }

}