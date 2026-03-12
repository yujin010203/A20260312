#include <iostream>

using namespace std;

// 45개 공 중에서 6개를 뽑는 프로그램

int Numbers[45];

void Init()
{
	for (int i = 0; i < 45; i++)
	{
		Numbers[i] = i + 1;
	}
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

int main()
{
	Init();
	Shuffle();

	for (int i = 0; i < 6; i++)
	{
		cout << Numbers[i] << " ";
	}

	return 0;
}