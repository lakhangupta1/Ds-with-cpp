#include<iostream>
using namespace std; 
void spiral(int a[4][4]);
int main(){
 
      int a[4][4];
      for(int i=0;i<4;i++){
          for(int j=0;j<4;j++){
              cin>>a[i][j];

          }
      } 
      spiral(a);
    




    return 0;


}
void spiral(int a[4][4]){
    int total=16;
    int strow=0,stcol=0,endrow=3,endcol=3;
    while(total--){
        for(int i=stcol;i<=endcol;i++)
        cout<<a[strow][i]<<" ";


        strow++;
        for(int i=strow;i<=endrow;i++)
        cout<<a[i][endcol]<<" ";

         
        endcol--;
        for(int i=endcol;i>=stcol;i--)
        cout<<a[endrow][i]<<" ";

        endrow--;
        for(int i=endrow;i>=strow;i--)
        cout<<a[i][stcol]<<" ";

        stcol++;
    }
}