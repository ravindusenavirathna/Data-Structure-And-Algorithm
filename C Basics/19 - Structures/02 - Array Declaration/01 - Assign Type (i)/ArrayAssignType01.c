#include<stdio.h>
struct book
{
    char *name;
    int page;
    float price;
}b[100];

int main(){
    b[0].name="C Programming";
    b[0].page=1067;
    b[0].price=900.00;

    b[1].name="Madol Duwa";
    b[1].page=356;
    b[1].price=500.50;

    b[2].name="About EDM";
    b[2].page=467;
    b[2].price=300.99;

    printf("Name Of Book 01             = %s\n",b[0].name);
    printf("Number Of Pages in Book 01  = %d\n",b[0].page);
    printf("Price Of Book 01            = %.2f\n",b[0].price);
    printf("\n");

    printf("Name Of Book 02             = %s\n",b[1].name);
    printf("Number Of Pages in Book 02  = %d\n",b[1].page);
    printf("Price Of Book 02            = %.2f\n",b[1].price);
    printf("\n");

    printf("Name Of Book 03             = %s\n",b[2].name);
    printf("Number Of Pages in Book 03  = %d\n",b[2].page);
    printf("Price Of Book 03            = %.2f\n",b[2].price);
    printf("\n");

    return 0;
}