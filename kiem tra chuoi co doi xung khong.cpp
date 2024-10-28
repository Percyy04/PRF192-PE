#include<stdio.h>
#include<string.h>

int isPalindrome(char a[]){
	int i ;
	int n = strlen(a);
	for(i=0 ; i < n/2 ; i ++){
		if( a[i] != a[n-1-i])
			return 0 ;
	}
	return 1 ;
	
}

int main(){
	char a[100];
	gets(a) ;
	if(isPalindrome(a))
		printf("Doi xung") ;
	else
		printf("Khong doi xung") ;
	return 0 ;
}
