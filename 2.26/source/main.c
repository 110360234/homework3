#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	printf("Please enter two integers:\n");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0) {
		printf("the first integers is a mutiple of the second");
	}
	else
	{
		printf("the first integers is not a mutiple of the second");
	}
	return 0;
}