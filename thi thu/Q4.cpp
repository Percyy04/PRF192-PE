/*The given file Q4.cpp already contains statements to input data for 1D-array named a
You should write statements so that print out all even elements of array a.*/


#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//--------------------------------------
void print(int a[],int n) {
   //Write your statements here

	int i ;
	for( i = 0 ; i < n ; i++){
		if ( a[i] % 2 == 0 ){
			printf("%d ", a[i]);
		}
	}

	//End your codes
}
//--------------------------------------
int main() {
	//====DO NOT ADD NEW OR CHANGE THIS STATEMENTS
	system("cls");
	printf("\nTEST Q4 (3 marks):\n");
	int n, i, sum;
	int a[MAX];
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT:\n");
	print(a,n);
	printf("\n");
	system ("pause");
	return(0);
	//==========================================
}


