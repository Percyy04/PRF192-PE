#include<stdio.h>
#include<math.h>

int calculate(double a, double b , double c){
	
	double denta , n1 , n2 ;
	denta = (b*b) - (4*a*c);
	
	if(denta<0)
		printf("Phuong trinh vo nghiem");
	if (denta==0){
		n1 = -b / (2 * a);
		printf("Phuong trinh co nghiem kep x1 = x2 = %lf", n1 );
	}
	if (denta>0){
		n1 = (-b + sqrt(denta)) / (2 * a);
        n2 = (-b - sqrt(denta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem phan biet:\n");
		printf("x1 = %lf\n", n1);
		printf("x2 = %lf\n", n2);

}
}
int main(){
	double a , b , c ;
	
	printf("Nhap 3 so a b c : ");
	scanf("%lf %lf %lf", &a,&b,&c);
	
	calculate(a,b,c);
}
