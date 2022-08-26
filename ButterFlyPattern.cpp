#include<iostream>
using namespace std;
int main(){
    int n=4;
   int i,j;
    int sp=n+2;
    for(i=1;i<=n;i++){
        for( j=1;j<=i;j++)
        cout<<"*";


        for(int k=1;k<=sp;k++)
        cout<<" ";
        sp=sp-2;

       for(int t=1;t<=i;t++)
       cout<<"*";

       cout<<endl;

    }  
    sp=2;


    for(int p=1;p<n;p++)
    {
      for(int r=n-1;r>=p;r--)
      cout<<"*";

      for(int sp2=1;sp2<=sp;sp2++)
      cout<<" ";
      sp=sp+2;

       for(int r=n-1;r>=p;r--)
      cout<<"*";
       
       cout<<endl;


    }


    return 0;
}
