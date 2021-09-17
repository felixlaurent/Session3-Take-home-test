#include <stdio.h>

int main(){
	
// Problem 2
    char huruf;
    scanf("%c", &huruf);

    if(huruf== 'A'||huruf=='E'||huruf=='I'||huruf=='O'||huruf=='U'||huruf=='a'||huruf=='e'||huruf=='i'||huruf=='o'||huruf=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }

	return 0;
}
