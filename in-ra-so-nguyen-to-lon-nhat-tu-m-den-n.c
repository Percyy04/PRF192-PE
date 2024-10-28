#include <stdio.h>
#include <stdlib.h>

// Function to check whether n is prime or not
int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }
    int i ;
    for ( i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int findMaxPrimeN2M(int n, int m) {
    int maxPrime = -1;
    int start, end;
    if (m >= n) {
        start = n;
        end = m;
    } else {
        start = m;
        end = n;
    }
	int i ; 
    for ( i = end; i >= start; i--) {
        if (isPrime(i)) {
            maxPrime = i;
            break; 
        }
    }

    return maxPrime;
}


int main() {
    system("cls");
    printf("\nTEST Q4 (3 marks):\n");
    int n, m, max;
    printf("Enter n = "); scanf("%d", &n);
    printf("Enter m = "); scanf("%d", &m);
    max = findMaxPrimeN2M(n, m);
    printf("\nOUTPUT:\n");
    printf("%d\n", max);
    system("pause");
    return 0;
}
