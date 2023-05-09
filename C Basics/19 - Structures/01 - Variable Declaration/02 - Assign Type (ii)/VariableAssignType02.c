#include<stdio.h>
struct book
{
    char *name;
    int page;
    float price;
}b1,b2,b3;

int main(){
    b1.name="C Programming";
    b1.page=1067;
    b1.price=900.00;

    b2.name="Madol Duwa";
    b2.page=356;
    b2.price=500.50;

    b3.name="About EDM";
    b3.page=467;
    b3.price=300.99;

    printf("Name Of Book 01             = %s\n",b1.name);
    printf("Number Of Pages in Book 01  = %d\n",b1.page);
    printf("Price Of Book 01            = %.2f\n",b1.price);
    printf("\n");

    printf("Name Of Book 02             = %s\n",b2.name);
    printf("Number Of Pages in Book 02  = %d\n",b2.page);
    printf("Price Of Book 02            = %.2f\n",b2.price);
    printf("\n");

    printf("Name Of Book 03             = %s\n",b3.name);
    printf("Number Of Pages in Book 03  = %d\n",b3.page);
    printf("Price Of Book 03            = %.2f\n",b3.price);
    printf("\n");

    return 0;
}