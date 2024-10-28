#include<stdio.h>

int main(){
	int n ;
	int i ;
	int sum =0  ;
	printf("Nhap N : ");
	scanf("%d", &n);
	for(i=0 ; i<=n ; i+= 2){
		sum += n-i ;
		
	}
	printf("%d", sum) ;
	return 0 ;
}
