// Audit4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#define MAX2(a, b) ((a) > (b) ? (a) : (b))
#define MIN2(a, b) ((a) < (b) ? (a) : (b))
#define MAX3(a, b, c) (MAX2(a, b) > (c) ? MAX2(a, b) : (c))
#define MIN3(a, b, c) (MIN2(a, b) < (c) ? MIN2(a, b) : (c))

int main(void) {
	int a, b, c;
	printf("Enter a. b. c: ");
	if (scanf_s("%d %d %d", &a, &b, &c) != 3) {
		printf("Invalid input");
		return 1;
	}
	printf("Max is %d, min is %d\n", MAX3(a, b, c), MIN3(a, b, c));
	getchar ();
	return 0;
}

