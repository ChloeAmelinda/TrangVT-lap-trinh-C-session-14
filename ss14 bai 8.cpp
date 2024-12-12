#include <string.h>
#include <ctype.h>
#include<stdio.h>

int main(){
	char str[50];
	printf("Moi ban nhap : ");
	fgets(str, 50, stdin);
	for(int i = 0; i < strlen(str); i++){
		str[0] = toupper(str[0]);
		if(str[i] == ' '){
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	printf("\nBan da nhap : ");
	fputs(str, stdout);
	return 0;
}
