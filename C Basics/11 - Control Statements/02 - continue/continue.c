#include <stdio.h>
int x;
int main(){

    for (x=10; x<=100; x+=10){
        if(x%7==0){
            continue;
        }
        printf("%d\n",x);
    }

    return 0;
}