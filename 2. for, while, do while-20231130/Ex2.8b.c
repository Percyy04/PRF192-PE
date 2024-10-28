#include <stdio.h>
#include <stdlib.h>
//2.8 Trong 1000 so, in ra cac so hoan hao
int main(int argc, char *argv[]) {
	int n,sum;

	for(int n=1; n<=1000; n++){	
		sum=0;
		for(int i=1; i<n; i++)
			if(n%i==0){
				//printf("%d ",i);
				sum += i;
			}
		//printf("\nSum = %d",sum);
		if(n==sum)
			printf("\n%d is perfect number.",n);
	}	
			
	return 0;
}
