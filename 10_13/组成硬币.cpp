#include <iostream>
#include <vector>
using namespace std;
void Combination(int *a, int index, int n, vector<int>& vec)
{
	/* ��1�֣�2�֣�5�֣�10������Ӳ�ң�ÿ��Ӳ���������ޣ�����n��Ǯ(n <= 100000)��
	�ж�������Ͽ������n��Ǯ�� */
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
	cout << n << "��Ǯ�����������£�" << endl;
	PrintCombination(n);
	system("pause");
	return 0;
}

 