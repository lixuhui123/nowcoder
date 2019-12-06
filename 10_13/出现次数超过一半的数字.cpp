//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//
//	 /* sort三个参数存在问题 */
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		sort(numbers.begin(), numbers.end());
//		for (auto & i:numbers)
//		{
//			cout << i << ' ';
//		}
//		cout << endl;
//		if (numbers.size()==0)
//		{
//			return 0;
//		}
//		/*if (numbers.size() == 1)
//		{
//			return numbers[0];
//		}*/
//		int start = 0;/* 记录最长的子串起始位置，随时更新 */
//		int maxlen = 0;/* 记录最长子串的长度，随时更新 */
//		int tempindex = 0;
//		int templen = 0;
//		int tempdel = 0;
//		/* 在string里面找，遍历string */
//		int _strlen = numbers.size();
//		int i = 0;
//		for (i = 0; i < _strlen; ++i)
//		{
//			tempindex = i;
//			++i;
//			while ((i < _strlen) && (numbers[i-1] == numbers[i])  )
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
//			return numbers[start+1];
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