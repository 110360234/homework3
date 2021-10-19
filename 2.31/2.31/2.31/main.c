#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	n = 0;
	printf("number  square  cube\n");
	for (n; n <= 10; n++) {
		printf("%d	%d	%d\n", n, n*n, n*n*n);
	}
}