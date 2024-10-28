#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	gets(a) ;
	int n = strlen(a);
	int i , count = 0 ;
	for(i=0 ; i<n;i++)
		if(a[i]=='B')
			count++;
	printf("%d", count);
	return 0 ;
}
