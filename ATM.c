#include<stdio.h>

int main()
{
int amount=1000,deposite, withdraw;
int choice,k,pin=0;
while(pin != 1234)
   {
	  printf("Enter your pin number:");
	  scanf("%d",&pin);
	  if(pin != 1234)
	  printf("Pleace enter valid pin number:");
   }
   
   printf("************WELCOME TO ATM SERVICE***************");
   printf("\n1. Check balance\n");
   printf ("2. Withdraw cash\n");
   printf("3.deposite cash\n");
   printf("4.Quit\n ");
   printf("*******************************************\n\n");
   printf("Enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
   	case 1:
   	printf("your balance in rupees:%d",amount);
   	break;
   	case 2:
   	printf("Enter the amount to withdraw");
   	scanf("%d",&withdraw);
   	     if (withdraw % 100 != 0){
      
      	        printf("\nplease enter the amount in multiples of 100");
   	     }
           else if (withdraw >(amount - 500)){
      	        printf("INSUFFISIENT AMOUNT");
           }
            else {
                  amount = amount - withdraw;
                  printf("\n\nPLEASE COLLECT CASH\n");
                  printf("\nYOUR CURRENT BALANCE IS:%d",amount);
            }
                  break;
        case 3:
            printf("Enter the amount to deposite:");
            scanf("%d",&deposite);
            amount = amount + deposite;
            printf("YOUR BALANCE IN RUPEES:%d",amount);
            break;
        case 4:
             printf("\nTHANK YOU FOR USING THE ATM");
             break;
         default: 
             printf("\nINVALID CHOICE");
   }
   k=1;
   while(!k)
printf("\n THANKS FOR USING THIS ATM SERVICE");
return 0;
}