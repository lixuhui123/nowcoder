//#include <string>
//#include <vector>
//#include <iostream>
//#include <istream>
//#include <algorithm>
//#include <sstream>
//using namespace std;
//
//vector<int> arr;
//int H, tmp, sum = 0, mmax = 0, res, mmin;
//
//bool solve(int x, int H)
//{
//	int res = 0;
//	for (int i = 0; i < arr.size(); i++) 
//	{
//		res += (arr[i] % x == 0) ? arr[i] / x : arr[i] / x + 1;
//	}
//	return res <= H;
//}
//
//int mainfdsrfdfagdfg() 
//{
//	/* ��������뷽ʽ */
//	string line; 
//	getline(cin, line);
//	istringstream iss(line);
//	while (iss >> tmp) 
//	{ 
//		arr.push_back(tmp);
//		mmax = max(mmax, tmp);
//		sum += tmp;
//	}
//	scanf("\n%d", &H);
//	mmin = (sum % H == 0) ? sum / H : sum / H + 1;
//	while (mmin < mmax) {
//		res = (mmin + mmax) / 2;
//		if (solve(res, H)) mmax = res;//��������ʱ ���ұ߽���Ϊ�м�ֵ
//		else mmin = res + 1;
//		if (solve(mmin, H)) break;//��߽�����ʱ ��ֹ
//	}
//	cout << mmin << endl;//���Ϊ��߽�
//	system("pause");
//	return 0;
//}