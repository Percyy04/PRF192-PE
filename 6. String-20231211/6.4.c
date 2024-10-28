#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(int argc, char *argv[]) {
	char a[MAX];
	char* p;
	//nhap chuoi
	printf("Enter a string:\n");
	gets(a);
	
	//xoa ky tu 'B'
	p = strstr(a,"B");
	while(p!=NULL){
		strcpy(p,p+1);
		p = strstr(a,"B");
	}
	//chuoi sau khi xoa
	puts(a);
	return 0;
}

