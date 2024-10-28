#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(int argc, char *argv[]) {
	char a[MAX],count=0;
	//input
	gets(a);
	
	//in ra chuoi dao nguoc
	puts(strrev(a));
	return 0;
}

