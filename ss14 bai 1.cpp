#include<stdio.h>
#include<string.h>
int main(){
	char c[50];
		printf("Moi ban nhap vao chuoi ki tu:");
		fgets(c,50,stdin);
		printf("Ky tu vua nhap la:%s",c);
		printf("Do dai : %d\n",strlen(c));
	return 0;
	
}
