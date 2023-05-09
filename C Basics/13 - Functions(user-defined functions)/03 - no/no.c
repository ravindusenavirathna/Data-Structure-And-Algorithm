#include <stdio.h>
int calculatesum();
int main(){
    calculatesum();
    return 0;
}
int calculatesum(){
    int sum,num1,num2;
    printf("Enter Two Numbers :\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("Sum = %d",sum);

}