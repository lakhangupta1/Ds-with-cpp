#include<iostream>
using namespace std;
int main(){  
    int i,j,n;
    cout<<"Enter the number ";
    cin>>n;
    i=1;
    char ch='A'+n-1;
    while(i<=n){ 
        j=1;
        ch='A'+n-i;
        while(j<=i){
            cout<<ch++;
            j++;
        }
        i++;
        cout<<endl;

    }
}