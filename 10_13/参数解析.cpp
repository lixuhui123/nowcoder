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
	/* ���������ŵ����ڣ���ַ����������Ҫ������ַ������ص㣬������һ���µļ�ʶ����
	��һ����ǣ�ȥ������Ķ����������������ǰû�����ĵط�*/
	/* �����һ��Ҫ��˼����Ϊ��֪��string��+������˼·̫����
	����ȱ�����������߼���ÿ����������̫���ˣ�ȱ���Դ����߼��ķ�����û����þͿ�ʼ��д
	�´�д֮ǰӦ�÷��������±ʣ���Ȼд�˸ĸ���д��û�����塣���������̰�*/
	return 0;
}