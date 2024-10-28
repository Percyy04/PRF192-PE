#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	char * p ;
	p = strstr(a,"B");
	while(p!= NULL){
		strcpy(p,p+1);
		p = strstr(a,"B");
	}
	p = strstr(a,"b");
	while(p!= NULL){
		strcpy(p,p+1);
		p = strstr(a,"b");
	}
	//chuoi sau khi xoa
	puts(a);
	return 0;
}

