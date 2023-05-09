#include <stdio.h>

int x;

int main(){

	printf("Enter your mark : ");scanf("%d",&x);

	if(x>100){
		printf("Wrong Mark !!!\n");
	}
	else if(x>=50){
		printf("PASS\n");
	}
	else if(x>=0){
		printf("FAIL\n");
	}
	else{
		printf("Wrong Mark !!!\n");
	}

return 0;
}