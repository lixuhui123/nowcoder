#include <string>
#include <vector>
#include <iostream>
#include <istream>
#include <algorithm>
using namespace std;
/*  
小招喵喜欢吃喵粮。这里有 N 堆喵粮，第 i 堆中有 p[i] 粒喵粮。喵主人离开了，将在 H 小时后回来。

小招喵可以决定她吃喵粮的速度 K （单位：粒/小时）。
每个小时，她将会选择一堆喵粮，从中吃掉 K 粒。如果这堆喵粮少于 K 粒，她将吃掉这堆的所有喵粮，
然后这一小时内不会再吃更多的喵粮。

小招喵喜欢慢慢吃，但仍然想在喵主人回来前吃掉所有的喵粮。

返回她可以在 H 小时内吃掉所有喵粮的最小速度 K（K 为整数）。
 

贪心  + 二分查找
理论最小进食速度： 所有喵粮求和 / 给定的小时数
理论最大进食速度：最大堆的喵粮数
在这两个之间二分查找最小实际可行进食速度即可
注：这是一个lower_bound的二分问题，即求最左边满足条件的值  需要相应修改二分查找代码*/
vector<int> arr;
int H, tmp, sum = 0, mmax = 0, res, mmin;

bool solve(int x, int H)
{
	int res = 0;
	for (int i = 0; i < arr.size(); i++) 
	{
		res += (arr[i] % x == 0) ? arr[i] / x : arr[i] / x + 1;/* 爆搜出消耗的时间 */
	}
	return res <= H;
}

int main() {
	string line; 
	getline(cin, line);
	for(int n=0;n<line.size();++n)
	{
		arr.push_back((int)line[n]);
		mmax = max(mmax, (int)line[n]);/* 理论最大进食速度 */
		sum += (int)line[n];
	}

	scanf("\n%d", &H);
	mmin = (sum % H == 0) ? sum / H : sum / H + 1;//理论最小进食速度
	while (mmin < mmax) 
	{
		/* 二分法 */
		res = (mmin + mmax) / 2;/* 中间值 */
		if (solve(res, H)) 
			mmax = res;//满足条件时 将右边届设为中间值
		else
			mmin = res + 1;
		if (solve(mmin, H)) 
			break;//左边界满足时 终止
	}
	cout << mmin << endl;//结果为左边界
	system("pause");
	return 0;
}