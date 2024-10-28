#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


void printfMenu();
char* lTrim(char s[]);
char* rTrim(char s[]);
char* trim(char s[]);
char* nameStr(char s[]);

void add(char s[][31], float m[], int* n);
void outputArray(char s[][31], float m[], int n);
void searchByName(char s[][31], float m[], int n);
void searchByScore(char s[][31], float m[], int n);
void removeByName(char s[][31], float m[], int* n);
void sortByName(char s[][31], float m[], int n);
void sortByScore(char s[][31], float m[], int n);

int main(int argc, char *argv[]) {
	char s[MAX][31]; //danh sach ho ten
	float m[MAX];    //danh sach diem
	int n=0, choice;
	char c;

	do {
		printfMenu();
		printf("Your choice: ");
		scanf("%d", &choice);
		fflush(stdin);

		switch(choice) {
			case 1:
				add(s,m,&n);
				break;
			case 2:
				outputArray(s,m,n);
				break;
			case 3:
				searchByName(s,m,n);
				break;
			case 4:
				searchByScore(s,m,n);
				break;
			case 5:
				removeByName(s,m,&n);
				break;
			case 6:
				sortByName(s,m,n);
				outputArray(s,m,n);
				break;
			case 7:
				sortByScore(s,m,n);
				outputArray(s,m,n);
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
void add(char s[][31], float m[], int* n) {
	printf("Enter name: ");
	gets(s[*n]);
	nameStr(s[*n]);

	printf("Enter score: ");
	scanf("%f",&m[*n]);

	(*n)++;
}

void outputArray(char s[][31], float m[], int n) {
	for(int i=0; i<n; i++) 
		printf("%-15s%5.1f\n", s[i], m[i]);
}

void searchByName(char s[][31], float m[], int n) {
	char x[31], flag = 0;
	printf("Enter the name you want to search: ");
	gets(x);
	nameStr(x);
	for(int i=0; i<n; i++) {
		if(strstr(s[i],x) != NULL) {
			printf("%-15s%5.1f\n", s[i], m[i]);
			flag = 1;
		}
	}
	if(flag==0)
		printf("Not found");
}
void searchByScore(char s[][31], float m[], int n) {
	float x, flag = 0;
	printf("Enter the score you want to search: ");
	scanf("%f", &x);
	for(int i=0; i<n; i++) {
		if(m[i]==x) {
			printf("%-15s%5.1f\n", s[i], m[i]);
			flag = 1;
		}
	}
	if(flag==0)
		printf("Not found");
}

void removeByName(char s[][31], float m[], int* n) {
	char x[31], flag = 0;
	printf("Enter the name you want to remove: ");
	gets(x);
	nameStr(x);
	for(int i=0; i<*n; i++) {
		if(strcmp(s[i],x)==0) {
			for(int j=i;j<(*n)-1;j++)
				strcpy(s[j],s[j+1]);
			i--;
			(*n)--;
			flag = 1;
		}
	}
	if(flag==0)
		printf("Not found");
	else
		printf("removed.");
}
void sortByName(char s[][31], float m[], int n) {
	char t[31];
	float tmp;

	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(strcmp(s[i],s[j]) == 1) { //>0
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);

				tmp = m[i];
				m[i] = m[j];
				m[j] = tmp;
			}

}

void sortByScore(char s[][31], float m[], int n) {
	char t[31];
	float tmp;

	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(m[i]>m[j]) {
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);

				tmp = m[i];
				m[i] = m[j];
				m[j] = tmp;
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
			s[i] = s[i]-32;//s[i]=toupper(s[i]);
}


