#include <iostream>
using namespace std;
class rfobei
{
public:
	int fobei(int n)
	{
		if (n==0)
		{
			return 0;
		}
		if (n==1)
		{
			return 1;
		}
		else
		{
			return fobei(n - 1) + fobei(n - 2);
		}
	}
};
int mainsdfgh()
{
	rfobei test;
	cout<<test.fobei(39);

	system("pause"); 
	return 0;
}