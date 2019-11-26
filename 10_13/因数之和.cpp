#include <iostream>
#include<vector>
using namespace std;
vector<int> m_v;
int i = 0;
int j = 0;
int y = 0;
void yueshu(int num)
{
	for (j = 2; j <= num / 2; ++j)
	{
		if (num%j==0)
		{
			m_v.push_back(j);
		}
	}
}

int maincdssaqw()
{
	int num = 0;
	int i = 0;
	int add = 1;
	int flag = 0;
	while (cin>>num)
	{
		for (i=1;i<=num;++i)
		{
			add = 1;
			m_v.clear();
			for (j = 2; j <= i / 2; ++j)
			{
				if (i%j == 0)
				{
					m_v.push_back(j);
					/* 此处可以不用存入vector */
				}
			}
			for (auto & v : m_v)
			{
				//cout << v << endl;
				add += v;
				//cout << add << endl;
			}
			if (i==add)
			{
				flag++;
				//cout << i << endl;
			}
		}
		cout << flag<<endl;
		flag = 0;
		/*对变量的全程考虑 */
	}
	system("pause"); 
	return 0;
}