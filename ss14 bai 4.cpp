#include <stdio.h>
#include <string.h>

int main() {
    char c[1000];
    char kytu;
    int dem = 0;

    printf("Nhap chuoi ky tu bat ky: ");
    scanf("%s", c);

    printf("Nhap ky tu muon tim: ");
    scanf(" %c", &kytu); 
    int n = strlen(c);
    for (int i = 0; i < n; i++) {
        if (c[i] == kytu) {
            dem++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan.\n", kytu, dem);
    return 0;
}
