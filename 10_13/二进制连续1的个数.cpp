#include <iostream>
using namespace std;
#include <vector>
/*  */
int maindkjhgfdsasdfgh()
{
	int num = 0;
	int byte = 0;
	vector<int > bar;
	while (cin>>num)
	{
		/* 求一个数的二进制将每一位保存到vector中 */
		for (int i=0;i<32;++i)
		{
			byte = (num >> i) & 1;
			bar.push_back(byte);
		}
		/*for (auto & j:bar)
		{
			cout << j << ' ';
		}*/
		int len = 0;
		int maxlen = 0;
		for (int i = 0; i < 32; ++i)
		{
			if (bar[i]==1)
			{
				len++;
			}
			else
			{
				if (len>=maxlen)
				{
					maxlen = len;
					len = 0;
				}
			}
		}

		cout << maxlen << endl;
		bar.clear();



	}
	system("pause"); 
	return 0;
}