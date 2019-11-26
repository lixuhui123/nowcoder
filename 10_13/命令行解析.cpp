//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//int main()
//{
//	string str;
//	string tmp;
//	
//	vector<string> m_v;
//	while (getline(cin, str))
//	{
//		istringstream iss(str);
//		while (iss >> tmp)
//		{
//			m_v.push_back(tmp);
//		}
//		/* 以上是按空格分开，现在里面包含双引号 */
//		
//		vector<string> ok;
//		string ll;
//		int len = str.length();
//		for (int i=0;i<len;++i)
//		{
//			if (m_v[i][0]!='"')
//			{
//				ok.push_back(m_v[i]);
//			}
//			else
//			{
//				string::iterator first=m_v[i].begin();
//				string::iterator end = m_v[i].end();
//				m_v[i].erase(first);
//
//			}
//			if ()
//			{
//			}
//		}
//		for (auto & j : m_v)
//		{
//			
//			if (j[0]=='"')
//			{
//				j.erase()
//			}
//			else
//			{
//				ok.push_back(j);
//			}
//			cout << j << endl;
//		}
//		m_v.clear();
//	}
//	system("pause");
//	return 0;
//}
//
//
////#include <iostream>
////#include <iostream>
////#include <string>
////#include <vector>
////using namespace std;
////int main()
////{
////	string str;
////	string tmp;
////	vector<string> m_v;
////	
////	while (getline(cin, str))
////	{
////		int len = str.length();
////		int i = 0;
////		int j = 0;
////		int first = -1;
////		int end = 0;
////		for (i=0;i<len;++i)
////		{
////			if (str[i]== '"')
////			{
////				first = i;
////				for (i=i+1;i<len;++i)
////				{
////					if (str[i]=='"')
////					{
////						end = i;
////						for (int t=first+1;t<end;++t)
////						{
////							tmp.push_back(str[t]);
////						}
////
////						vector<string>::iterator it;
////						it = m_v.end();
////						//m_v.insert(&str + i, str + j);
////						m_v.insert(it,tmp);
////						tmp.clear();
////						first = 0;
////						end = 0;
////					}
////				}
////			}
////			if (str[i]==' ')
////			{
////				
////			}
////		}
////		for (auto & j : m_v)
////		{
////			cout << j << endl;
////		}
////		m_v.clear();
////	}
////	system("pause"); 
////	return 0;
////}