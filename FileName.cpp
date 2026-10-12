#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#define D 2.54
int z1();
int z1a();
int z1b();
int z1v();
int z2();
int z3();

int main()
{
	setlocale(LC_ALL, "RUS");
	puts("ÌÎß ÏÐÎÃÐÀÌÌÀ");
	z1();
	z1a();
	z1b();
	z1v();
	z2();
	z3();


	return 0;

}


int z1()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("с=%c\n", c);
	printf("i=%d\n", i);
	printf("f=%f\n", f);
	printf("d=%e\n", d);

	printf("введите символ с: ");
	scanf("%с", &c);
	getchar();

	printf("введите символ i: ");
	scanf("%d", &i);

	printf("введите символ f: ");
	scanf("%f", &f);


	printf("введите символ d: ");
	scanf("%e", &d);

	printf("%с\n", c);
	printf("%d\n", i);
	printf("%f\n", f);
	printf("%e\n", d);
	return 0;

}


int z1a()
{
	float a;
	printf("введите вещественное число: ");
	scanf("%f", &a);
	int b = a;
	float result = a - b;
	printf("целая часть: %d\n", b);
	printf("дробная часть: %f\n", result);
	return 0;

}
int z1b()
{
	char ch;
	printf("введите символ: ");
	scanf("%с", &ch);
	printf("десятичный код=%d\n", ch);
	printf("шестнадцатиричный код=%X\n", ch);

	return 0;
}
int z1v()
{
	int i;
	double result;

	printf("Введите i: ");
	scanf("%d", &i);

	result = 1.0 / i;
	printf("1/i = %lf\n", result);

	return 0;
}
int z2()
{
	int a = 11, b = 3;
	int x;
	float y;
	double z;

	x = a / b;
	y = a / b;
	z = a / b;

	printf("x (int): %d\n", x);
	printf("y (float): %f\n", y);
	printf("z (double): %lf\n", z);

	printf("a/b (float): %f\n", (float)a / b);
	printf("a/b (double): %lf\n", (double)a / b);
	printf("a/(float)b: %f\n", a / (float)b);
	printf("(float)a/b (скобки): %f\n", ((float)a) / b);

	return 0;
}
int z3()
{
	int n, last, first, mid, sum, rev;

	printf("Введите трёхзначное число: ");
	scanf("%d", &n);

	last = n % 10;
	first = n / 100;
	mid = (n / 10) % 10;
	sum = first + mid + last;
	rev = last * 100 + mid * 10 + first;

	printf("Последняя цифра: %d, первая: %d, средняя: %d, сумма цифр: %d, число наоборот: %d\n", last, first, mid, sum, rev);

	return 0;
}