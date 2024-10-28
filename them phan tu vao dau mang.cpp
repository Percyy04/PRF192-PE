#include<stdio.h>

int main(){
	int a[100];
	int n , i ;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(int i = n-1 ; i >= 0 ; i--)
		a[i+1]= a[i] ;
	
	printf("Add first :") ;
	scanf("%d", &a[0]);
		n++ ;
	
	for(i=0 ;i < n ; i ++){
		printf("%d ", a[i] ) ;
	}
	
	return 0 ;
}
