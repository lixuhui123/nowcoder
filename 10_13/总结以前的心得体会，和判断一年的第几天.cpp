//#include <iostream>
//using namespace std;
///* �����������ڣ�����Ĵ�����ʽ������һЩ������Ҫ�����ǣ������ܽ�͹��ɣ�
//���ʶһ�±���д�Ĵ��룬���ڵ�ÿ��һ����ߣ�����������У�ҧ����֣�������������·*/
//class judgeday
//{
//	int _year;
//	int _mouth;
//	int _day;
//	int num=0;
//public:
//	int deal_judge(int year,int mouth,int day)
//	{
//		num = 0;
//		/* �ж����� */
//		_year = year;
//		_mouth = mouth;
//	    _day = day;
//		int flag = 0;
//		if (_year<=0)
//		{
//			return -1;
//		}
//		if (_mouth>12||_mouth<=0)
//		{
//			return -1;
//		}
//		if (_day>31||_day<=0)
//		{
//			return -1;
//		}
//		if (_year % 400 == 0 || (_year % 4 == 0 && _year % 100 != 0))
//		{
//			flag = 1;
//		}
//		for (int i=1;i<mouth;++i)
//		{
//			if (i == 1 || i == 3 || i == 5 || i == 7
//				|| i == 8 || i == 10)
//			{
//				num += 31;
//			}
//			if (i == 4 || i == 6 || i == 9 || i == 11)
//			{
//				num += 30;
//			}
//			if (i==2&&flag==1)
//			{
//				/* ���� */
//				num += 29;
//				flag = 0;
//				continue;
//			}
//			if (i==2&&flag==0)
//			{
//				/* ƽ�� */
//				num += 28;
//			}
//		}
//
//		return num += day;
//		//cout << num << endl;
//		//num = 0;
//	}
//
//};
//int main()
//{
//	/*  */
//	judgeday test;
//	int _year;
//	int _mouth;
//	int _day;
//	while (cin >> _year>> _mouth>> _day)
//	{
//		cout << test.deal_judge(_year, _mouth, _day)<<endl;
//	}
//	while (scanf("%d\n%d\n%d",&_year,&_mouth,&_day))
//	{
//		cout << test.deal_judge(_year, _mouth, _day) << endl;
//	}
//	
//	
//	system("pause"); 
//	return 0;
//}
///* ţ�ƴ�
// 
//
//#include<iostream>
//using namespace std;
//const int days[] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };
//int main() {
//	int y, m, d;
//	while (cin >> y >> m >> d) {
//		int ans = days[m - 1] + d;
//		if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m > 2)
//			ans++;
//		cout << ans << endl;
//	}
//	return 0;
//}*/