// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	double x1, y1, x2, y2, x3, y3, x, y;
	printf("Enter coordinats A:");
	scanf_s("%lf%lf", &x1, &y1);
	printf("Enter coordinats B:");
	scanf_s("%lf%lf", &x2, &y2);
	printf("Enter coordinats C:");
	scanf_s("%lf%lf", &x3, &y3);
	printf("Enter coordinats M:");
	scanf_s("%lf%lf", &x, &y);
	float a = (x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y);
	float b = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
	float c = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);
	if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
	{
		printf("M is in triangle");
	}
		else
		{
			printf("M is out of triangle");
		}
	getchar();
	return 0;
}

