//#include <iostream>
//#include <vector>
//using namespace std;
///* ţţ��������������Ϊһ��������һ��������������,
//   ��������������Ƿǵ������߷ǵݼ�����ġ�
//   �������ǵݼ����ߵ�����,����������һ���������ģ������Ƿָ���ô�����ظ�����
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
//	//	v.push_back(a);   // ����������ַ���������
//	//}
//	//for (int i = 1; i < n - 1; i++)
//	//{
//	//	if ((v[i] > v[i - 1] && v[i] > v[i + 1]) ||	(v[i] < v[i - 1] && v[i] < v[i + 1]))    //�ҵ�����򲨹�
//	//	{
//	//		++sum;
//
//	//		/* �ڶ��������ص� */
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
//	int ret = 1;/* 1�Ǹ���һ������ */
//
//	cin >> num;
//	arr.resize(num);
//	for (int i = 0; i < num; i++)
//		cin >> arr[i];
//
//	for (int i = 1; i < num - 1; ++i)
//	{
//		if ((arr[i - 1] > arr[i] && arr[i] < arr[i + 1]) || (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]))
//			/* �Ҳ�����߲��� */
//		{
//			ret++;
//			/* �˶εĺ��������������ܹ� */
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