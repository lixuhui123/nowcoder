//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//void deal(string str1, string str2)
//{
//	int l1 = str1.size(), l2 = str2.size(), max = 0, start = 0;
//	vector <vector<int>> arr(l1 + 1, vector<int>(l2 + 1, 0)); //这里要+1，因为是从[0][0]到[l1][l2],初始全为0
//	for (int i = 1; i <= l1; ++i) //因为要通过[i-1][j-1]来更新[i][j]，所以这里从[1][1]开始，避免越界
//	{
//		for (int j = 1; j <= l2; ++j)
//		{
//			if (str1[i - 1] == str2[j - 1]) //如果字符相等，则更新‘到此位置的公共子串’的长度
//				arr[i][j] = arr[i - 1][j - 1] + 1;
//			if (arr[i][j] > max) //更新最大公共子串长度及起始位置
//			{
//				max = arr[i][j];
//				start = i - max;
//			}
//		}
//	}
//	cout << max<< endl;
//}
//
//int main()
//{
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		if (str1.size() < str2.size()) //找到较短的字符串作为传入的str1
//		{
//			deal(str1, str2);
//		}
//		else
//		{
//			deal(str2, str1);
//		}
//	}
//	return 0;
//}
//
