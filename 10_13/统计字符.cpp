#include <iostream>
#include <string>
#include <vector>
using namespace std;
class statistics
{
	string m_s;
	int zimu = 0;
	int num = 0;
	int kongge = 0;
	int qita = 0;
public:
	statistics()
	{
		char tmp[100] ="lkjgff oiugfc";
		m_s = tmp;
		/*char tmp;
		while ((tmp=getchar())!='\n')
		{
			m_s.push_back(tmp);
		}*/
	}
	void deal_statist()
	{
		
		for (auto &s:m_s)
		{
			if (s>='a'&&s<='z')
			{
				zimu++;
			}
			else if (s>='0'&& s<='9')
			{
				num++;
			}
			else if (s==' ')
			{
				kongge++;
			}
			else
			{
				qita++;
			}
		}
	}
	void print()
	{
		cout << zimu << endl << kongge << endl << num << endl << qita << endl;
	}
};
int main()
{
	statistics test;
	test.deal_statist();
	test.print();
	system("pause");
	return 0;
}