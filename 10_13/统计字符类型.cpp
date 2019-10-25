#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int zimu = 0;
	int num = 0;
	int kongge = 0;
	int qita = 0;
class statistics
{
	string m_s;
	
public:
	statistics()
	{
		//cin.get() >> m_s;

		/*char tmp;
		while ((tmp = getchar()) != '\n')
		{
			m_s.push_back(tmp);
		}*/

		//istringstream iss;
		getline(cin, m_s);
	}
	void deal_statist()
	{

		for (auto &s : m_s)
		{     
			if (s >= 'a'&&s <= 'z')
			{
				zimu++;
			}
			else if (s >= '0'&& s <= '9')
			{
				num++;
			}
			else if (s == ' ')
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
		cout << zimu << endl;
		cout << kongge << endl;
		cout << num << endl;
		cout << qita << endl;
	}
};
int maindgfsdumhji()
{
	statistics test;
	test.deal_statist();
	test.print();
	system("pause");
	return 0;
}