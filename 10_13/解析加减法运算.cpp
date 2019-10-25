#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <ctype.h>
using namespace std;
class add_and_subtraction
{
	string tmp;
	string m_s;
	int add;
	/* 1+2+3      6  决定就用string了*/
public:
	void deal()
	{
		getline(cin, tmp);
		int _size = tmp.size();
		tmp.push_back('a');
		tmp.push_back('a');
		for (int i=0;i<_size;++i)
		{
			if (tmp[i]>='0'&&tmp[i]<='9')
			{
				m_s.push_back(tmp[i]);

			}
		    if ((tmp[i+1]=='+'&&tmp[i+2]=='-'))
			{
				m_s.push_back('-');
				i += 2;
				//m_s.push_back(m_s[i]);

				continue;
			}
			if (tmp[i + 1] == '-'&&tmp[i + 2] == '-')
			{
				m_s.push_back('+');
				
				i += 2;
                //m_s.push_back(m_s[i]);

				continue;
			}
			if (tmp[i+1]=='+')
			{
				m_s.push_back('+');
				i++;
				continue;
			}
			if(tmp[i+1]=='-')
			{
				m_s.push_back('-');
				i++;
			}
		}
		/*for (auto&t:m_s)
		{
			cout << t;
		}*/
	}
	void a_and_s()
	{
		int i = 0;
		int _size = m_s.size();
		  add=m_s[0]-'0';
		for (i=1;i<_size;++i)
		{
			if (i==_size)
			{
				break;
			}
			if ((m_s[i]=='+') )
			{
				/* 是数字 */
				 
				add += (m_s[i + 1]-'0');

				i++;
				continue;
			}
			if (m_s[i]=='-')
			{
				add -= (m_s[i + 1]-'0');
				i++;
			}
		}
		if (tmp[0]=='-')
		{
			int tag = tmp[1]-'0';
			add -= (tag*2);
		}
		cout << endl;
		cout << add;
	}
};
int mainvgiurytds()
{
	add_and_subtraction test;
	test.deal();
	test.a_and_s();
	system("pause"); 
	return 0;
}

 
 
 