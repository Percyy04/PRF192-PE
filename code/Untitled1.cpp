#include<stdio.h>

int maxx(int a, int b, int c){
	int max= a ;
	if (b>max) {
	max = b; 
	}
	if (c>max){
	 max = c ;
}
	return max ;
}
	

int main(){
	int a,b,c ;
	scanf("%d %d %d",&a,&b,&c);
	int max = maxx(a,b,c) ;
	printf("%d", max);
	return 0 ;
}
