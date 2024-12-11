#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	printf("Nhap xau ky tu :");
	scanf("%s",&c);
	gets(c);
	printf("Ky tu vua nhap la: %s\t",c);
	printf("do dai : %d\n",strlen(c));
	return 0;
	
}
