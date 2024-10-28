#include <stdio.h>
#include <stdlib.h>
//Viet chuong trinh in ra tong cac so le nho hon hoac bang n.
int main(int argc, char *argv[]) {	
	int n,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n ;i++)
		if(i%2!=0){
			printf("%d ",i);
			sum = sum + i;
		}
	printf("\nSum = %d",sum);	
		
	return 0;
}
