#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[1000]; 
    int count = 0;
    printf("Nhap vao mot chuoi: ");
    gets(chuoi); 
    char *token = strtok(chuoi, " ");
    while (token != NULL) {
        if (strcmp(token, "Binh") == 0 || strcmp(token, "binh") == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }   
    printf("So lan xuat hien cua 'Binh' hoac 'binh' la: %d\n", dem) ;
    return 0;
}

