#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    char name0[15], name1[9], name2[9],name3[9], name4[15], name5[9];
   

    printf("1)Введите название процессора:");
    scanf_s("%s", name0, 15);
    printf("Введите частоту и тип процессора %s:\n", name0);
    printf("Частота:");
    scanf_s("%d", &a); 
    printf("Тип:");
    scanf_s("%s", name1, 9);
    system("cls");

    printf("2)Введите название процессора:");
    scanf_s("%s", name2, 9);
    printf("Введите частоту и тип процессора %s:\n", name2);
    printf("Частота:");
    scanf_s("%d", &b); 
    printf("Тип:");
    scanf_s("%s", name3, 9);
    system("cls");
    
    printf("3)Введите название процессора:");
    scanf_s("%s", name4, 15);
    printf("Введите частоту и тип процессора %s:\n", name4);
    printf("Частота:");
    scanf_s("%d", &c); 
    printf("Тип:");
    scanf_s("%s", name5, 2);
    system("cls");

    printf(" ---------------------------------------------\n");
    printf(" |Характеристики ПЭВМ                        |\n");
    printf(" ---------------------------------------------\n");
    printf(" |Процессор   | Частота(Mgz) | RAM(Mb) | Тип |\n");
    printf(" -------------|--------------|---------|------\n");
    printf(" |%s | %-12d | %15        | %-3s |\n", name0,a,name1);
    printf(" |%-11s | %-12d | %15        | %-3s |\n", name2,b,name3);
    printf(" |%-7s | %-12d | %15        | %-3s |\n ", name4, c, name5);
    printf("---------------------------------------------\n");
    printf(" |Тип: C - CISC-процессор, R - RISC-процессор|\n");
    printf(" ---------------------------------------------\n");
    
   
    
    return 0;
}
