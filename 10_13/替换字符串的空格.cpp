//#include <iostream>
//using namespace std;
//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		int j = 0;
//		for (int i=0;i<length;++i)
//		{
//			if (str[i]==' ')
//			{
//				for ( j=length-1;j>i;j--)/* 这个比较错了，反映的还是做得不够 */
//				{
//					str[j + 2] = str[j];
//				}
//				length += 2;
//				str[i] = '%';
//				str[i + 1] = '2';
//				str[i + 2] = '0';
//			}
//		}
//		printf("%s", str);
//	}
//};
//int main25()
//{
//	Solution test;
//	char s[30] = "li xu hui ha ha";
//	test.replaceSpace(s, 15);
//	system("pause"); 
//	return 0;
//}
