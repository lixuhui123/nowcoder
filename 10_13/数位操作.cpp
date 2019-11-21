#include <iostream>
#include <vector>
using namespace std;
class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) 
	{
		// write code here
		/* 首先取出m的每一位 */
		int a = 0;
		int tmp = 0;
		vector<int> v;
		//for (a=0;a<32;++a)
		//{
		//	tmp = (m >> a) & 1;
		//	v.push_back(tmp);
		//}
		for (a=0;a<32;++a)
		{
			tmp = (1 << a) & m;
			v.push_back(tmp);/* 此时有100，是4 */
		}
		for (auto & b : v)
		{
			cout << b << ' ';
		}
		cout << endl;
		int len = i - j + 1;
		int c = 0;
		for (c=0;c<len;c++)
		{
			/* 替换几个 */
			if (v[c]==1)
			{
				n |= (1 << j);
			}
			else
			{
				n &= ~(1 << j);
			}
			j++;
		}

		return n;
	}
	
};
int main()
{
	 
	/*int tmp = 1024;
	cout << (tmp |= (1 << 2));*/

	BinInsert test;
	cout<<test.binInsert(4355, 4, 2, 7);
	system("pause"); 
	return 0;
}