#include <iostream>
#include <vector>
using namespace std;
int deal_min(vector<int> &de,int _len,int j)
{
	 
	if ( j - _len+1<=0)
	{
		int tmp = 0;
		for (int i=0;i<=j;i++)
		{
			if (de[i]>tmp)
			{
				tmp = de[i];
			}
		}
		return tmp;
	}
	else
	{
		int mem = j;
		int tmp = de[j-_len+1];
		/*此处绕进去了很长时间，注意脑子里面想不清的时候就用笔画，这个方法一定要记住
		切记不要在脑子里然*/
		for (j;j>mem-_len;j--)
		{
			if (tmp<de[j])
			{
				tmp = de[j];
			}
		}
		return tmp;
	}
}
vector<int> deal()
{
	vector<int> m_v;
	vector<int> res;
	int size = 0;/* 数组长度 */
	int len = 0;/* 段长度 */
	int tmp = 0;
	scanf("%d %d", &size, &len);
	while (size)
	{
		size--;
		cin >> tmp;
		m_v.push_back(tmp);
	}
	

	int _size = m_v.size();
	int i = 0;
	for (  i=0;i<_size;++i)
	{
		 

	int receive=deal_min(m_v,len,i);
		/* 长度，终止位置 */
	res.push_back(receive);


	}
	return res;
}
int main()
{
	vector<int> res;
	res=deal();
	for (auto&v:res)
	{
		cout << v << ' ';
	}
	system("pause"); 
	return 0;
}