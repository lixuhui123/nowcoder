//#include <iostream>
//#include <vector>
//using namespace std;
///* ��һ���Ź�������飬����n����������������������������һ�����ȵ���λ��
//���磬ԭ����Ϊ[1,2,3,4,5,6]��������λ5��λ�ü������[6,1,2,3,4,5],���ڶ�����λ
//������飬��Ҫ����ĳ��Ԫ�ص�λ�á������һ�����Ӷ�Ϊlog������㷨����������
//����һ��int����A��Ϊ��λ������飬ͬʱ���������Сn����Ҫ���ҵ�Ԫ�ص�ֵx���뷵��x��λ��(λ�ô��㿪ʼ)����֤������Ԫ�ػ��졣
//
//���ֲ��ҵĸ��ӶȾ���longn
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
//	int bp = findBreakPoint(src);/* ����Ѱ�ҷָ�� */
//	cout << bp<<endl;
//	cout << bfind(src, bp, 6);
//	system("pause");
//	return 0;
//}
