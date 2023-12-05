#include<stdio.h>
#include<stdlib.h>
int main(){
	char string[100];
	FILE *file=NULL;
	file = fopen("bt01.txt","w");
	if (file != NULL) {
    	printf("Nhap vao ky tu bat ky: ");
    	scanf("%s",string);
        fprintf(file," %s",string);
        fclose(file);
    }
    return 0;
}
