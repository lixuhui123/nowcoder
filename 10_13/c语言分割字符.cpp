#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int mainkluguttfu()
{
	char str[100] = "";
	int i = 0;
	int j = 0;
	int first = 0;
	int end = 0;
	vector<string> m_v;
	while (scanf("%[^\n]", str))
	{
		int len = strlen(str);
		//cout << len;
		for (i=0;i<len;++i)
		{
			
			if (str[i]==' ')
			{
				if ( str[i+1]=='"')
				{
					first = i + 1;
					for (i = i + 1; i < len; ++i)
					{
						if (str[i] == '"')
						{
							end = i;
							++i;
							++i;
							break;
						}
					}
					string tmp(str + first, str + end);
					m_v.push_back(tmp);
				}
				
				for (j=i-1;j>=0;j--)
				{
					if (j==0)
					{   end = i-1;
						first = 0;
						string tmp(str + first, str + end+1);
						m_v.push_back(tmp);
						tmp.clear();
						 
					}
					if (str[j]==' ')
					{
						first = j+1;
						end = i - 1;
						string tmp(str + first, str + end+1);
						m_v.push_back(tmp);
						tmp.clear();
						break;
					}
				}
				for (j = i + 1; j < len; j++)
				{
					if (str[j] != ' ')
					{

					}
					else
					{
						break;
					}

					if (j == len - 1)
					{
						first = i + 1;
						end = len;
						string tmp(str + first, str + end);
						m_v.push_back(tmp);

						break;
					}
				}
			}

		}
		for (auto & t:m_v)
		{
			cout << t << endl;
		}
	}
    system("pause");
    return 0;
}