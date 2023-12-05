#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = NULL;
    char string01[100];
    char string03[100];
    char string[200];
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Không the mo file bt01.txt.\n");
        return 1;
    }
    fread(string01, 1, sizeof(string01), file);
    string01[sizeof(string01) - 1] = '\0';
    fclose(file);
    file = fopen("bt03.txt", "r");
    if (file == NULL) {
        printf("Không the mo file bt03.txt.\n");;
        return 1;
    }
    fread(string03, 1, sizeof(string03), file);
    string03[sizeof(string03) - 1] = '\0';
    fclose(file);
    strcpy(string, string01);
    strcat(string,"\n");
    strcat(string, string03);
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Không the mo file bt05.txt.\n");
        return 1;
    }
    fwrite(string, 1, strlen(string), file);
    fclose(file);
    printf("Noi dung file bt05:\n%s\n", string);
    return 0;
}
