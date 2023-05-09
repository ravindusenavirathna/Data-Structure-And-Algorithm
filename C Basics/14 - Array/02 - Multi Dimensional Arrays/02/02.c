#include<stdio.h>
int main(){
    int array_1[2][3][4]={
      {{23,4,567,89},{7,56,45,478},{7,78,345,11}},
      {{10,5,67,567},{690,33,67,9},{7,908,78,67}}  
    };
    
    int i,j,k;
    printf("Elements\n");
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\n");
            for(k=0;k<4;k++)
            printf("%d\t",array_1[i][j][k]);
        }
    }
    
    return 0;
}