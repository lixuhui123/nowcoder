#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int deal(string a, string b) {
	int n = a.size(), m = b.size();
	vector<vector<int>>arr(n + 1, vector<int>(m + 1, 0));
	arr[0][0] = 0;//arr[x][y]代表将a字符串前x个字符修改成b字符串前y个字符
	for (int i = 1; i <= m; ++i)
	{
		arr[0][i] = i;
	}
	for (int i = 1; i <= n; ++i)
	{
		arr[i][0] = i;
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (a[i - 1] == b[j - 1])
				arr[i][j] = arr[i - 1][j - 1];
			else
				arr[i][j] = min(min(arr[i - 1][j - 1] + 1, arr[i - 1][j] + 1), arr[i][j - 1] + 1);
		}
	}
	return arr[n][m];
}
int main() {
	string a, b;
	while (cin >> a >> b)
		cout << deal(a, b) << endl;
	return 0;
}

