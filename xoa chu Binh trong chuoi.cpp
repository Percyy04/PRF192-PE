#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	char* p ;
	gets(s) ;
	
	p = strstr(s,"Binh") ;
	while(p!=NULL){
		strcpy(p, p+4) ;
		p = strstr(s,"Binh") ;
	}
	puts(s) ;
	return 0 ;
}

