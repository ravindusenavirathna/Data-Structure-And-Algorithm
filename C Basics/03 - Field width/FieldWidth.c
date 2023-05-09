#include <stdio.h>
int main(){

	//[fwidth]

	printf("[fwidth]\n");
	printf("value : %8d\n",85);
	printf("value : %8f\n",2.57);
	printf("value : %8c\n",'s');
	printf("value : %8s\n\n","EDM");

	//[-][fwidth]

	printf("[-][fwidth]\n");
	printf("value : %-8d\n",85);
	printf("value : %-8f\n",2.57);
	printf("value : %-8c\n",'s');
	printf("value : %-8s\n\n","EDM");

	//[fwidth][.P]

	printf("[fwidth][.P]\n");
	printf("value : %8.2f\n",2.57894);
	printf("value : %8.1s\n\n","EDM");

	//[-][fwidth][.P]

	printf("[-][fwidth][.P]\n");
	printf("value : %-8.2f\n",2.57894);
	printf("value : %-8.1s\n\n","EDM");

return 0;
}