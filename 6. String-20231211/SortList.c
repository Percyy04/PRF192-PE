#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int n;
	char danhsach[30][51];
	printf("How many names: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter name %d: ",i);
		fflush(stdin);
		gets(danhsach[i]);
	}
	for(int i=0;i<n;i++){		
		puts(danhsach[i]);
	}
	printf("Sap xep:\n");
	char t[31];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
			if(strcmp(danhsach[i],danhsach[j])>0){
				strcpy(t,danhsach[i]);
				strcpy(danhsach[i],danhsach[j]);
				strcpy(danhsach[j],t);
			}				
				
	}
	for(int i=0;i<n;i++){		
		puts(danhsach[i]);
	}
	return 0;
}


