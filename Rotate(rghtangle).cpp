#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } cout<<endl;


    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(a[i][j],a[i][n-1-j]);
        }
    }

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    

}
