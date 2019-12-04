//#include <iostream>
//using namespace std;
//int sum2 = 0; int r = 0, t = 0;//sum2用来保存能喝到的汽水数，r表示每次兑换之后剩下的汽水瓶，t表示每次递归过程中可以兑换的汽水数
//int func(int n)
//{
//
//	if (n <= 1)
//		return sum2;
//	if (n == 2)
//	{
//		sum2 += 1;
//		return sum2;
//	}
//	if (n >= 3)
//	{
//		r = n % 3;
//		t = n / 3;
//		sum2 += t;
//		r += t;//已经兑换的汽水又可以得到空瓶
//		return func(r);
//	}
//}
//int main()
//{
//	int num = 0;
//	while (cin >> num && num)
//	{
//		sum2 = 0;
//		cout << func(num) << endl;
//	}
//	return 0;
//}
