#if 0
#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	int x, y;

	int suba = 4 - (a % 4 ? a % 4 : 4);
	int subb = 4 - (b % 4 ? b % 4 : 4);
	x = a + suba;
	y = b + subb;

	int sum = x * y / 2;

	sum -= suba * (x / 2) + subb * (y / 2);

	if (suba == 0 || subb == 0)
	{
		//do nothing
	}
	else if (suba == 1 && subb == 1)
	{
		sum++;
	}
	else if (suba == 1 || subb == 1)
	{
		sum += 2;
	}
	else if (suba == 3 && subb == 3)
	{
		sum += 5;
	}
	else
	{
		sum += 4;
	}

	cout << sum;
	system("pause");
	return 0;
}
#else if

#include <iostream>
 
using namespace std;
int mainrqaewsfaef()
{
	int w;/* 长 */
	int h;/* 宽 */
	int des=0;
	cin >> w >> h;
	int arr[100][100] = { 0 };
	/* 填二维数组 */
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<w;j+=2)
		{
			if ((j%4)==0)
			{
				arr[i][j +1] = 1;
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j + 1] = 0;
				arr[i][j] = 0;
			}

		}
	}
	for (int i = 2; i < h; i+=4)
	{
		for (int j = 0; j < w; j += 2)
		{
			if ((j % 4) == 0)
			{
				arr[i][j + 1] =0;
				arr[i + 1][j + 1] = 0;
				arr[i][j] = 0;
				arr[i + 1][j] = 0;
			}
			else
			{
				arr[i][j + 1] = 1;
				arr[i + 1][j + 1] = 1;
				arr[i][j] = 1;
				arr[i + 1][j] = 1;
			}

		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			 if (arr[i][j]==1)
			 {
				 des++;
			 }
		}
	}
	cout << des<<endl;
	system("pause"); 
	return 0;
}
#endif