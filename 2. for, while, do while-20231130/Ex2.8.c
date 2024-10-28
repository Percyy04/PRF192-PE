#include <stdio.h>
#include <stdlib.h>
//2.8: Kiem tra n co phai la so hoan hao
int main(int argc, char *argv[]) {	 
  	int n, sum=0;
  	printf("Enter n: ");
  	scanf("%d",&n);
  	for(int i=1; i<n; i++)
  		if(n%i==0){ 
  			printf("%d ",i);// i la uoc so cua n
  			sum += i;
		}
	if(n==sum)
	  	printf("\n%d is perfect number.",n);
	else
		printf("\n%d isn't perfect number.",n);	
	return 0;
}
