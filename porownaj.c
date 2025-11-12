#include <stdio.h> 
int main() {
	int a=10, b=1;
	printf("Porownanie liczb: %d i %d\n", a, b);
	if (a<b){
		printf("%d < %d\n", a, b);
	} else if (a>b) {
		printf("%d > %d\n", a, b);
	} else if (a=b) {
		printf("%d = %d\n", a, b);
	}
	return 0;
}
