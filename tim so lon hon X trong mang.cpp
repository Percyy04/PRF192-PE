//5.	Vi?t ch??ng trình cho phép nh?p n s? vào m?ng, nh?p x, in ra các s? có trong m?ng mà l?n h?n x.
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
