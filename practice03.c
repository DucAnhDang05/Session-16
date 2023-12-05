#include <stdio.h>
#include <stdlib.h>

int main() {
    const int max_size = 100;
    char string[max_size];
    FILE *file = NULL;

    file = fopen("practice01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo tap tin.\n");
        return 1;
    }
    fgets(string, max_size, file);
    printf("%s", string);
    fclose(file);
    return 0;
}
