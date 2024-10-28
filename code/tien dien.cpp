#include<stdio.h>
int main (){
	double n ;
	double thanhtien ;
	scanf("%lf", &n);
	if (n<=50){
		thanhtien = n*1.678 ;
	}
	else if (50<n<=100){
		thanhtien = ((n-50)*1.734) + (50*1.678);
	}
	else if (100<n<=200){
		thanhtien = ((n-100)*2.014) + (50*1.734) + (50*1.678);
	}
	else if (200<n<=300){
		thanhtien = (100*2.536) + (100*2.014) + (50*1.734) + (50*1.678);
	}
	else if (300<n<=400){
		thanhtien = (100*2.834) + (100*2.536) + (100*2.014) + (50*1.734) + (50*1.678); 
	}
	else if (400<n){
		thanhtien = (n-400)*2.927 + (100*2.834) + (100*2.536) + (100*2.014) + (50*1.734) + (50*1.678); 
	}
	printf("%lf", thanhtien) ;
}
