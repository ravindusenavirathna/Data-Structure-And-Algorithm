#include<stdio.h>
struct book
{
    char *name;
    int page;
    float price;
}b[100]={{"C Programming",1067,900.00},{"Madol Duwa",356,500.50},{"About EDM",467,300.99}};

int main(){

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