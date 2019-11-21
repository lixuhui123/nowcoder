//#include <vector>
//#include <iostream>
//#include <istream>
//#include <string>
//#include <sstream>
//#include <algorithm>
//using namespace std;
///* 本题中遇到一个新的问题，在函数之间产传参的时候，最大程度是int，
//操作int之后会发生截断，牢记吧。*/
//bool myfunction(int i,int j)
//{
//	return i > j;/* 从大到小 */
//}
//void deal()
//{
//	/* 输入 */
//	int number = 0;
//	int tmp = 0;
//	string str;
//	vector<int> arr;
//	vector<int>::iterator it;
//	scanf("%d\n", &number);
//	//cout << endl;
//	getline(cin, str);
//	istringstream iss(str);
//	if (str.size()==0)
//	{
//		return ;
//	}
//	while (iss>>tmp)
//	{
//		arr.push_back(tmp);
//	}
//	sort(arr.begin(), arr.end(), myfunction);
//	/*for (auto & i:arr)
//	{
//		cout << i << " ";
//	}*/
//	//cout << endl;
//	
//	/*for (it=arr.begin()+number;it!=arr.begin()+(2*number);it++)
//	{
//		add += *it;
//	}*/
//	int i = 0;
//    long long add = 0;
//	it = arr.begin() + 1;
//	for (i = 0; i < number; ++i)
//	{
//		add += *it;
//		it += 2;
//		 
//	}
//	printf("%lld\n", add);
//	 
//}
//int main()
//{
//	//long long temp = deal();
//	//printf("%lld\n", temp);
//	//cout<<deal();
//	deal();
//	system("pause"); 
//	return 0;
//}