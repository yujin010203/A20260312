#include <iostream>

using namespace std;

// 45개 공 중에서 6개를 뽑는 프로그램

// int* P = new int[];
int Numbers[45];
int PlayerNumber[6];

void Init()
{
	for (int i = 0; i < 45; i++)
	{
		Numbers[i] = i + 1;
	}

	srand((unsigned int)time(nullptr));
}

void Shuffle()
{
	for (int i = 0; i < 45; i++)
	{
		int FirstIndex = rand() % 45;
		int SecondIndex = rand() % 45;
		int Temp = Numbers[FirstIndex];

		Numbers[FirstIndex] = Numbers[SecondIndex];
		Numbers[SecondIndex] = Temp;
	}
}

void Deal()
{
	for (int i = 0; i < 6; i++)
	{
		PlayerNumber[i] = Numbers[i * 2];
	}
}

int main()
{
	Init();
	Shuffle();
	Deal();

	for (int i = 0; i < 6; i++)
	{
		cout << PlayerNumber[i] << " ";
	}

	return 0;
}