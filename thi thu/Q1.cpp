/*The given file Q1.cpp already contains statements to input data for 3 variables a, b and c.
You should write statements so that print out the average of three numbers.*/


#include <stdio.h>
#include <stdlib.h>
double average(int a, int b, int c){
	double r;
	//Write your statements here
		r = (double)(a+b+c)/3 ;
	
	//End your statements 
	return r ;
}
int main()
{
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int a, b, c;
  double r;
  printf("Enter a = "); scanf("%d",&a);
  printf("Enter b = "); scanf("%d",&b);
  printf("Enter c = "); scanf("%d",&c);   
  r = average(a,b,c); 
  printf("\nOUTPUT:\n");
  printf("%.2lf",r); 
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}
