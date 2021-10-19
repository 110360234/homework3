#include<stdio.h>
#include<stdlib.h>


int main()
{
	double w,s,h;
	printf("Enter your weight(kg):\n");
	scanf_s("%lf", &w);
	printf("Enter your height(meter):\n");
	scanf_s("%lf", &h);
	s = w / (h*h);
	printf("your BMI:%lf\n",s);
	/*if(s<18.5){
		printf("underweight\n");
	}
	if (18.5<=s && s<= 24.9) {
		printf("Normal\n");
	}
	if (25<=s && s<=29.9) {
		printf("Overweight\n");
	}
	if (s>=30) {
		printf("Obese");
	}*/
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29\n");
	printf("Obese:       30 or greater\n");
	return 0;
}