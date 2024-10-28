#include <stdio.h>
#include <stdlib.h>
void deleteIndex(int a[], int* n) {
	int k;
	printf("Enter index: ");
	scanf("%d",&k);

	for(int i=k+1; i<(*n); i++)
		a[i-1]=a[i];
	(*n)--;
}
void deleteValue(int a[], int* n) {
	int x;
	printf("Enter value: ");
	scanf("%d",&x);

	for(int i=0; i<(*n); i++)
		if(a[i]==x) {
			for(int j=i+1; j<(*n); j++)
				a[j-1]=a[j];
			(*n)--;
			i--;
		}
}
void output(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
}
int main(int argc, char *argv[]) {
	int a[100]= {5,4,4,-3,4,8},n=6, choice;
	do {

		printf("\n===== Menu =====\n");
		printf("1.\n");
		printf("2.\n");
		printf("3.Delete index\n");
		printf("4.Delete value\n");
		printf("5.\n");
		printf("6.\n");
		printf("0.Quit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				break;
			case 2:
				break;
			case 3:
				deleteIndex(a,&n);
				output(a,n);
				break;
			case 4:
				deleteValue(a,&n);
				output(a,n);
				break;
			case 5:
				break;
			case 6:
				break;
		}
	} while(choice!=0);
	printf("Good bye!");
	
	return 0;
}
