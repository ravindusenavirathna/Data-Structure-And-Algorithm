#include <stdio.h>
int x;
int main(){

    for (x=10; x<=100; x+=10){
        if(x%7==0){
            goto label01;
        }
        printf("%d\n",x);
    }
    label01:
        printf("__%d is divided by 7__",x);
    return 0;
}