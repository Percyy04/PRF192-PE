#include <stdio.h>
#include <stdlib.h>
//Viet chuong trinh in ra so le nho hon hoac bang n.
int main(int argc, char *argv[]) {	
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n ;i++)
		if(i%2!=0)
			printf("%d ",i);
		
	return 0;
}
