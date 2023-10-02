#include "stdio.h"
#include "stdlib.h"

int one() {
	int a;
	scanf_s("%d", &a);
	if (a % 4 != 0 || a % 100 == 0 && a % 400 != 0)
		printf("Simple");
	else printf("Visocos");
}

int two(int n) {
	printf("Year");
	scanf_s("%d", &n);
	printf("year ");
	switch ((n) % 10) {
	case 0:
	case 1:
		printf("White");
		break;
	case 2:
	case 3:
		printf("Black");
		break;
	case 4:
	case 5:
		printf("Green");
		break;
	case 6:
	case 7:
		printf("Red");
		break;
	case 8:
	case 9:
		printf("Yellow");
		break;
	}
	switch ((n + 8) % 12) {
	case 0:
		printf("Rat");
		break;
	case 1:
		printf("Cow");
		break;
	case 2:
		printf("Tiger");
		break;
	case 3:
		printf("Rabbit");
		break;
	case 4:
		printf("Dragon");
		break;
	case 5:
		printf("Snail");
		break;
	case 6:
		printf("Horse");
		break;
	case 7:
		printf("Sheep");
		break;
	case 8:
		printf("Monkey");
		break;
	case 9:
		printf("Chiken");
		break;
	case 10:
		printf("Dog");
		break;
	case 11:
		printf("Pig");
		break;
	}
	return 0;
}
int tri() {
	int k = 0;
	for (int i = 1; i <= 999; i++)
		k += number(i);
	return k;
}
int number(int n) {
	int k = 0;
	while (n > 0) {
		if (n % 10 == 2)
			k++;
		n = n / 10;
	}
	return k;
}
int chetiri() {
	int k = 0;
	for (int i = 1; i < 1000; i++)
		if (i % 10 == 7) {
			k++;
		}
	return k;
}
int sem() {
	float p;
	float t;
	int n;
	float el;
	p = 0;
	n = 1;
	el = 1;
	printf("Tochnost = ");
	scanf_s("%f", &t);
	while (el >= t) {
		el = (float)1 / (2 * n - 1);
		if ((n % 2) == 0)
			p -= el;
		else p += el;
		n++;
	}
	p = p * 4;
	return p;
}
int six(int x) {
	int a;
	int k = 0;
	for (a = 1; a <= 1000; a++)
		if (a == x) {
			printf("Yes");
			break;
		}
		else if (x < a) {
			print("Too low!");
		}
		else if (x > a) {
			printf("Too high");
		}
}
int main() {
	int res1;
	int res2;
	int res3;
	int res4;
	int res7;
	int res6;
	int res8;
	res2 = two(2005);
	res1 = one(2020);
	res4 = chetiri();
	res3 = tri();
	res7 = sem();
	res6 = six(32);
	printf("%d\n", res1);
	printf("%d\n", res2);
	printf("Result3: %d\n", res3);
	printf("Result4: %d\n", res4);
	printf("Result7: %f\n", res7);
	printf("%d\n", res6);
	printf("%d\n", res8);
}