#include <iostream>
#include<vector>
using namespace std;
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		/* 判断五子棋 */
		int i = 0;
		int j = 0;
		int flagl = 1;
		for (i=0;i<board.size();++i)
		{
			flagl = 1;
			for (j=0;j<board[i].size();++j)
			{
				if (board[i][j]==1)
				{
					continue;
				}
				else
				{
					flagl = 0;
					break;
				}
			}
			if (flagl==1)
			{
				break;
			}
			if (i== board.size()-1)
			{
				flagl = 0;
			}
			 
		}
		if (flagl==1)
		{
			return true;
		}

		int flagb = 1;
		for (i = 0; i < board.size(); ++i)/*数组索引超出范围 i < board[i].size()*/
		{
			flagb = 1;
			for (j = 0; j < board.size(); ++j)
			{
				if (board[j][i] == 1)
				{
					continue;
				}
				else
				{
					flagb = 0;
					break;
				}
			}
			if (flagb == 1)
			{
				break;
			}
			if (i == board.size() - 1)
			{
				flagb = 0;
			}
		}
		if (flagb==1)
		{
			return true;
		}
		/* 判断对角线左 */
		int flagx = 1;
		if (board[0].size()==board.size())
		{
			/* 判断方阵 */
			for (i=0;i<board.size();++i)
			{
				if (board[i][i]==1)
				{
					continue;
				}
				else
				{
					flagx = 0;
					break;
				}
			}
		}
		if (flagx==1)
		{
			return true;
		}
		int flagy = 1;

		if (board[0].size() == board.size())
		{
			/* 判断方阵 */
			j = board.size() - 1;
			for (i=0;i<board.size();++i)
			{
				 if (board[i][j]==1)
				 {
					 continue;
				 }
				 else
				 {
					 flagy = 0;
					 break;
				 }
				 j--;
			}
			 
		}
		if (flagy == 1)
		{
			return true;
		}
		return false;
	}
};
int mainklhfdsfghj()
{
	/* 五子棋 */
	Board test;
	int arr1[3] = { 1,0,1 };
	int arr2[3] = { 1,-1,-1 };
	int arr3[3] = { 1,-1,0 };
	vector<vector<int> > t;
	vector<int> t1(arr1, arr1 + 3);
	vector<int> t2(arr2, arr2 + 3);
	vector<int> t3(arr3, arr3 + 3);
	t.push_back(t1);
	t.push_back(t2);
	t.push_back(t3);
	cout<<test.checkWon(t);
	 

	system("pause"); 
	return 0;
}