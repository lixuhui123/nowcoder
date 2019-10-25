#include <iostream>
#include <string>
using namespace std;
class rle
{
public:
	/* aaabccccccdd   3a1b6c2d */
	string m_s;
	string res;
	void deal_rle()
	{
		getline(cin, m_s);
		int i = 0;
		int num = 1;
		int _size=m_s.size();
		for (i=1;i<= _size;++i)
		{
			if ((m_s[i-1]==m_s[i]))//&&i!= _size -1
			{
				num++;
			}
			else
			{
				res.push_back(num+'0');
				res.push_back(m_s[i - 1]);
				num = 1;
			}
		}
		
	}
	void print()
	{
		for (auto & s : res)
		{
			cout << s;
		}
		//char s[100] = res.c_str();
	}
};
int maindfgfhoiutre()
{
	rle test;
	test.deal_rle();
	test.print();
	system("pause"); 
	return 0;
}