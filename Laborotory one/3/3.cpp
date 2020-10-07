#include <iostream>;

int main()
{
	system("chcp 1251");
	system("cls");
	
	double a, b, c,d;
	printf("Напиши число которое хочешь получить в 8 степени:");
	scanf_s("%lf", &a);
    system("cls");
	
	b = a * a;
	c = b * b;
	d = c * c;
	printf("Получило: %lf", d);



}