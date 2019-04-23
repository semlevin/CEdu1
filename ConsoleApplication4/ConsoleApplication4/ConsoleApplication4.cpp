// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

		

		

#define BINGO 5
#define TOOBAD 2
#define SOSO 3		
#define COUNT 5
		
	
void name1 (int arg1)
{
	switch (arg1) {
	case BINGO:
		printf("\nBingo!\n");
		break;

	case TOOBAD:
		printf("\nToo bad\n");
		break;

	case SOSO:
		printf("\nso so\n");
		break;
	}
	//   std::cout << "Hello World!\n"; 
	int main()


		int num[COUNT];

	for (int i = 0; i < COUNT; i++) {

		printf("Input num%d: ", i + 1);
		scanf_s(" %d", &num[i]);
	}

	int res;
		res = num[0];
	for (int i = 0; i < COUNT; i++)

		if (res < num[i])
		res = num[i];
	printf("max %d", res);
	name1 (arg1);

	}
    






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
