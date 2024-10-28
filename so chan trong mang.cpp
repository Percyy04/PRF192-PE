#include<stdio.h>

int checkEven(int a[],int n) {

	int i ;
	for( i = 0 ; i < n ; i++){
		if ( a[i] % 2 == 0 ){
			printf("%d ", a[i]);
		}
	}

}


int main(){
	int a[100];
	int n , i , sum ;
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	checkEven(a,n);
	
}
