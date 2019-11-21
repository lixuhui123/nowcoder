//#include <iostream>
//using namespace std;
//class LCA 
//{
//	/* 在一颗满二叉树当中按照层序赋值1,2，3,4,5...找出最近公共祖先 */
//public:
//	int getLCA(int a, int b)
//	{
//		/* 因为在这种情况下，它的父节点就是root=child/2,找到两个相等就可以了 */
//		while (a!=b)
//		{
//			if (a>b)
//			{
//				a /= 2;
//			}
//			else
//			{
//				b /= 2;
//			}
//		}
//		return a;
//	}
//};
//int main()
//{
//	
//	system("pause"); 
//	return 0;
//}
//
