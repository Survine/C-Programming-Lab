#include <stdio.h>

int main()
{
    float total_amount,withdraw_amount;
    char choice;

    printf("Enter the total amount in your account :");
    scanf("%f",&total_amount);
    
    printf("Enter the amount you want to withdraw from your account :");
    scanf("%f",&withdraw_amount);

    if (withdraw_amount <= total_amount)
    {
       printf("Rupees %.2f have been withdrawn\n",withdraw_amount);
       
       printf("Do you want to check the remaining balance?\n");
       printf("Please enter 'Y' or 'N'\n");
       scanf(" %c",&choice);
       if(choice == 'Y' || choice == 'y')
       {
        printf("%.2f is the remaining balance\n", total_amount - withdraw_amount);
        printf("Thank You for using our services");
       }
       else
       {
        printf("Thank You for using our services");
       }
    }
    else 
    {
        printf("Transaction can't be processed due to insufficicient funds in your account");
    }
    

}