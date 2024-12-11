#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	int count=0;
	int n=strlen(c);
	
	printf("Nhap chuoi bat ky :");
	fgets(c, sizeof(c), stdin);
	for(int i=0; i<n ; i++){
		 if ((i == 0 || c[i - 1] == ' ') && c[i] != ' '){
			count++;
		}
	}
	printf("So tu la : %d",count+1);
	return 0;
}
