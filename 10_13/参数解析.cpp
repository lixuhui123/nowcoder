 #include <iostream>
#include <string>
#include <vector>
using namespace std;
int maincwsacvwaa() {
	string str;
	while (getline(cin, str)) 
	{
		bool flag = false;
		vector<string> m_v;
		string tmp;
		int len = str.size();
		for (int i = 0; i < len; i++)
		{
			if (flag)
			{
				if (str[i] != '"')
				{
					tmp += str[i];
				}
				else
				{
					flag = false;
				}
			}
			else 
			{
				if (str[i] == ' ') {
					m_v.push_back(tmp);
					tmp = "";
				}
				else if (str[i] == '"')
				{
					flag = true;
				}
				else
				{
					tmp += str[i];
				}
			}
		}
		m_v.push_back(tmp);
		cout << m_v.size() << endl;
		for (auto i : m_v)
		{
			cout << i << endl;
		}
	}
	/* 这个代码的优点在于，充分分析了题意和要处理的字符串的特点，而且有一个新的见识就是
	用一个标记，去对特殊的段特殊操作。这是以前没进过的地方*/
	/* 这个题一定要反思，因为不知道string有+操作，思路太僵化
	而且缺乏分析代码逻辑，每个步骤冗余太高了，缺乏对代码逻辑的分析，没有想好就开始乱写
	下次写之前应该分析好再下笔，不然写了改改了写，没有意义。难题想流程吧*/
	return 0;
}