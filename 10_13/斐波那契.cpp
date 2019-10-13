#include <iostream>
#include <vector>

using namespace std;
//递归的方式计算斐波那契数
vector<int>  v;
void push_fo()
{

	int i = 0;
	int tmp;
	for (i = 0; i < 20; ++i)
	{
		FeiBo(i);
	}
}
int FeiBo(int f)
{

	int n = 0;
	if (0 == f)
		printf("0的斐波那契数是0\n");
	else if (1 == f || 2 == f)
		n = 1;
	else n = FeiBo(f - 2) + FeiBo(f - 1);
	return n;
}

int main()
{
	  
	system("pause"); 
	return 0;
}
 
 
/* 10 0000 0111 / 3*/
