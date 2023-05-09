#include<stdio.h>
int main(){
    int array_1[10]={3,45,245,95,1,957,1234};

    printf("Elements\n");
    int i;
    i=0;
    while (i<10)
    {
        printf("%d\n",array_1[i]);
        i++;
    }
    array_1[3]=300;

    printf("\n\nElements After change\n");
    i=0;
    while (i<10)
    {
        printf("%d\n",array_1[i]);
        i++;
    }
    
    return 0;
}