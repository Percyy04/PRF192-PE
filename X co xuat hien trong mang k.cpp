#include<stdio.h>

int main(){
	int a[100];
	int n , i , x ;
	int flag = 0 ;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	printf("\nNhap X : ") ;
	scanf("%d", &x);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}

 	for ( i = 0 ; i < n ; i++ ){
		if (a[i] == x) {
            flag = 1;
            break;
		}
	}
	
	
	 if (flag) {
        printf("%d co xuat hien trong mang.\n", x);
    } else {
        printf("%d khong co xuat hien trong mang.\n", x);
    }

	return 0 ;
}
