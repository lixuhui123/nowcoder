#include <iostream>
#include <vector>
using namespace std;
class fobei
{
	vector<int> v;
public:
	fobei()
	{
		v.push_back(0);
		v.push_back(1);
	}
	void make_fobei()
	{
		/* 默认生成300个 ，非递归*/
		int i,j;
		for (i=2;i<300;++i)
		{
			j = v[i - 1] + v[i - 2];
			v.push_back(j);
		}
	}
	int findnearestone(int res)
	{
		int i,left,right;
		for (i=0;i<v.size();++i)
		{
			if ((v[i]<res&&v[i+1]>res)||v[i]==res)/* 大于小于一定要分清楚 */
			{
				left = res - v[i];
				right = v[i + 1] - res;
				if (left>right)
				{
					return right;
				}
				else
				{
					return left;
				}
			}
		}
		return 0;
	}
	void print()
	{
		for (auto &tmp : v)
		{
			cout << tmp << endl;
		}
	}
};
int maintrteraw()
{
	fobei test;
	test.make_fobei();
	//test.print();
	int i;
	cin >> i;
	cout << test.findnearestone(i);
	system("pause"); 
	return 0;
}
 