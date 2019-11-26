//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//set<int> m_s;
//int i = 0;
//int j = 0;
//int y = 0;
//int y2;
//void yueshu(int num)
//{
//	for (i = 2; i <= num / 2; ++i)
//	{
//		for (j = 2; j <= num / 2; ++j)
//		{
//			if (i*j == num)
//			{
//				if (i > j)
//				{
//					y = i;
//					y2 = j;
//				}
//				else
//				{
//					y2 = j;
//					y = i;
//				}
//				m_s.insert(y);
//				m_s.insert(y2);
//				//m_v.push_back(y1);
//				//m_v.push_back(y2);
//
//			}
//		}
//
//	}
//}
//int maindrwadesAW()
//{
//	/* 求一个数的约数 */
//	
//	int num;
//	int des;
//	int jishu=0;
//	while (cin >>num>>des)
//	{
//		while(num!=des)
//		{
//			jishu++;
//			yueshu(num);
//			num = num + *(--m_s.end());
//			if (num>des)
//			{
//				break;
//			}
//			m_s.clear();
//		}
//		cout << jishu << endl;
//
//
//	}
//	system("pause"); 
//	return 0;
//}