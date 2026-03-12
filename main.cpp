#include <iostream>
#include <ctime>

using namespace std;

// 6개의 공을 랜덤으로 뽑는 프로그램


void Init(int* Numbers, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		Numbers[i] = i + 1;
	}

	srand((unsigned int)time(nullptr));
}

void Shuffle(int* Numbers, int Size)
{
	for (int i = 0; i < Size*3; i++)
	{
		int FirstIndex = rand() % Size;
		int SecondIndex = rand() % Size;
		int Temp = Numbers[FirstIndex];

		Numbers[FirstIndex] = Numbers[SecondIndex];
		Numbers[SecondIndex] = Temp;
	}
}

int main()
{
	int Size;
	int* Numbers = nullptr;

	cout << "공의 개수를 입력해주세요 : ";
	cin >> Size;

	Numbers = new int[Size];


	Init(Numbers, Size);
	Shuffle(Numbers, Size);

	int PlayerNumber[6];

	for (int i = 0; i < 6; i++)
	{
		PlayerNumber[i] = Numbers[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << PlayerNumber[i] << " ";
	}

	delete[] Numbers;
	Numbers = nullptr;
	return 0;
}