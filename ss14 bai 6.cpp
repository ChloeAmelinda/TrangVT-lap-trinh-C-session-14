#include <stdio.h>

int main() {
    char c[1000];
    int dem = 0;
    printf("Nhap chuoi ky tu bat ky: ");
    fgets(c, sizeof(c), stdin); 
    for (int i = 0; c[i] != '\0'; i++) {
        if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')) {
            dem++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", dem);
    return 0;
}
