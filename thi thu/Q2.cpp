/*The given file Q2.cpp already contains statements to input a variable n. 
You should write statements so that sum all numbers from 1 to n*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  //==============DO NOT CHANGE THIS STATEMENTS=================
  system("cls");
  printf("\nTEST Q2 (2 marks):\n");
  int n,sum,i;
  printf("Enter n = "); scanf("%d",&n); 
  //============================================================
  
    
  // Write your statements here
  sum = 0;
  	for(i=1; i<=n ; i++){
  		sum += i ;
	  }
  
  // End your codes  
  
  
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  printf("%d",sum); 
  printf("\n");
  system ("pause");
  return(0);
}
