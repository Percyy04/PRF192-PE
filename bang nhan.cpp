#include<stdio.h>

int main(){
	int i , j ;
	int l , h ;
	printf("Enter low :") ; scanf("%d", &l);
	printf("Enter hight :") ; scanf("%d", &h);
	printf("     ");
	
	for( j = l ; j <= h ; j++ )
		printf("%5d", j );
	printf("\n");
	for( i = l ; i <= h ; i++ ){
		printf("%5d", i );
		for(j=l ; j<=h ; j++)
			printf("%5d", i*j);
		printf("\n");
	}
	return 0 ;
}

