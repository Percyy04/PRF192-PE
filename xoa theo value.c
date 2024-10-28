#include<stdio.h>

int main (){
	int a[100];
	int n , i ;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int p;
    printf("Nhap gia tri phan tu can xoa : ") ;
    scanf("%d", &p);
    int j ;
    for( i = 0;  i<n ; i++)
    	if( a[i]== p ){
    		for(j = i+1 ; j < n ; j++)
    			a[j-1] = a[i] ;
    		n-- ;
		}
	
    
    for ( i=0 ; i < n ; i++ )
    	printf("%d", a[i]);
    return 0 ;
}
