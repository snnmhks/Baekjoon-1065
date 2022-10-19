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
	else
	{
		int answer = 99;
		for (int i = 100; i <= Num; i++)
		{
			int FirstNum = i % 10;
			int SecondNum = (i / 10) % 10;
			int ThirdNum = (i / 100) % 10;
			int interval = FirstNum - SecondNum;
			if (SecondNum - interval == ThirdNum)
			{
				answer++;
			}
		}
		cout << answer << endl;
	}
}