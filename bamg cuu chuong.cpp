#include<stdio.h>
#include<math.h>

int main(){
	int n ;
	do {
	scanf("%d", &n); }
	while (n<0) ;
	int i ;
	for ( i=1 ; i<=10 ; i++){
		printf("\n%d x %d = %d", n,i,n*i);
	}
}
