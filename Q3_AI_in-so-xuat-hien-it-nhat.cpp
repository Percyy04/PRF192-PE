#include <stdio.h>
#include <math.h>
#include <string.h>

/*
7
2 3 2 3 3 4 9

9
2 3 2 3 5 2 3 2 5
*/

void count_phantu(int a[],int n){   // phan tu duoc xuat hien it nhat
	int count[30000] = {0};
	int i;
	for(i = 0 ; i < n ; i++){
		count[a[i]]++;				// count so lan xuat hien cua cac phan tu trong mang
	}
	
 	int res = n + 1;
    	for ( i = 0; i < n; i++) {
       		if (count[a[i]] < res) {		// so lan xuat hien it nhat  = res
            res = count[a[i]];
        }
    }
	
	
	int last = -1; 
												// in ra so xuat hien it nhat cuoi cung
    for (i = n - 1; i >= 0; i--) {
        if (count[a[i]] == res) {
            last = a[i];
            break; 
        }
    }
	if (last != -1) {
        printf("%d\n", last);
    }
    else{
    	printf("-1");
	}
}


int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i = 0 ; i < n ; i ++){
		scanf("%d", &a[i]);
	}
	count_phantu(a,n);
	
}
