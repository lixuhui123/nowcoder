//#include <iostream>
//#include <string>
//using namespace std;
//void deal_transform()
//{
//	string st;
//	
//	/* 输入十六进制 */
//	 
//	long long org=0;
//	int transf=0;
//	char mid;
//	long long temp=0;
//	//int index=0;
//	scanf("%d %d", &org, &transf);
//
//	if (org==0)
//	{
//		cout << 0;
//		return;
//	}
//	 
//	for (org; org ; org/=transf)
//	{
//		temp = org % transf;
//
//		if (temp >=0&&temp <= 9)
//		{
//			mid = temp + '0';
//			st.push_back(mid);
//
//		}
//		if (temp >= 10 &&  temp <= 15)
//		{
//			mid = (temp % 10) + 'A';
//			st.push_back(mid);
//		}
//
//		//printf("%X ", temp);
//	}
//	string::reverse_iterator it;
//	for (it=st.rbegin();it!=st.rend();it++)
//	{
//		cout << *it;
//	}
//	/*cout << endl;
//	for (auto & p:st)
//	{
//		cout << p << ' ';
//	}
//*/
//}
//int main()
//{
//	deal_transform();
//	system("pause"); 
//	return 0;
//}