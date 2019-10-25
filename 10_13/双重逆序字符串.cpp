#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;
void deal()
{
	char str[100] = "";
	char tmp;
	int i = 0;
	vector<string> m_v;
	string m_s;
	while((tmp=getchar())!='\n')
	{
		str[i] = tmp;

		i++;
	};
	/*for (int j=0;j<strlen(str);j++)
	{
		cout << str[j];
	}*/
	cout << endl;
	char * pch;
	pch = strtok(str, " ");
	while (pch!=NULL)
	{
		m_v.push_back(pch);
		pch=strtok(NULL, " ");
	}
	vector<string>::reverse_iterator it;
	it = m_v.rbegin();
	//cout << *it;
	for (it; it < m_v.rend(); it++)
	{
		 
		cout << (*it).c_str()<<' ' ;
	}

	/*for (auto &t:m_v)
	{
		cout << t << ' ';
	}*/

}
int mainvfsdgytkj7t()
{
	deal();
	system("pause"); 
	return 0;
}