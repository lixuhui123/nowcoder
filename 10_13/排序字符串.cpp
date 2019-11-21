#include <iostream>
#include <vector>
#include <string>
using namespace std;

int mainkjgfdfghn()
{
	vector<string> v_s;
	string temp;
	int num = 0;	
	int i = 0;	
	int flagd = 0;
	int flagl = 0;
	cin >> num;
	for (  i=0;i<num;++i)
	{
		//scanf("%s", temp);
		//getline(cin, temp);
		cin >> temp;
		v_s.push_back(temp);
	}

	for (i = 0; i < num - 1; ++i)
	{
		if ((strcmp(v_s[i + 1].c_str(), v_s[i].c_str()))==1 || (strcmp(v_s[i + 1].c_str(), v_s[i].c_str())) == 0)
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