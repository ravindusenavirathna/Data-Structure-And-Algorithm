#include <stdio.h>

int main(){

    int x,y;

    for(x=1; x<=10; x++){
        printf("Multiplication Table for %d \n\n",x);
    
        for(y=1; y<=10; y++){
            printf("%d ",x*y);
        }

    printf("\n\n");
    }

    return 0;
}