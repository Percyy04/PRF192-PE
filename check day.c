#include<stdio.h>


int isLeapYear(int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        return 1; 
    } else {
        return 0; 
    }
}

int check(int d , int m , int y ){
	int maxd = 31 ;
	if(d<1 || d > 31 || m < 1 || m > 12) return 0 ;
	if ( m==4 || m==6 || m==9 || m==11) maxd=30 ;
	else if (m==2) {
           	if(isLeapYear(y)) maxd = 29 ;
            else maxd = 28;
       }
return d <= maxd ; 

}
int main() {
    int month, year , day ;
    printf("Nhap ngay thang nam : ") ;
    scanf("%d%d%d", &day, &month , &year);
    if (check(day,month,year))
    	printf("Valid date") ;
    else 
    	printf("Invalid date") ;
}
