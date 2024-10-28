#include<stdio.h>
int main (){
	int n , b ;
	int sum = 0 ;
	scanf("%d", &n) ;
	b = n ;
	while(b!=0){
		sum += b%10 ;
		b /= 10 ;
	}
	printf("%d", sum); 
}
