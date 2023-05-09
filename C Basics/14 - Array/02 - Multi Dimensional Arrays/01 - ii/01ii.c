#include<stdio.h>
int main(){
    int array_1[2][3];
    array_1[0][0]=7;
    array_1[0][1]=256;
    array_1[0][2]=76;
    array_1[1][0]=2367;
    array_1[1][1]=13;
    array_1[1][2]=31;

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