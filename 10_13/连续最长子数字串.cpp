//#include <iostream>
//#include <string>
//using namespace std;
///* 华为机试、动态规划问题。设连续最长数字串的长度maxlen、连续最长数字串的起始位置start、
//临时连续最长数字串的起始位置tempindex、临时连续最长数字串的长度templen。先找到第一个数字，
//以它为起始位置找出当前的连续最长数字串的长度templen，若templen>maxlen，
//就更新连续最长数字串的起始位置和长度。最后用substr(start,maxlen)来截取连续最长的数字串进行输出即可。
//  */
//void deal_max_len()
//{
//	string line ;
//	getline(cin, line);
//
//	int start = 0;/* 记录最长的子串起始位置，随时更新 */
//	int maxlen = 0;/* 记录最长子串的长度，随时更新 */
//	int tempindex = 0;
//	int templen = 0;
//	int tempdel=0;
//	/* 在string里面找，遍历string */
//	int _strlen = line.length();
//	int i = 0;
//	for (i=0;i<_strlen;++i)
//	{
//		if (line[i]>='0' && line[i]<='9')
//		{
//			tempindex = i;
//			++i;
//			while (line[i] >= '0' && line[i] <= '9')
//			{
//					tempdel = i;
//                    ++i;
//			}
//			templen = tempdel - tempindex;
//			if (templen>maxlen)
//			{
//				start = tempindex;
//				maxlen = templen+1;
//			}
//		}
//	}
//	cout << line.substr(start, maxlen);
//}
//int main()
//{
//	deal_max_len();
//	system("pause"); 
//	return 0;
//}