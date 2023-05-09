#include<stdio.h>
const float PI=3.14159265359;
int main(){
    float r,Perimeter;
    printf("Enter Radius : ");
    scanf("%f",&r);
    Perimeter= 2*PI*r;
    printf("Perimeter = %f",Perimeter);
    return 0;
}