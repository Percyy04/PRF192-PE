#include <stdio.h>
#include <math.h>

int isSquareNumber(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

void printMinMaxDigits(int num) {
    int minDigit = 9;
    int maxDigit = 0;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num /= 10;
    }
    
    printf("Minimum digit: %d\n", minDigit);
    printf("Maximum digit: %d\n", maxDigit);
}

int main() {
    int choice;
    
    do {
        printf("====== MENU ======\n");
        printf("1- Process SquareNumber\n");
        printf("2- Print min, max digit in an integer\n");
        printf("3- Quit\n");
        printf("Select an operation: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                int num;
                printf("Enter a positive integral number: ");
                scanf("%d", &num);
                if (num > 0) {
                    if (isSquareNumber(num)) {
                        printf("%d is a SquareNumber\n", num);
                    } else {
                        printf("%d is not a SquareNumber\n", num);
                    }
                } else {
                    printf("Invalid input. Please enter a positive integral number\n");
                }
                break;
            }
            case 2: {
                int num;
                printf("Enter a positive integral number: ");
                scanf("%d", &num);
                if (num > 0) {
                    printMinMaxDigits(num);
                } else {
                    printf("Invalid input. Please enter a positive integral number\n");
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

