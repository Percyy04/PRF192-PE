#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return 0;
    }

    int maxDay = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDay = 30;
    } else if (month == 2) {
        if (isLeapYear(year)) {
            maxDay = 29;
        } else {
            maxDay = 28;
        }
    }

    return day <= maxDay;
}

void printFibonacci(int n) {
    long long  a = 0, b = 1, c;
    printf("Fibonacci sequence for first %d numbers: ", n);
	
	int i;
    for (i = 0; i < n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

int main() {
    int choice;
    
    do {
        printf("      MENU      \n");
        printf("1- Fibonacci sequence\n");
        printf("2- Check a date\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                int n;
                printf("Enter a positive integral number: ");
                scanf("%d", &n);
                if (n > 0) {
                    printFibonacci(n);
                } else {
                    printf("Invalid input. Please enter a positive integral number\n");
                }
                break;
            }
            case 2: {
                int day, month, year;
                printf("Enter day: ");
                scanf("%d", &day);
                printf("Enter month: ");
                scanf("%d", &month);
                printf("Enter year: ");
                scanf("%d", &year);
                
                if (isValidDate(day, month, year)) {
                    printf("Valid date\n");
                } else {
                    printf("Invalid date\n");
                }
                break;
            }
            case 3:
                break;
            default:
                printf("Invalid choice. Please select a valid option\n");
        }
        
        printf("\n");
    } while (choice != 3);
    
    return 0;
}

