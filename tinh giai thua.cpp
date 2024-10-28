#include<stdio.h>

int main (){
	int n , s = 1 ;
	scanf("%d", &n);
	int i ;
	for ( i=1 ; i<=n ; i++)
		s = s*i ;
	printf("%d", s);
}
