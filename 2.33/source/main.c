#include<stdio.h>
#include<stdlib.h>

int main()
{
	double a,b,c,d,e,g,f,m;
	int p;
	printf("Enter how many milages u drive a day?(km)\n");
	scanf_s("%lf", &a);
	printf("Enter how much you spend on a liter of gasoline?\n");
	scanf_s("%lf", &b);
	printf("Enter how many milages can a liter of gasoline travel?(km)\n");
	scanf_s("%lf", &c);
	printf("Enter how much you spend on parking fee a day?\n");
	scanf_s("%lf", &d);
	printf("Enter how much you spend on toll fee a day?\n");
	scanf_s("%lf", &e);
	g = (a / c)*b + d + e;
	printf("You cost %.2lf dollars per day on driving.\n",g);
	printf("\n");
	printf("Enter the number of people if u choose carpooling:\n ");
	scanf_s("%d",&p);
	printf("Enter the total fare:\n");
	scanf_s("%lf",&f);
	m = g - (f/p);
	printf("If u choose carpooling u can save %.2lf a day\n",m);
	return 0;
}
