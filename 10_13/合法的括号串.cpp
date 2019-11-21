#include <string>
#include <iostream>
using namespace std;
class Parenthesis {
public:
	bool chkParenthesis(string A, int n)
	{
		int left = 0;
		int right = 0;
		 
		// write code here
		if (n % 2 != 0)
		{
			return false;
		}
		else
		{
			for (auto & i:A)
			{
				if (i=='(')
				{
					left++;
					continue;
				}
				if (i==')')
				{
					right++;
				} 
			}
			if (left+right==n)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
};
int maindascdsed()
{
	Parenthesis test;
	string st = ("((())))");
	cout<<test.chkParenthesis(st,7);
	system("pause"); 
	return 0;
}