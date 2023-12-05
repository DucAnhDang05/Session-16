#include<stdio.h>
#include<stdlib.h>
int main(){
	char string[50];
	FILE *file=NULL;
	file = fopen("bt01.txt","r");
	fread(string,1,sizeof(string),file);
	printf("Du lieu doc tu tep tin: %s",string);
	fclose(file);
	return 0;
}
