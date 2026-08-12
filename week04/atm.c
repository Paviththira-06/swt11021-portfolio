#include <stdio.h>

int main()
{
    int option;
    double balance = 25000.00;
    double amount;

    printf("======= SEUSL ATM =======\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("=========================\n");

    printf("Select option: ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
            printf("Current Balance: %.2f LKR\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);

            if (amount > 0)
            {
                balance = balance + amount;
                printf("New Balance: %.2f LKR\n", balance);
            }
            else
            {
                printf("Invalid amount\n");
            }
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);

            if (amount > 0)
            {
                if (amount <= balance)
                {
                    balance = balance - amount;
                    printf("New Balance: %.2f LKR\n", balance);
                }
                else
                {
                    printf("Insufficient funds\n");
                }
            }
            else
            {
                printf("Invalid amount\n");
            }
            break;

        case 4:
            printf("Goodbye\n");
            break;

        default:
            printf("Invalid option\n");
    }

    return 0;
}