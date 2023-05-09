#include <stdio.h>
int add(int a,int b);
int main(){
    int num1,num2,sum;
    printf("Enter Two Numbers : \n");
    scanf("%d %d",&num1,&num2);
    
    sum=add(num1,num2);
    printf("sum = %d",sum);

    return 0;
}
int add(int a,int b){
    int addition;
    addition=a+b;
    return addition;
}