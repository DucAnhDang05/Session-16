#include <stdio.h>
#include <stdlib.h>

int main() {
	char string[50];
    FILE *file = NULL;
    file = fopen("practice01.txt", "r");
    int nowString=0;
    if (file != NULL) {
		do{
			nowString=fgetc(file);
			printf("%c",nowString);
		}while(nowString!=EOF);
        fclose(file);
    }
    return 0;
}
