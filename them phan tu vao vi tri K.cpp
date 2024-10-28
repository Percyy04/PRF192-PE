#include<stdio.h>

int main(){
	int a[100];
	int n , i , k;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Nhap k :");
	scanf("%d", &k) ;
	for(int i = n-1 ; i >= k ; i--)
		a[i+1]= a[i] ;
	
	printf("Add index :") ;
	scanf("%d", &a[k]);
		n++ ;
	
	for(i=0 ;i < n ; i ++){
		printf("%d ", a[i] ) ;
	}
	
	return 0 ;
}
