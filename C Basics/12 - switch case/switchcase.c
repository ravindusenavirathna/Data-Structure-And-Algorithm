#include <stdio.h>
int num1,num2,operation,ans;
int main(){
    //Obtain Inputs
     printf("Enter Frist Number : ");
     scanf("%d",&num1);
     printf("Enter Second Number : ");
     scanf("%d",&num2);

    //Calculater
    printf("\t\t Operations\n");
    printf("\t Addition         --> 1\n");
    printf("\t Subtraction      --> 2\n");
    printf("\t Multiplication   --> 3\n");
    printf("\t Division         --> 4\n");
    printf("\t Remainder        --> 5\n");

    //Choose Operation
    printf("choose any operation for calculate : ");
    scanf("%d",&operation);
    printf("\n\n");

    //Switch Operations
    switch (operation)
    {
    case 1:
        ans=num1+num2;
        printf("%d+%d=%d",num1,num2,ans);
        break;

    case 2:
        ans=num1-num2;
        printf("%d-%d=%d",num1,num2,ans);
        break;

    case 3:
        ans=num1*num2;
        printf("%d*%d=%d",num1,num2,ans);
        break;

    case 4:
        ans=num1/num2;
        printf("%d/%d=%d",num1,num2,ans);
        break;

    case 5:
        ans=num1%num2;
        printf("%d|%d =%d",num1,num2,ans);
        break;

    default:
        printf("Invalid Input !!!");
        break;
    }
    return 0;
}