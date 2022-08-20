#include<stdio.h>
#include<stdlib.h>
int pin=0;
void readpin(){
     printf("Enter your pin ");
     scanf("%d",&pin);
     while(1){
     if(pin==1234)
     break;
     printf("\n Please Enter a valid pin \n");
     }

}
int main(){
     int option =0;
     char flag='y';
     unsigned long amount =15000;
     unsigned long deposite=0;
     unsigned long withdraw=0;
     readpin();
      do {
         printf("\n\n ********* Welcome to ATM Service ********\n");
         printf("\t 1.Balance Enquire \n");
         printf("\t 2.Cash Withdrawal \n");
         printf("\t 3.Deposite Amount  \n");
         printf("\t 4.Exit \n");
         printf("*********************\n\n");
         printf("Enter your choice :");
         scanf("%d",&option);
          


          switch(option){
            case 1:   printf("\n Your current balance is :%lu rs",amount);
                        break;

            case 2:   printf("\n Enter Amount :");
                      scanf("%lu",&withdraw);
                      if(withdraw%100 !=0){
                        printf(" \n Enter the amount in multiple of 100");
                      }
                      else if (withdraw >amount){
                          printf(" \n Insufficient balance !");

                      }
                      else {
                        amount=amount-withdraw;
                        printf("\n\n  Please collect your cash ");
                        printf("\n Your current balace is : % lu",amount);
                      }
                               break; 
            case 3:
                       printf("\n Enter amount to deposite :");
                       scanf("%lu",&deposite);
                       amount=amount+deposite;
                       printf("\n New Balance is : %lu",amount);
                       break;

            case 4:   printf("\n Thank You for using the ATM\n ");
                         break; 

            case 5 :
                        printf("\n Select correct option ");


          }

      }
      while(1);

}
