#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int isPalindrome(char a[]){
	int n = strlen(a);
	int i ;
	for( i = 0; i<n/2; i++)
		if(a[i]!= a[n-1-i])
			return 0;
	return 1;
}
int main(int argc, char *argv[]) {
	char a[MAX],count=0;
	//input
	gets(a);
	//Kiem tra chuoi co doi xung?
	if(isPalindrome(a))
		printf("Doi xung");
	else
		printf("Khong doi xung");
	
	return 0;
}

