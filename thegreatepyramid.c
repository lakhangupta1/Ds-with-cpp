#include<stdio.h>
void main(){
    int n;
    printf("Enter the number =");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
          printf(" ");
        if(i!=n)
        {
            for(int k=1;k<=(2*i)-2;k++)
            if(k==1)
            printf("%d",k);
            else
            printf(" ");
            printf("%d",i);
        }
            if(i==n)
            for(int t=1;t<=n;t++)
            printf("%d ",t);
            printf("\n");
        
       
    }
}