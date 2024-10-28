#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {	
	int a,b,c;
	printf("Nhap vao 3 canh: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a+b>c) && (a+c>b) && (b+c>a)){		
		if(a==b && b==c)
			printf("La tam giac deu.");
	}
	else
		printf("Khong phai tam giac deu.");
	return 0;
}
