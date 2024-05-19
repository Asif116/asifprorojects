#include <stdio.h>

int main()
{
    int choice,
        quantity,
        press,
        total=0;
        again:
        printf("\n***********************************");
        printf("\n\t    MENU CARD\n");
    printf("\n  1.Tea                  Rs:  30 \n  2.Coffe                Rs:  40\n  3.Milk Shake           Rs:  100 \n  4.Cold Coffee          Rs:  120\n\n");
    printf("***********************************\n");

        printf("\n\tDelicious Dessert\n");
    printf("\n  5.Strawberry Cake      Rs:  200 \n  6.Korean Pancake       Rs:  250\n  7.Cheeese Cake         Rs:  160 \n  8.Dark Chocolate Cake  Rs:  190\n\n");
    printf("***********************************\n");

        printf("\n\t     Drink\n");
    printf("\n  9.Mojito               Rs:  180 \n  10.Lemon Drop          Rs:  199\n  11.Margarita           Rs:  120 \n  12.Cola                Rs:  99\n\n");
    printf("***********************************\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        printf("\nYou have selected Tea\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
        total=total+(quantity*30);

        break;
    case 2:
        printf("\nYou have selected Coffee\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
         total=total+(quantity*40);
        break;
    case 3:
        printf("\nYou have selected Milk shake\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
        total=total+(quantity*100);

        break;
    case 4:
        printf("\nYou have selected Cold coffee\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
       total=total+(quantity*120);

        break;
    case 5:
        printf("\nYou have selected Strawberry Cake\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
        total=total+(quantity*200);

        break;
    case 6:
        printf("\nYou have selected Korean Pancake\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
         total=total+(quantity*250);
        break;
    case 7:
        printf("\nYou have selected Cheeese Cake\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
        total=total+(quantity*160);

        break;
    case 8:
        printf("\nYou have selected Dark Chocolate Cake\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
       total=total+(quantity*190);

        break;   
    case 9:
        printf("\nYou have selected Mojito\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
        total=total+(quantity*180);

        break;
    case 10:
        printf("\nYou have selected Lemon Drop\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
         total=total+(quantity*199);
        break;
    case 11:
        printf("\nYou have selected Margarita\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
        total=total+(quantity*120);

        break;
    case 12:
        printf("\nYou have selected Cola\n\n");
        printf("Enter the quantity :  ");
        scanf("%d", &quantity);
       total=total+(quantity*99);

        break;    
    default:
    printf("Invalid a selection\nplease enter number properly.\n");
        break;
    }
   printf("Do you want to continue to press 1\n");
   scanf("%d",&press);
   if(press==1){
     goto again;
   }

   
   printf("\nYour order total price : %d \n", total);

   printf("Thank you come again ! \n");
    return 0;
}