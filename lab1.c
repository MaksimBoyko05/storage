#include <stdio.h> //��������.��������
#include <locale.h> //����������
int main() //������� �������
{
    setlocale(LC_ALL, "Ukrainian"); //����������
    int year = 022, month = 010, day = 05; //����
    printf("����� �.� \n%o-%o-%o", day, month, year); //��������(������� �������)
    return 0; // ���������� ��������� �������

} // ����� �������
