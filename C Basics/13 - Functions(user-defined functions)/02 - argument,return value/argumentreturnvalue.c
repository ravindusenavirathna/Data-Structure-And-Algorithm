#include <stdio.h>
int calculatesum(int a,int b);
int main(){
    int sum,num1,num2;
    printf("Enter Two Numbers : \n");
    scanf("%d %d",&num1,&num2);

    sum=calculatesum(num1,num2);
    printf("Sum = %d\n",sum);

    return 0;
}
int calculatesum(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}