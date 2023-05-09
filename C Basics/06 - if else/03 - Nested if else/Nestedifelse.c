#include <stdio.h>

int x;

int main(){

	printf("Enter your marks : "); scanf("%d",&x);

	if(x>=50){

		if(x<=100){

			printf("PASS\n");

		}
		else{

			printf("Wrong Mark !!! Please Check !!!\n");

		}

	}
	else{

		if(x>=0){

			printf("FAIL\n");

		}
		else{

			printf("Wrong Mark !!! Please Check !!!\n");

		}

	}

	printf("Keep It Up\n");

return 0;
}