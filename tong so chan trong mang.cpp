#include<stdio.h>

int checkEven(int a[],int n) {

	int i ;
	int sum = 0 ;
	for( i = 0 ; i < n ; i++){
		if ( a[i] % 2 == 0 ){
			sum += a[i] ;
		}
	}
	return sum ;
}


int main(){
	int a[100];
	int n , i ;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	

	printf("%d", checkEven(a,n));
}
