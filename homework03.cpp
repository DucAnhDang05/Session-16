#include <stdio.h>
int main() {
    FILE *file;
    int n, i;
    char content[100];
    printf("Nhap so dong: ");
    scanf("%d", &n);
    file = fopen("bt03.txt", "w");
    if (file == NULL) {
        printf("Không the mo file.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Nhap noi dung dong %d: ", i + 1);
        scanf(" %s", content);
        fprintf(file, "%s\n", content);
    }
    fclose(file);
    file = fopen("bt3.txt", "r");
    printf("\nNoi dung file:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);
    return 0;
}
