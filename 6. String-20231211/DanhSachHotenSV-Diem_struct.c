#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct Student{
	char name[31];
	float score;
};
void printfMenu();
char* lTrim(char s[]);
char* rTrim(char s[]);
char* trim(char s[]);
char* nameStr(char s[]);
float getFloatNumber();
void add(struct Student S[], int* n);
void outputArray(struct Student S[], int n);
void searchByName(struct Student S[], int n);
void searchByScore(struct Student S[], int n);
void removeByName(struct Student S[], int* n);
void sortByName(struct Student S[], int n);
void sortByScore(struct Student S[], int n);
int main(int argc, char *argv[]) {
	struct Student S[MAX]; //danh sach ho ten và diem
	int n=0, choice;     //n: so phan tu co trong mang, length != size
	char c;

	do {
		printfMenu();
		do {
			printf("Your choice: ");
			scanf("%d%c", &choice, &c);
			fflush(stdin);
		} while(choice<0 || choice>7 || c!='\n');

		switch(choice) {
			case 1:
				add(S,&n);
				break;
			case 2:
				outputArray(S,n);
				break;
			case 3:
				searchByName(S,n);
				break;
			case 4:
				searchByScore(S,n);
				break;
			case 5:
				removeByName(S,&n);
				break;
			case 6:
				sortByName(S,n);
				outputArray(S,n);
				break;
			case 7:
				sortByScore(S,n);
				outputArray(S,n);
				break;
			case 0:
				printf("Goodbye!");
				break;
		}

	} while(choice != 0);

	return 0;
}

void printfMenu() {
	printf("\nMenu:\n");
	printf("1- Add a student into the list\n");
	printf("2- Print out the all list\n");
	printf("3- Search student by name\n");
	printf("4- Search student by score\n");
	printf("5- Remove a student by name\n");
	printf("6- Sort the student list by alphabetic order by name\n");
	printf("7- Sort the student list in ascending order by score\n");
	printf("0- End.\n");
}
void add(struct Student S[], int* n) {
	printf("Enter name: ");
	gets(S[*n].name);
	nameStr(S[*n].name);

	printf("Enter score: ");
	scanf("%f",&S[*n].score);
	
	(*n)++;
}

void outputArray(struct Student S[], int n) {
	for(int i=0; i<n; i++){
		printf("%-15s%.1f\n", S[i].name, S[i].score);
	}
}

void searchByName(struct Student S[], int n) {
	char x[31], flag = 0;
	printf("Enter the name you want to search: ");
	gets(x);
	nameStr(x);
	for(int i=0; i<n; i++) {
		if(strstr(S[i].name,x) != NULL) {
			printf("%-15s%.1f\n", S[i].name, S[i].score);
			flag = 1;
		}
	}
	if(flag==0)
		printf("Not found");
}
void searchByScore(struct Student S[], int n) {
	float x, flag = 0;
	printf("Enter the score you want to search: ");
	scanf("%f",&x);
	for(int i=0; i<n; i++) {
		if(S[i].score==x) {
			printf("%-15s%.1f\n", S[i].name, S[i].score);
			flag = 1;
		}
	}
	if(flag==0)
		printf("Not found");
}
void removeByName(struct Student S[], int* n) {
	char x[31], flag = 0;
	printf("Enter the name you want to remove: ");
	gets(x);
	nameStr(x);
	for(int i=0; i<*n; i++) {
		if(strcmp(S[i].name,x)==0) {
			for(int j=i; j<(*n)-1;j++)
				S[j]=S[j+1];
			i--;
			(*n)--;
			flag = 1;
		}
	}
	if(flag==0)
		printf("Not found.");
	else
		printf("Removed.");
}

void sortByName(struct Student S[], int n) {
	struct Student t;

	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(strcmp(S[i].name,S[j].name) == 1) {
				t = S[i];
				S[i] = S[j];
				S[j] = t;
			}

}
void sortByScore(struct Student S[], int n) {
	struct Student t;

	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(S[i].score>S[j].score) {
				t = S[i];
				S[i] = S[j];
				S[j] = t;
			}
}

char* lTrim(char s[]) {
	int i = 0;
	while (s[i] == ' ')i++;
	if (i > 0)
		strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim(char s[]) {
	int i = strlen(s) - 1;
	while (s[i] == ' ')i--;
	s[i + 1] = '\0';
	return s;
}

char* trim(char s[]) {
	rTrim(lTrim(s));
	char* p = strstr(s, "  ");
	while (p != NULL) {
		strcpy(p, p + 1);
		p = strstr(s, "  ");
	}
	return s;
}

char* nameStr(char s[]) {
	trim(s);
	strlwr(s);
	int l = strlen(s);

	for (int i = 0; i < l; i++)
		if (i == 0 || (i > 0 && s[i - 1] == ' '))
			s[i] = s[i]-32;//arrName[i]=toupper(s[i]);
}

