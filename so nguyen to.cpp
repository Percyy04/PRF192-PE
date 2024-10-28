#include<stdio.h>

int Isprime(int n){
	if(n <= 1){
		return 0;
	}
	int i ;
	for ( i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
			return 1;

}


int main(){
	int n ;
	do {
	scanf("%d", &n); }
	while (n<0) ;
	
	if (Isprime(n))
		printf("N is prime number");
	else 
		printf("N is not prime number");
	return 0 ;
}
