#include<stdio.h>
void main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++)
         if(j==1||j==i)
         printf("%d",j);
         else{
         if(i!=n)
         printf(" ");
         if(i==n){
             printf("%d",j);

         }
         }
         printf("\n");
     }
}