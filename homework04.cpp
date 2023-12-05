#include<stdio.h>
int main(){
	char content[50];
	FILE *file=NULL;
	int line_count=0;
	file=fopen("bt03.txt","r");
	if(file==NULL){
		printf("khong doc duoc");
	}
	printf("Noi dung file: \n");
	while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
        line_count++;
    }
    printf("So dong trong tep la: %d",line_count);
	fclose(file);
	return 0;
}
