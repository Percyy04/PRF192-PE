#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){
	char c[1000] ;
	gets(c) ;
	int cnt[256] = {0} ;
	int i ;
	for ( i=0 ; i < strlen(c) ; i++){
		cnt[c[i]]++ ;
	}
	int res = 0 ;
	char kt ;
	for( i = 0 ; i < 256 ; i++){
		if(cnt[i]){
			if(cnt[i] >= res){
				res = cnt[i];
				kt = (char)(i);
			}
		}
	}
	printf("%c", kt) ;
}
