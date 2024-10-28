#include<stdio.h>
int main(){
	int a,b,x ;
	scanf("%d %d", &a , &b);
	if (a==0){
		if ( b==0 ) printf("VSN");
		else printf("VN") ;	
	}
	else {
		printf("x= %f", (float)(-b)/a) ;
	}
} 
