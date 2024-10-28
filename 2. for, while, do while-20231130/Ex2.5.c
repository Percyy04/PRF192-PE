#include <stdio.h>
#include <stdlib.h>
//In ra bang ma ASCII tu c1 den c2
int main(int argc, char *argv[]) {	
	char c1,c2,tmp;
	printf("Enter first character: ");
	scanf("%c",&c1);
	fflush(stdin);
	printf("Enter second character: ");
	scanf("%c",&c2);
	if(c1>c2){
		tmp = c1;
		c1 = c2;
		c2 = tmp;
	}	
	int i ; 
	for( i=c1; i<=c2 ;i++)	
		printf("%c  %d  %x\n",i,i,i);
				
	return 0;
}
