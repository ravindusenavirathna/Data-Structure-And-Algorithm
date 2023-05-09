#include <stdio.h>
int calculatesum();
int main(){
    int sum;
    sum=calculatesum();
    printf("Sum=%d",sum);
    return 0;
}
int calculatesum(){
    int a,b,sum;
    printf("Enter Two Numbers :\n");
    scanf("%d %d",&a,&b);

    sum=a+b;
    return sum;
}