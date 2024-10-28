#include <stdio.h>

int findMin(int arr[], int n) {
    int min = arr[0];
    int i; 
    for ( i = 1; i < n; i++) {
        if (arr[i] < min ) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
	int a[100];
	int n , i , x ;
	int flag = 0 ;
	printf("Nhap N : ") ;
	scanf("%d", &n);
	
	
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}

    int max = findMin(a, n);

    printf("The min number in the array is: %d\n", max);

    return 0;
}

