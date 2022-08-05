#include<iostream>
using namespace std;
void wavematrix(int a[4][4]);
int main(){
    int n=4;
    int a[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
   wavematrix(a);




    return 0;
}
void wavematrix(int a[4][4]){
    int n=4;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i%2==0)
            cout<<a[i][j]<<" ";
            else
            cout<<a[i][n-j-1]<<" ";
        }
        cout<<endl;
    }

}