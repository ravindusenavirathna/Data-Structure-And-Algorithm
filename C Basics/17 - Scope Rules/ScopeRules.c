#include<stdio.h>
int a=10; //Global Variable
int main(){
    printf("Value of n (before) = %d\n",a);
    int a=20; //Local Variable
    printf("Value of n (after) = %d\n",a);
    return 0;
}