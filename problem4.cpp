#include <stdio.h>

int main(){

//Problem 4
	int n;
	scanf ("%d", &n);
	if (n >0  && n <10){
		printf("1");
	}else if (n >=10 && n <100){
		printf("2");
	}else if (n >= 100 && n<1000){
		printf("3");
	}else if (n>=1000){
		printf("More than 3 digits");
	}

	return 0;
}
