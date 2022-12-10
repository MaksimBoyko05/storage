#include <stdio.h> //стандарт.бібліотека
#include <locale.h> //локалізація
int main() //початок функції
{
    setlocale(LC_ALL, "Ukrainian"); //локалізація
    int year = 022, month = 010, day = 05; //змінні
    printf("Бойко М.Є \n%o-%o-%o", day, month, year); //виведеня(вісімкова система)
    return 0; // завершення виконання функції

} // кінець функції
