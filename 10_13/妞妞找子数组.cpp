//#include <iostream>
//#include <vector>
//using namespace std;
///* 牛牛定义排序子序列为一个数组中一段连续的子序列,
//   并且这段子序列是非递增或者非递减排序的。
//   子序列是递减或者递增的,还有子序列一定是连续的，并且是分割那么不能重复包含
//*/
//int main()
//{
//	//int n = 0;
//	//vector<int> v;
//	//int sum = 1;
//	//cin >> n;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	int a;
//	//	cin >> a;
//	//	v.push_back(a);   // 将输入的数字放在数组里
//	//}
//	//for (int i = 1; i < n - 1; i++)
//	//{
//	//	if ((v[i] > v[i - 1] && v[i] > v[i + 1]) ||	(v[i] < v[i - 1] && v[i] < v[i + 1]))    //找到波峰或波谷
//	//	{
//	//		++sum;
//
//	//		/* 第二种情况相关的 */
//	//		if (i != n - 3)
//	//			++i;
//	//		else
//	//			break;
//	//	}
//	//}
//	//cout << sum << endl;
//
//	int num = 0;
//	vector<int> arr;
//	int ret = 1;/* 1是给第一段留的 */
//
//	cin >> num;
//	arr.resize(num);
//	for (int i = 0; i < num; i++)
//		cin >> arr[i];
//
//	for (int i = 1; i < num - 1; ++i)
//	{
//		if ((arr[i - 1] > arr[i] && arr[i] < arr[i + 1]) || (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]))
//			/* 找波峰或者波谷 */
//		{
//			ret++;
//			/* 此段的含义是留够后面能够 */
//			if (i != num - 3)
//
//				i++;
//		 
//		}
//	}
//	cout << ret << endl;
//	 
//	system("pause"); 
//	return 0;
//}