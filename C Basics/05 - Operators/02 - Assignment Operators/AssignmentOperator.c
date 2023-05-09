#include <stdio.h>

int a,b=0;

int main(){

	printf("Enter a :\n");scanf("%d",&a);
	printf("Enter b :\n");scanf("%d",&b);
	
	printf("\na=%d, b=%d\n",a,b);
	a=b;
	printf("when a=b, a=%d\n",a); //a=b
	
	printf("\na=%d, b=%d\n",a,b);
	a+=b;
	printf("when a+=b, a=%d\n",a); //a=a+b

	printf("\na=%d, b=%d\n",a,b);
	a-=b;
	printf("when a-=b, a=%d\n",a); //a=a-b

	printf("\na=%d, b=%d\n",a,b);
	a*=b;
	printf("when a*=b, a=%d\n",a); //a=a*b

	printf("\na=%d, b=%d\n",a,b);
	a/=b;
	printf("when a/=b, a=%d\n",a); //a=a/b

	printf("\na=%d, b=%d\n",a,b);
	a%=b;
	printf("when a%=b, a=%d\n",a); //a=a%b
	
return 0;
}