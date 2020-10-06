#include <iostream>

int main()
{
	
	system("chcp 1251");
	system("cls");
	
	double a, s, d, f, g, h;
	a = 60;
	s = 60;
	d = 24;
	f = 365;
	
	printf("В скольки годах ты хочешь узнать сколько секунд?-");
	scanf_s("%lf", &g);
	h = a * s * d * f * g;
	
	printf("Ответ: %lf", h);
	
}

