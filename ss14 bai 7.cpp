#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int dem=0;
	int so=0;
	int special=0;
	printf("Nhap chuoi ky tu bat ky : ");
	fgets(str,100,stdin);
	for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            dem++;  
        } else if (str[i] >= '0' && str[i] <= '9') {
            so++;
        } else if (str[i] != '\n') {  
            special++;
 		}
 }
    printf("So ky tu la chu cai trong chuoi: %d\n", dem);
    printf("So ky tu la so trong chuoi: %d\n", so);
    printf("So ky tu dac biet la: %d\n",special);
	return 0;
}
