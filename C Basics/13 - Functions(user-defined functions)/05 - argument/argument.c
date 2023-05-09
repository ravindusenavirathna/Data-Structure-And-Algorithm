#include <stdio.h>
int calculatesum(int a,int b);
int main(){
    int num1,num2,sum;
    printf("Enter Two Numbers :\n");
    scanf("%d%d",&num1,&num2);
    sum=calculatesum(num1,num2);
    printf("Sum=%d",sum);
    return 0;
}
int calculatesum(int a,int b){
    int sum;
    sum=a+b;
}