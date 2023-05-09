#include<stdio.h>
int main(){
    char name[50]="EDM World";
    printf("\nWelcome To The %s\n\n",name);

    int i;
    for(i=0;name[i]!='\0';i++){
        printf("name[%d] = %c\n",i,name[i]);
    }
    return 0;
}