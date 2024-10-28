#include <stdio.h>
#include <stdlib.h>
//2.6
int main(int argc, char *argv[]) {	 
  	int x, total=0;
  	scanf("%d",&x);
  	total += x;
  	
  	while(x!=0){
  		scanf("%d",&x);
  		total += x;
	}
	printf("Total = %d",total);
	return 0;
}
