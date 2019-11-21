//#include <iostream>
//#include <vector>
//using namespace std;
//int findBreakPoint(const vector<int> & src)
//{
//	int left = 0;
//	int right = src.size() - 1;
//	int mid;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (src[mid]>src[mid+1])
//		{
//			return mid + 1;
//		}
//		if (src[left]>src[mid])
//		{
//			right = mid - 1;/* Ïò×ó±ßÕÒ */
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	//return mid;
//}
//
//int bfind(const vector<int> & src, int bp, int n)
//{
//	int size = src.size();
//	int left = bp, right = bp + size - 1;
//	int mid;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (src[mid%size]>n)
//		{
//			right = mid - 1;
//		}
//		else if (src[mid%size]<n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid % size;
//		}
//	}
//}
//int main()
//{
//	vector<int> src{ 7,8,9,1,2,3,4,5,6 };
//	int bp=findBreakPoint(src);
//	cout << bfind(src, bp, 1);
//	system("pause"); 
//	return 0;
//}