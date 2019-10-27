#include <iostream>
#include <vector>
using namespace std;
void Combination(int *a, int index, int n, vector<int>& vec)
{
	/* 有1分，2分，5分，10分四种硬币，每种硬币数量无限，给定n分钱(n <= 100000)，
	有多少中组合可以组成n分钱？ */
	int add = 0;
	if (n == 0)
	{
		vector<int>::iterator iter = vec.begin();
		for (; iter != vec.end(); ++iter)
		{
			++add;
			//cout << *iter << " ";
		}
		cout << add;
		//cout << endl;
	}

	if (n < 0)
		return;

	for (int i = index; i < 4; i++)
	{
		vec.push_back(a[i]);
		Combination(a, i, n - a[i], vec);
		vec.pop_back();
	}

}

void PrintCombination(int n)
{
	int a[4] = { 1,2,5,10 };
	vector<int> vec;
	Combination(a, 0, n, vec);
}

int mainyrhzg()
{
	int n;
	cin >> n;
	cout << n << "分钱的组合情况如下：" << endl;
	PrintCombination(n);
	system("pause");
	return 0;
}

 