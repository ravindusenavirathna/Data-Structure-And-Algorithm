#include <stdio.h>

char name[50];
int age;
char cha;
float flo;

int main(){
	
	//input

	printf("Enter Your Favorite Letter : \n");scanf("%c",&cha);
	printf("Enter Your Name : \n");scanf("%s",&name);
	printf("Enter Your Age : \n");scanf("%d",&age);
	printf("Enter Your a Decimal Number : \n");scanf("%f",&flo);
	
	//output & check

	printf("\n\nYour Name is : %s\n",name);
	printf("Your Age is : %d\n",age);
	printf("Your Favorite Letter is : %c\n",cha);
	printf("The Decimal Number You Entered : %f\n",flo);

return 0;
}