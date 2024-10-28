#include<stdio.h>
#include<string.h>

int main(){
	char s[1000];
	char* p ;
	gets(s) ;
	int cnt = 0 ;
	p = strstr(s,"Binh") ;
	while(p!=NULL){
		cnt++ ;
		strcpy(p, p+4) ;
		p = strstr(s,"Binh") ;
	}
	p = strstr(s,"binh") ;
	while(p!=NULL){
		cnt ++ ;
		strcpy(p, p+4) ;
		p = strstr(s,"binh") ;
	}
	printf("%d", cnt) ;
	return 0 ;
}

