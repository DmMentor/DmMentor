﻿#include <iostream>;

int main()
{
	system("chcp 1251");
	system("cls");

	double a, b, c, p, s;
	printf("Напиши три стороны что бы узнать площадь, a=");
	scanf_s("%lf", &a);
	printf("b=");
	scanf_s("%lf", &b);
	printf("c=");
	scanf_s("%lf", &c);
	system("cls");

	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("По формуле Герона площадь получилась: %lf", s);

}
