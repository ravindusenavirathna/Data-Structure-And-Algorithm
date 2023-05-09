#include <stdio.h>

int main(){

	printf("%d\n",0&&0);
	printf("%d\n",0&&1);
	printf("%d\n",0&&44);
	printf("%d\n",1&&1);
	printf("%d\n\n",45&&44);

	printf("%d\n",0||0);
	printf("%d\n",0||1);
	printf("%d\n",0||44);
	printf("%d\n",1||1);
	printf("%d\n\n",45||44);

	printf("%d\n",!0);
	printf("%d\n",!1);
	printf("%d\n",!44);

return 0;
}