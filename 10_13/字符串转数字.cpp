//#include <iostream>
//#include <string>
//#include <ctype.h>
//using namespace std;
//class Solution {
//public:
//	int StrToInt(string str)
//	{
//		int num = 0;
//		int bit;
//		 
//		if (str[0] == '+')
//		{
//
//			for (int i = 1; i < str.size(); ++i)
//			{
//				if (str[i] >= '0'&&str[i] <= '9')
//				{
//
//					bit = str[i] - '0';
//					num = (bit + num) * 10;
//
//				}
//				else
//				{
//					return 0;
//				}
//			}
//			return num / 10;
//		}
//		if (str[0] == '-')
//		{
//			for (int i = 1; i < str.size(); ++i)
//			{
//				if (str[i] >= '0'&&str[i] <= '9')
//				{
//
//					bit = str[i] - '0';
//					num = (bit + num) * 10;
//
//				}
//				else
//				{
//					return 0;
//				}
//			}
//			return num / (-10);
//		}
//		for (int i=0;i<str.size();++i)
//		{
//			if (str[i] >= '0'&&str[i] <= '9')
//			{
//				bit = str[i] - '0';
//				num = (bit + num) * 10;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return num / 10;
// 
//	}
//};
//int main()
//{
//	string st("123t234323");
//	Solution test;
//	cout <<test.StrToInt(st);
//	system("pause");
//	return 0;
//}