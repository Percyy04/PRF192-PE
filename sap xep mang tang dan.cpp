#include <stdio.h>
int t ;
void sortAscending(int a[], int n){
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                t = a[i];
                a[i] = a[j];
                a[j] = t;        
            }
        }
    }
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
	sortAscending(a,n);
	printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
	}
}
