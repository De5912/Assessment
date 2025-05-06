#include <stdio.h>
int main () {
	int a, b, c, sum;
	printf("Enter the Value of a, b and c:\n");
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	printf("The sum of a, b and c is %d", &sum);
	return 0;
}
