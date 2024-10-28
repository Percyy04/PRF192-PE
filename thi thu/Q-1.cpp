#include<stdio.h>

int main(){
	int a,b,c,d ;
	double f1, f2 ;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	f1 = (double)(a/b);
	f2 = (double)(c/d);
	
	if (f1 == f2 )
		printf("the same");
	else 
		printf("difference");
	return 0 ;
}
