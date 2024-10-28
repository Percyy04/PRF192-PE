#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(int argc, char *argv[]) {
	char a[MAX],b[MAX];
	char* p;
	//nhap chuoi
	printf("Enter a string: ");
	gets(a);
	printf("Enter a substring: ");
	gets(b);
	int m = strlen(b);
	
	//xoa tat ca chuoi con
	p = strstr(a,b);
	while(p!=NULL){
		strcpy(p,p+m);
		p = strstr(a,b);
	}
	//chuoi sau khi xoa
	puts(a);
	return 0;
}

