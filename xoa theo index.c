#include<stdio.h>

int deleteIndex(int a[], int*n){
	int k ;
	printf("Enter index : ");
	scanf("%d", &k);
	int i ;
	for ( i = k+1; i < *n ; i++ )
		a[i-1] = a[i];
	(*n)-- ;	
}
void xuatmang(int a[], int n) {
    int i;
    for (i = 0; i < n ; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[100];
	int n , i ;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
    deleteIndex(a, &n);
    xuatmang(a, n);
    return 0;
}
