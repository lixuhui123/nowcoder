//#include <iostream>
//using namespace std;
//int sum2 = 0; int r = 0, t = 0;//sum2���������ܺȵ�����ˮ����r��ʾÿ�ζһ�֮��ʣ�µ���ˮƿ��t��ʾÿ�εݹ�����п��Զһ�����ˮ��
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
//		r += t;//�Ѿ��һ�����ˮ�ֿ��Եõ���ƿ
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
