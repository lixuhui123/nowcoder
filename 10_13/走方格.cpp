//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;/* ºá */
//	int m;/* Êú */
//	while (cin>>n>>m)
//	{
//		int arr[100][100] = { 1 };
//		/* ÌîÊı×é */
//		int i = 0;
//		for (i=0;i<100;++i)
//		{
//			arr[0][i] = (i + 2);
//			arr[i][0] = (i + 2);
//		}
//
//		for (int i=1;i<100;++i)
//		{
//			for (int j=1;j<100;++j)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
//			}
//		}
//        cout << arr[m-1][n-1]<<endl;
//	}
//	
//	system("pause"); 
//	return 0;
//}