#include <stdio.h>
#include <stdlib.h>

typedef struct sinhVien {
    char name[100];
    int age;
    char number[12];
    char email[50];
} sv;

void printMenu() {
    printf("Menu\n");
    printf("1. Nhap thong tin\n");
    printf("2. In thong tin\n");
    printf("3. Thoat\n");
    printf("Lua chon cua ban la: ");
}

void luu_thong_tin(sv *dsSinhVien, int n) {
    FILE *file;
    file = fopen("C:\\Users\\ADMIN\\Desktop\\C\\Session 16\\student.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        fprintf(file, "Ten: %s, Tuoi: %d, So dien thoai: %s, Email: %s\n", dsSinhVien[i].name, dsSinhVien[i].age, dsSinhVien[i].number, dsSinhVien[i].email);
    }
    fclose(file);
}

void nhap_thong_tin(sv *dsSinhVien, int *n) {
    printf("Nhap ten: ");
    scanf("%s", dsSinhVien[*n].name);
    printf("Nhap tuoi: ");
    scanf("%d", &dsSinhVien[*n].age);
    printf("Nhap so dien thoai: ");
    scanf("%s", dsSinhVien[*n].number);
    printf("Nhap email: ");
    scanf("%s", dsSinhVien[*n].email);
    (*n)++;
    printf("\n");
    
    luu_thong_tin(dsSinhVien, *n);
}

void in_thong_tin(sv *dsSinhVien, int *n) {
    FILE *file;
    file = fopen("C:\\Users\\ADMIN\\Desktop\\C\\Session 16\\student.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return;
    }
    for (int i = 0; i < *n; i++) {
        char buffer[50];
		while (fgets(buffer, sizeof(buffer), file) != NULL) {
    	printf("%s", buffer);
		}
    }
    
    fclose(file);
}

int main() {
    sv dsSinhVien[1000];
    int n = 0;
    int choice;
    
    do {
        printMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                nhap_thong_tin(dsSinhVien, &n);
                break;
            case 2:
                in_thong_tin(dsSinhVien, &n);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Khong hop le");
                break;
        }
    } while (1);
}
