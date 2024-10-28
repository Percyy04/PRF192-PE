#include <stdio.h>
#include <stdlib.h>
//Tinh phuong trinh bac nhat ax + b = 0
int main(int argc, char *argv[]) {	
	int a,b;
	printf("He so a: ");
	scanf("%d",&a);
	printf("He so b: ");
	scanf("%d",&b);
	
	if(a==0)
		if(b==0)
			printf("Phuong trinh vo so nghiem.");
		else
			printf("Phuong trinh vo nghiem.");
	else
		printf("x = %f",(float)-b/a);
	
	return 0;
}
