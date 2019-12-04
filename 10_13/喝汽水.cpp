//#include <iostream>
//using namespace std;
///* 返回能够多喝的饮料瓶数,经过一段时间的磨炼发现了一些递归的特点现总结如下
//包括整个题的构思*/
///* 
//传入的参数是饮料的瓶数，退出条件是当瓶数<=1 或者是瓶数==2的时候老板借给一瓶，所以直接在
//我的总数上+1 退出就行了。
//递归体是最关键的，每次拿3个瓶子和老板换饮料，得到的结果就是我要求的东西，然后我会再得到
//饮料，还有我剩下的不够换的，构成了我下一次的传入参数，然后我累加我的总和就是我多喝的饮料
//个数。
//总的来说递归的特点是，递归体只考虑一次处理的情况，相当于for循环的循环体，退出条件就是for
//循环的退出条件。
//*/
//int sum1 = 0;
//int deal_(int num)
//{
//	int tmp;
//	int t;
//	if (num<=1)
//	{
//		return sum1;
//	}
//	if (num==2)
//	{
//		return sum1 + 1;
//	}
//	if (num>=3)
//	{
//		t = num / 3;
//		tmp = num % 3;
//		num = tmp+t;
//		sum1 += t;
//		return deal_(num);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int num;
//	
//	while(cin >> num&&num)
//	{
//		sum1 = 0;
//		cout<<deal_(num)<<endl;
//	}
//	system("pause"); 
//	return 0;
//}
////#include<iostream>
////using namespace std;
////int main()
////{
////	int num;
////	while (cin >> num&&num)
////	{
////		if (num == 0)
////			break;
////		cout << num / 2 << endl;
////	}
////}
// 