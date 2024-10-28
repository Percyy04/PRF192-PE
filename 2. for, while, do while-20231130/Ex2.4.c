#include <stdio.h>
#include <stdlib.h>
//In ra toan bo bang ma ASCII
int main(int argc, char *argv[]) {		
	
	for(int i=0; i<128 ;i++)	
		printf("%c  %d  %x\n",i,i,i);
				
	return 0;
}
