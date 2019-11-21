# if 0
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	vector<string> v_s;
	string temp;
	int num = 0;
	int i = 0;
	int flagd = 0;
	int flagl = 0;
	cin >> num;
	for (i = 0; i < num; ++i)
	{
		//scanf("%s", temp);
		//getline(cin, temp);
		cin >> temp;
		v_s.push_back(temp);
	}
	for (i = 0; i < num - 1; ++i)
	{
		if (  strcmp(v_s[i + 1].c_str(), v_s[i].c_str()) == 0 ||strcmp(v_s[i + 1].c_str(), v_s[i].c_str())==1 	)
		{
			flagd = 1;
		}
		else
		{
			flagd = 0;
			break;
		}
	}
	for (i = 0; i < num - 1; ++i)
	{
	if (v_s[i + 1].size() >= v_s[i].size())
	{
	flagl = 1;
	}
	else
	{
	flagl = 0;
	break;
	}
	}
		if (flagd && flagl)
		{
			cout << "both";
			system("pause");
			return 0;
		}
	if (flagd)
	{
		cout << "lexicographically";
		system("pause");
		return 0;
	}
	if (flagl)
	{
		cout << "lengths";
		system("pause");
		return 0;
	}
	cout << "none";
	system("pause");
	return 0;
}
#else
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int mainkjhfdsass()
{
	int n;
	cin >> n;
	vector<string> v;
	v.resize(n);
	for (auto& str : v)
		cin >> str;
	bool lenSym = true, lexSym = true;
	// 这里要注意从i=1开始遍历，前后比较，比较长度
	for (size_t i = 1; i < v.size(); ++i)
	{
		if (v[i - 1].size() >= v[i].size())
		{
			lenSym = false;
			break;
		}
	}
	//比较ASCII码
	for (size_t i = 1; i < v.size(); ++i)
	{
		if (v[i - 1] >= v[i])
		{
			lexSym = false;
			break;
		}
	}
	if (lenSym&& lexSym)
		cout << "both" << endl;
	else if (!lenSym && lexSym)
		cout << "lexicographically" << endl;
	else if (lenSym && !lexSym)

		cout << "lengths" << endl;
	else if (!lenSym && !lexSym)
		cout << "none" << endl;
	system("pause");
	return 0;
}
#endif