#include<stdio.h>
int main(){
    int n=123;
    printf("Value of variable : %d\n",n);
    printf("Address of variable : %p\n\n",&n);

    int *ptn;
    ptn=&n;
    
    printf("Value of variable : %d\n",*ptn);
    printf("Address of variable : %p\n\n",ptn);

    return 0;
}