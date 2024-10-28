#include <stdio.h>
#include <stdlib.h>
//15 so le thi xuong dong
int main(int argc, char *argv[]) {	
	int n,count=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n ;i++){	
		if(i%2!=0){
			printf("%d ",i);
			count++;
		}
		if(count%15==0)
			printf("\n");
	}
		
	return 0;
}
