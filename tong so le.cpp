#include<stdio.h>

int main(){
	int i ;
	int n , sum = 0 ;
	scanf("%d", &n);
	for (i=0 ; i<=n ; i++){
	
		if ( i%2 !=0 ){
		
			printf("%d ", i) ;
			sum += i ;	}
		}	
	printf("\n %d", sum );	
}
