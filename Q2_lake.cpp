#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//15
//5 2 9 -3 0 -6 -2 1 28 3 18 1 5 2 



void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void selectionSort_upper(int a[], int n){ // tang dan
	int i;
	for(i = 0 ; i < n - 1 ; i++){
		int min_pos = i;
		int j;
		for(j = i + 1 ; j < n ; j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int i;
	int a[n];
	for(i = 0 ; i < n ; i++){
		scanf("%d" , &a[i]);
	}
	
	selectionSort_upper(a,n); // 1 2 5 1 2
							  // 1 1 2 2 5
	if(a[0] == a[1]){
		printf("-1");
	}
	else{
		printf("%d", a[0]);
	}
}
	

