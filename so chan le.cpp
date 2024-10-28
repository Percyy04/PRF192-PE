#include<stdio.h>

int main(){
	int n ;
	int i ;
	int odd , even ;
	printf("Nhap N : ");
	scanf("%d", &n);
	for(i=1 ; i<=n ; i++){
		if( i%2 != 0)
			odd += i ;
		else 
			even += i ;	
	}
	printf("%d %d", odd, even);
	return 0 ;
}
