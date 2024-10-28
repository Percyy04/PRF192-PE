#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(int argc, char *argv[]) {
	char a[MAX],count=0;
	//input
	gets(a);
	
	//in ra chuoi dao nguoc
	int n = strlen(a);
	for(int i=n-1; i>=0;i--)
		printf("%c",a[i]);
	return 0;
}

