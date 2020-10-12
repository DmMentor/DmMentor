#include <iostream>;

int main()
{
	system("chcp 1251");
	system("cls");

	
	int a, b,c;
	printf("Первый способ \n");
	printf("Ведите a="); 
	scanf_s("%d", &a); 
	printf("Ведите b=");
	scanf_s("%d", &b);
	c = a;
	a = b;
	b = c;
	printf(" a=%d \n b=%d \n", a , b);
	
	printf("---------------------------- \n");

	printf("Второй способ\n");
	printf(" a=");
	scanf_s("%d", &a);
	printf(" b=");
	scanf_s("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d \n b=%d", a ,b);





}