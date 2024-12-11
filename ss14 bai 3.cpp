#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	printf("Nhap ky tu bat ky :");
	scanf("%s",c);
	int n = strlen(c);
	// dao nguoc  
	for(int i=0; i<n/2 ; i++){
		char temp = c[i];
		c[i]=c[n-i-1];
		c[n-i-1]=temp;
	}
	printf ("Mang sau khi dao nguoc la :%s\n",c);
	
	 
	return 0;
}
