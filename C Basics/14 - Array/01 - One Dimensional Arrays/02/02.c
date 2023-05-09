#include<stdio.h>
int main(){
    int n=8;
    int array_1[n];
    array_1[0]=7;
    array_1[1]=256;
    array_1[2]=76;
    array_1[3]=2367;
    array_1[4]=13;
    array_1[5]=31;
    array_1[6]=142;
    array_1[7]=98;

    printf("Elements\n");
    int i;
    i=0;
    while (i<8)
    {
        printf("%d\n",array_1[i]);
        i++;
    }
    
    return 0;
}