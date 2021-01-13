#include <stdio.h>


#define false 0
#define true !false

typedef int bool; 
#define max(a,b) (a>b)

int main() {
	int a,b;
	printf("veuillez saisir le premier nombre");
	scanf("%d",&a);
	printf("veuillez saisir le deuxieme nombre");
	scanf("%d",&b);
	if ((a>b)!=false){
		printf("True");
	}
	else if (a==b){
		printf("les nombres sont Egaux");
	}
	else{
		printf("False");
	}
	return 0;
}