#include <iostream>


int main()
{
	system("chcp 1251");
	system("cls");
	
	
	int a, b;
	printf("Напиши своё число: ");
	scanf_s("%d", &a);
	system("cls");
    b = a + a/2;
	printf("Твоё число: %d\n Число ПК: %d\n Ты проиграл попробуй ещё раз", a, b);


}
