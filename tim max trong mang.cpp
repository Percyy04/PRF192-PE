#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    int i; 
    for ( i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
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

    int max = findMax(a, n);

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}

