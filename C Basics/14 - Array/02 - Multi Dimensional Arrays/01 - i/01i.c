#include<stdio.h>
int main(){
    int array_1[2][3]={{5,67,984},{78,2,21}};
    
    int i,j;
    printf("Elements\n");
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",array_1[i][j]);
        }
    }
    
    return 0;
}