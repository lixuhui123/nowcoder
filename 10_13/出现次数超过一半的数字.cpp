//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//
//	 /* sort���������������� */
//	int MoreThanHalfNum_Solution(vector<int> gifts)
//	{
//		sort(gifts.begin(), gifts.end());
//		//for (auto & i:gifts)
//		//{
//		//	cout << i << ' ';
//		//}
//		cout << endl;
//		if (gifts.size()==0)
//		{
//			return 0;
//		}
//		/*if (gifts.size() == 1)
//		{
//			return gifts[0];
//		}*/
//		int start = 0;/* ��¼����Ӵ���ʼλ�ã���ʱ���� */
//		int maxlen = 0;/* ��¼��Ӵ��ĳ��ȣ���ʱ���� */
//		int tempindex = 0;
//		int templen = 0;
//		int tempdel = 0;
//		/* ��string�����ң�����string */
//		int _strlen = gifts.size();
//		int i = 0;
//		for (i = 0; i < _strlen; ++i)
//		{
//			tempindex = i;
//			++i;
//			while ((i < _strlen) && (gifts[i-1] == gifts[i])  )
//			{
//				
//				++i;
//				tempdel = i;
//			}
//			templen = tempdel - tempindex;
//			if (templen > maxlen)
//			{
//				start = tempindex;
//				maxlen = templen +1;
//			}
//		}
//		//cout << start << " " << maxlen << endl;
//		int middle = _strlen / 2+1;
//		if (middle <= maxlen)
//		{
//			return gifts[start+1];
//		}
//		else
//		{
//			return 0;
//		}
//		return 0;
//	}
//	
//};
//int main()
//{
//	Solution test;
//	int temp[50] = { 1 ,2,3,2,2};
//	vector<int> v(temp,temp+5);
//	cout<<test.MoreThanHalfNum_Solution(v);
//	system("pause"); 
//	return 0;
//}