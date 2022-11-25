#include<iostream>
using namespace std;
void SpiralPrinting(int a[3][3],int n,int m){
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=m-1;
    int value=1;
    while(left<=right){
        for(int i=left; i<=right;i++)
            a[top][i]=value++;
            top++;
        
        for(int i=top;i<=bottom;i++)
            a[i][right]=value++;
            right--;

        
        for(int i=right;i>=left;i--)
            a[bottom][i]=value++;
            bottom--;
        
        for(int i=bottom;i>=top;i--)
            a[i][left]=value++;
            left++;
        
    }
}
int main(){
    int n=3;
    int m=3;
    int a[3][3];
    
    SpiralPrinting(a,3,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
       cout<<endl;
    }
    return 0;
}
