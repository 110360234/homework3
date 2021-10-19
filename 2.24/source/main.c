#include <stdio.h>
#include <stdlib.h>

main()
{
	int n;
	printf("Enter a number:\n");
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		printf("%d is even. ", n);
	}
	else
	{
		printf("%d is odd. ", n);
	}
	return 0;
}