//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	/* ѭ������ */
//	string tpc;/* ͨ�䴮 */
//	string str;/* ��ƥ��Ĵ� */
//	char arr[50][50] = {0};
//	arr[0][0] = 1;
//	int y = tpc.length();
//	int x = str.length();
//	int i = 0;
//	
//	while (cin >> tpc>> str)
//	{
//		/* ���ά���� */
//		for (i=1;i<=y;++i)
//		{
//			arr[i][0] = tpc[i-1];
//
//		}
//		for (i=1;i<=x;++i)
//		{
//			arr[0][i] = str[i-1];
//
//		}
//		for (i=1;i<=y;+i)
//		{
//			if (tpc[i]=='?')
//			{
//				if (arr[i-1][i-1]==1)
//				{
//					arr[i][i] = 1;
//				}
//				else
//				{
//					arr[i][i] = 0;
//					break;
//				}
//			}
//			else if(tpc[i]==str[i]&&i<x)
//			{
//				if (arr[i - 1][i - 1] == 1)
//				{
//					arr[i][i] = 1;
//				}
//				else
//				{
//					arr[i][i] = 0;
//					break;
//				}
//			}
//			else if (tpc[i]=='*')
//			{
//
//				if (arr[i - 1][i - 1] == 1)
//				{
//					arr[i][i] = 1;
//				}
//				else
//				{
//					arr[i][i] = 0;
//					break;
//				}
//			}
//		}
//
//
//	}
//	 
//	system("pause"); 
//	return 0;
//}