#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	char* p ;
	gets(s) ;
	char t[100] ;
	gets(t);
	p = strstr(s,t) ;
	while(p!=NULL){
		strcpy(p, p+strlen(t)) ;
		p = strstr(s,t) ;
	}
	puts(s) ;
	return 0 ;
}

