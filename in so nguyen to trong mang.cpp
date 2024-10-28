#include<stdio.h>

int prime(int n){
	int i;
	if (n<2) 
		return 0 ;
	for( i =2; i*i <= n; i++){
		if(n % i == 0)
		return 0;
	} 
	return n>1;
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
	for( i = 0; i < n; i++){
		if(prime(a[i])){
	
			printf("%d ", a[i]);
		}
	}

return 0 ;
}
