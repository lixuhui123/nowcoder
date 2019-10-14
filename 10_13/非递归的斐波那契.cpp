#include <iostream>
#include <vector>
using namespace std;
int Fibonacci(int n)
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	int i = 0;
	int j = 0;
	for (i=3;i<=n;i++)
	{
		j = v[i - 1] + v[i - 2];
		v.push_back(j);
	}
	if (n == 0 || n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return v[n];

	}
}
int mainsdfj()
{
	int i = 0;
	cout << "ÇëÊäÈë";
		cin >> i;
	cout << Fibonacci(i);
	system("pause"); 
	return 0;
}