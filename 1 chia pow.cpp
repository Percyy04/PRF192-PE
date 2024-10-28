#include<stdio.h>
#include<math.h>

int main(){
	int n ;
	int i ;
	double sum = 1  ;
	printf("Nhap N : ");
	scanf("%d", &n);
	for(i=0 ; i<=n ; i++){
		sum += 1 / pow(i,i-1) ;
	}
	printf("%lf", sum) ;
	return 0 ;
}
