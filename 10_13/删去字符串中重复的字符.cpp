//#if 1
//#include <iostream>
//#include <string>
//using namespace std;
///* 涉及到牛客网处理多个case的情况 */
//void deal_char()
//{
//	/* abcqweracb
//	   abcqwer*/
//	string line;
//	string des;
//	 //getline(cin, line);
//	while (getline(cin, line)) 
//	{
//		if (line.size() == 0)
//		{
//			return;
//		}
//		int len = line.size();
//		des.push_back(line[0]);
//		//des[0] = line[0];
//		int i = 0;
//		int j = 0;
//
//		for (i = 1; i < len; ++i)
//		{
//			for (j = 0; j < des.size(); ++j)
//			{
//				if (des[j] == line[i])
//				{
//
//					break;
//				}
//				if (j == des.size() - 1)
//				{
//					des.push_back(line[i]);
//				}
//			}
//		}
//		for (auto& s : des)
//		{
//			cout << s;
//		}
//		des.clear();
//		cout << endl;
//	}
//}
//int mainfrerr()
//{
//	 
//        deal_char();
//	 
//	
//	system("pause"); 
//	return 0;
//}
//#else if
//
//#include <iostream>
//#include <string>
//using namespace std;
///* 涉及到牛客网处理多个case的情况 */
// 
//int main()
//{
//
//	string line;
//	string des;
//	char a;
//	 while ((a=getchar())!='\n')
//	 {
//		 line.push_back(a);
//	 }
//	//getline(cin, line);
//	 
//		if (line.size() == 0)
//		{
//			return 0;
//		}
//		int len = line.size();
//		des.push_back(line[0]);
//		//des[0] = line[0];
//		int i = 0;
//		int j = 0;
//
//		for (i = 1; i < len; ++i)
//		{
//			for (j = 0; j < des.size(); ++j)
//			{
//				if (des[j] == line[i])
//				{
//
//					break;
//				}
//				if (j == des.size() - 1)
//				{
//					des.push_back(line[i]);
//				}
//			}
//		}
//		for (auto& s : des)
//		{
//			cout << s;
//		}
//		des.clear();
//		cout << endl;
//	 
//
//
//	system("pause");
//	return 0;
//}
//#endif