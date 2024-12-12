#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Moi ban nhap : ");
    fgets(str, 50, stdin);

    char check;
    printf("Ban muon xoa ki tu nao : ");
    scanf("%c", &check);

    int n = strlen(str);
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] != check) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 

    printf("Chuoi sau khi xoa ki tu theo yeu cau : %s\n", str);
    return 0;
}
