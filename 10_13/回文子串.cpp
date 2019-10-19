#include <iostream>
#include <string>
using namespace std;
class solution
{
 
		  int maxLen=0;

public:
	int  longestPalindrome1(string s) 
	{
		if (s.empty() || s.length() < 2) 
			return s.length();
		for (int i = 0; i < s.length(); i++) 
		{
			//考虑中心扩散的两种情况1:aba  和 2: bb
			findMaxPalindrome(s, i, i);
			findMaxPalindrome(s, i, i + 1);
		}
		return maxLen;
	}

	 void findMaxPalindrome(string s, int i, int j) 
	 {
		 /* while循环在本例中绝对比for更适合，因为中心扩展算法，要求从中间
		 向两边对比，一直到两个不相等为止，也就是说保证遍历过的都是回文串，
		 此时while循环不确定循环次数但是可以根据遍历条件自己跳出
		 其实程序说到根本，就是基础的控制语句，和执行顺序，还是要多做多看多想*/
		while (i >= 0 && j < s.length() && s[i] == s[j])
		{
			i--;//向左延伸
			j++;//向右延伸
			maxLen++;
		}
		//记录每个起始点扩展的回文串的最大长度
		/*if (maxLen < j - i - 1) 
		{
			start = i + 1;
			maxLen = j - i - 1;
		}*/
	 }

};
int main()
{
	string s;
	char tmp[55];
	cin >> tmp;
	int i = 0;
	while (tmp[i]!='\0')
	{
		s.push_back(tmp[i]);
		++i;
	}
	solution test;
	cout<<test.longestPalindrome1(s);
	system("pause"); 
	return 0;
}