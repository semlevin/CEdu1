// pch.cpp: исходный файл, соответствующий предкомпилированному заголовку; нужен для компиляции

#include "pch.h"

// В целом этот файл можно пропустить, но не удаляйте его, если вы используете предкомпилированные заголовки.
int main()
{
	//td::cout << "Hello World!\n"; 
	int num1, num2;

	printf("Input num1: ");
	scanf_s(" %d", &num1);

	printf("\nInput num2: ");
	scanf_s(" %d", &num2);
	if (num1 > num2)
	{
		printf("num1 is bigger");
		printf("\nnum2 oops");
	}
	else
		printf("num 1 oops ");




}