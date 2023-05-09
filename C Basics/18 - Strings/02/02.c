#include<stdio.h>
int main(){
    char name[50]={'E','D','M',' ','W','o','r','l','d','\0'};
    printf("\nWelcome To The %s\n\n",name);

    int i;
    for(i=0;name[i]!='\0';i++){
        printf("name[%d] = %c\n",i,name[i]);
    }
    return 0;
}