#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(int argc, char *argv[]) {
	char a[MAX],count=0;
	//input
	gets(a);
	//Dem so ky tu 'B'
	int n = strlen(a);
	for(int i=0; i<n;i++)
		if(a[i]=='B')
			count++;
	
	printf("%d",count);
	return 0;
}

