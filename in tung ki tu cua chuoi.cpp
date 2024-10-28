#include<stdio.h>
#include<string.h>

int main(){
	char a[100] ;
	int i ;
	gets(a) ;
	int n  = strlen(a) ;
	for(i=0 ; i <= n ; i ++)
		printf("%c ", a[i]);
	return 0 ;
} 
