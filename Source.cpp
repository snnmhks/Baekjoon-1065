#include <iostream>

using namespace std;

int main()
{
	int Num = 0;
	cin >> Num;

	if (Num / 10 == 0)
	{
		cout << Num << endl;
	}
	else if (Num / 100 == 0)
	{
		cout << Num << endl;
	}
	else if (Num / 1000 == 0)
	{
		int answer = 99;
		int FirstNum = Num % 10;
		int SecondNum = (Num / 10) % 10;
		int ThirdNum = (Num / 100) % 10;
	}
}