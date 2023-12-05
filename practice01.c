#include <stdio.h>
#include <stdlib.h>

int main() {
	char string[50];
    FILE *file = NULL;
    file = fopen("practice01.txt", "w");
    if (file != NULL) {
    	printf("Nhap vao chuoi bat ky: ");
    	scanf("%s",string);
        fprintf(file,"chuoi vua nhap: %s",string);
        fclose(file);
    }
    
    return 0;
}
