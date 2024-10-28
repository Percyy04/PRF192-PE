#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
	int x , i;
	int y , total , count ;
	srand(time(NULL));
	printf("Dice Thrower \n=======\nTotal soght :");
	scanf("%d", &total) ;
	
	
	do{
		y = rand()%6 + 1 ;
		x = rand()%6 +1 ;
		printf("Result of throw  %d : %d + %d \n", ++count, x,y);
		i=0 ;
		while (i<500000) ;
			i++ ;
	}while(x+y != total);
	
	printf("you got total in %d throws !", count);
	

}
