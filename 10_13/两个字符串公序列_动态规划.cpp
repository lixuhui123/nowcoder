
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*本题采用动态规划求解
 *首先来分析一下思路：
 *首先创建一个二维数组保存公共子串长度，以较小串的长度+1为行数，较大串的长度+1为列数，初始值全为0
 *我们从较小串的第一个字符开始在较大串中全部查找一遍，如果有该字符则更新数组对应位置的值，直到较小字符串遍历完
 *	更新方式为[i][j] = [i-1][j-i]+1;在此过程中不断更新最大子串的长度max及起始位置start
 *最后从较小串的start位置打印长度为max的子串即可*/

void deal(string str1, string str2)
{
	int l1 = str1.size(), l2 = str2.size(), max = 0, start = 0;
	int arr[100][100] = { 0 };
	//vector <vector<int>> arr(l1 + 1, vector<int>(l2 + 1, 0)); //这里要+1，因为是从[0][0]到[l1][l2],初始全为0
	for (int i = 1; i <= l1; ++i) //因为要通过[i-1][j-1]来更新[i][j]，所以这里从[1][1]开始，避免越界
	{
		for (int j = 1; j <= l2; ++j)
		{
			if (str1[i - 1] == str2[j - 1]) //如果字符相等，则更新‘到此位置的公共子串’的长度
				arr[i][j] = arr[i - 1][j - 1] + 1;
			if (arr[i][j] > max) //更新最大公共子串长度及起始位置
			{
				max = arr[i][j];
				start = i - max;
			}
		}
	}
	cout << str1.substr(start, max) << endl;
}

int maindcsasc()
{
	string str1, str2;
	while (cin>>str1>>str2)
	{
		if (str1.size() < str2.size()) //找到较短的字符串作为传入的str1
		{
			deal(str1, str2);
		}
		else
		{
			deal(str2, str1);
		}
	}
	return 0;
}

