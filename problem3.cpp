#include <stdio.h>

int main(){

// Problem 3
	int l,b;
	scanf("%d %d", &l, &b);
	int area = l*b;
	int peri = (l+b)*2;
	if (area>peri){
		printf("Area\n%d",area);
	}else if (peri>area){
		printf("Peri\n%d",peri);
	}else{
		printf("Area & Peri is equal");
	}

	return 0;
}
