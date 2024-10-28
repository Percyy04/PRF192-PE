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
	int flag =0 ;
 	for ( i = 0 ; i < n ; i++ ){
		if ( a[i] == x ){
			printf("Index: %d\n", i );
			flag = 1;
		}	
	}
	if(flag==0)
		printf("%d khong co trong mang", x);
}
