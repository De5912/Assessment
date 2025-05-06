#include <stdio.h>
int main () {
	int a, b, c, sum, avg, mul;
	printf("Enter the Value of a, b and c:\n");
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	avg = sum/3;
	mul = a * b * c;
	printf("The sum of a, b and c is %d", sum);
	printf("The avg is %d", avg);
	printf("The multiplication is %d", mul);

	return 0;
}
