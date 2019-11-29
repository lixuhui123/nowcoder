//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string str("lixuhui-sada?dewdddw");
//	 
//	cout << i << endl;
//	system("pause"); 
//	return 0;
//}

 

#include <iostream>
#include <string>

using namespace std;

int maincsacwefas()
{
	string str1, str2;

	while (cin >> str1 >> str2)
	{
		int i = 0, j = 0;
		int b = i - 1;

		int flag = 1;
		for (; j < str2.length(); j++)
		{
			if (str2[j] == str1[i] || str1[i] == '?')
			{
				i++;
				continue;
			}
			else if (str1[i] == '*')
			{
				i++;
				continue;
			}
			else if (b >= 0 && str1[b] == '*')
			{
				continue;
			}
			else
			{
				cout << "false" << endl;
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << "true" << endl;
	}
	return 0;
}