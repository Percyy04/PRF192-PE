//5.	Vi?t ch??ng tr�nh cho ph�p nh?p n s? v�o m?ng, nh?p x, in ra c�c s? c� trong m?ng m� l?n h?n x.
#include<stdio.h>

int main(){
	int a[100];
	int n , i , x ;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	printf("\nNhap X : ") ;
	scanf("%d", &x);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for ( i = 0 ; i < n ; i++ ){
		while ( a[i] = x ){
			printf("%d ", i ) ;
		}
		break ;
	}
}
