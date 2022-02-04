#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the number of row "<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=n;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<"\n";
        i++;
    }

}
