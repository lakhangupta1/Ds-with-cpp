#include<iostream>
using namespace std;
int main ()
{
    int i,j;
    int a[3][3];
    int temp ;
    printf("Enter the matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {  
            cin>>a[i][j];
            
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {    
            if(i<j)
            {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
            }
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++) 
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
}