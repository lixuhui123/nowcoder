//#include <iostream>
//#include <vector>
//using namespace std;
///* 有一个排过序的数组，包含n个整数，但是这个数组向左进行了一定长度的移位，
//例如，原数组为[1,2,3,4,5,6]，向左移位5个位置即变成了[6,1,2,3,4,5],现在对于移位
//后的数组，需要查找某个元素的位置。请设计一个复杂度为log级别的算法完成这个任务。
//给定一个int数组A，为移位后的数组，同时给定数组大小n和需要查找的元素的值x，请返回x的位置(位置从零开始)。保证数组中元素互异。
//
//二分查找的复杂度就是longn
//*/
//int findBreakPoint(const vector<int> &src)
//{
//	int left = 0, right = src.size() - 1;
//	int mid;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (src[mid] > src[mid + 1])
//		{
//			return mid + 1;
//		}
//
//		if (src[left] > src[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//}
//
//int bfind(const vector<int> &src, int bp, int n)
//{
//	int size = src.size();
//	int left = bp, right = bp + size - 1;
//	int mid;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (src[mid % size] > n)
//		{
//			right = mid - 1;
//		}
//		else if (src[mid % size] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid % size;
//		}
//	}
//}
//
//int main()
//{
//	vector<int> src{ 4, 5, 6, 7, 8, 9, 1, 2, 3 };
//
//	int bp = findBreakPoint(src);/* 二分寻找分割点 */
//	cout << bp<<endl;
//	cout << bfind(src, bp, 6);
//	system("pause");
//	return 0;
//}
