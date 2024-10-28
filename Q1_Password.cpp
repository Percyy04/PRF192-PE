#include <stdio.h>
#include <string.h>
//OUTPUT: Admin@230923
//OUTPUT: abcd@#!123456


int is_digit(char c){ // check  so
	if(c >= '0' && c <= '9'){
		return 1;
	}
	return 0;
}

int is_lower(char c){ // check ki tu viet thuong
	if(c >= 'a' && c >= 'z'){
		return 1;
	}
	return 0;
}

int is_upper(char c){ // check ki tu viet hoa
	if(c >= 'A' && c <= 'Z'){
		return 1;
	}
	return 0;
}

char isSpecialCharacter(char c) { // check ki tu dac biet
    if ((c >= 32 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) {
        return 1;
    } else {
        return 0;
    }
}

//char check(char *s){
//	int i;
//	for(i = 0 ; i < strlen(s) ; i++){
//		if(is_lower(*(s+i))){
//			return 1;
//		}
//		else if(is_upper(*(s+i))){
//			return 1;
//		}
//		else if(is_digit(*(s+i))){
//			return 1;
//		}
//		else if(isSpecialCharacter(*(s+i))){
//			return 1;
//		}
//	return 0;
//	}
//}

int check(char* s){
	int i;
	if(strlen(s) < 12){
		return 0;
	}
	
	for(i = 0 ; i < strlen(s) ; i++){
		if(is_lower(s[i])){
			return 1;
		}
		else if(is_upper(s[i])){
			return 1;
		}
		else if(is_digit(s[i])){
			return 1;
		}
		else if(isSpecialCharacter(s[i])){
			return 1;
		}
	return 0;
	}
}

int main(){
	char s[1000];
	scanf("%s",s);
	

	if(check(s) == 1){
		printf("good job");
	}
	else if(check(s) == 0){
		printf("retype");
	}
}
