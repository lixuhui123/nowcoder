# if 0
#include <iostream>
using namespace std;
bool sushu(int n)
{
	if (n == 1 || n == 2)
		return true;
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n%i == 0)
				return false;
		}
		return true;
	}
}
int main()
{
	int n;
	while (cin >> n)
	{
		if (n % 2 != 0)
			return 0;
		int start = 0;
		int end = 0;
		for (int i = 1; i <= n / 2; i++)
		{
			if (sushu(i) && sushu(n - i))
			{
				if (i > start)
				{
					start = i;
					end = n - i;
				}
			}
		}
		cout << start << "\n" << end << endl;
	}
	return 0;
}
#else 


#include <iostream>
using namespace std;
/* 对数的玩法还需要再加深 */
bool issushu(int tmp)
{
	if (tmp==1||tmp==2)
	{
		return true;
	}
	else
	{
		for (int i=2;i<tmp;++i)
		{
			if (tmp%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
int mainfdsdgf()
{
	int res = 0;
	int i = 0;
	while (cin>>res)
	{
		/* 首先实现判断一个数是不是素数 */
		int start=0;
		int end=0;
		if (res%2!=0)
		{
			return 0;
		}
		for (i=1;i <= res/2;++i)
		{
			if (issushu(i)&&issushu(res-i))
			{
				
				if (i>start)
				{
					start = i;
					end = res - i;
				}
				
			}
		}
		cout << start << endl << end<<endl;
	}
	system("pause"); 
	return 0;
}
#endif
