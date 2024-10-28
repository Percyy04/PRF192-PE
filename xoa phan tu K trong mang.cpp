#include <stdio.h>

void xoaphantu(int *a, int *n, int p) {
	int i; 
    for ( i = p ; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

int main(){
	int a[100];
	int n , i ;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
    int p;
    printf("Nhap vi tri phan tu can xoa : ") ;
    scanf("%d", &p);
    xoaphantu(a, &n, p);
    for ( i = 0; i < n; i++) {
    	printf("a[%d]: %d\n",i,a[i] );
    }
    return 0;
}
