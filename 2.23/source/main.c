#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a, b, c;
	printf("Enter three numbers:\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if(a == b && b == c) {
		printf("a = b = c\n");
	}
	if (a >= b && a >=c ) {
		printf("%.2lf is the Largest number\n",a);
		if (b > c) {
			printf("%.2lf is the smallest number\n",c);
		}
		if (c > b) {
			printf("%.2lf is the smalles number\n",b);
		}
	}
	if (b >= a && b >= c) {
		printf("%.2lf is the Largest number\n",b);
		if (a > c) {
			printf("%.2lf is the smallest number\n",c);
		}
		if (c > a) {
			printf("%.2lf is the smalles number\n",a);
		}
	}
	if (c >= a && c >= b) {
		printf("%.2lf is the Largest number\n",c);
		if (a > b) {
			printf("%.2lf is the smallest number\n",b);
		}
		if (b > a) {
			printf("%.2lf is the smalles number\n",a);
		}
	}
	return 0;
}