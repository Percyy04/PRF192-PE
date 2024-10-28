#include<stdio.h>

int isPerfect(int num) {
    int sum = 0;
    int i ; 
    for ( i = 1; i <= num/2 ; i++) {
        if (num % i == 0) {
            sum += i;
        
        }
    }
    return sum == num;
}

int main(){
	int n ;
	scanf("%d", &n);
	printf("Perfect number less than %d", n);
	int i ; 
    for ( i = 1; i <= n; i++) {
        if (isPerfect(i)) {
            printf("\n%d", i);
	}
	}
}
