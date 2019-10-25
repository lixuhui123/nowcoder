/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	int ans = 0;
	int len = s.length();
	vector<int> num;
	vector<char> op;
	if (s[0] <= '9' && s[0] >= '0') {
		op.push_back('+');
	}
	for (int i = 0; i < len;) {
		if (s[i] == '-' || s[i] == '+')
			op.push_back(s[i++]);
		else {
			int temp = 0;
			while (s[i] <= '9' && s[i] >= '0') {
				temp = temp * 10 + (s[i] - '0');
				i++;
			}
			num.push_back(temp);
		}
	}
	for (int i = 0; i < op.size(); i++) {
		if (op[i] == '-')
			ans -= num[i];
		else
			ans += num[i];
	}
	cout << ans << endl;
	system("pause");
	return 0;
}*/

 
#include <iostream>
#include <string>
using namespace std;

int mainujklgdr() {
	//通过以上两段代码的对比，深切的感受到，某些函数并不知道或者不能熟练运用
	//还是要多刷题多看别人的代码找出自己的不足
	int ans = 0, i = 0, start = 0, end = 0;
	bool plus = true;
	string str;
	cin >> str;
	if (str[0] == '-') 
	{
		end++;
		start++;
		plus = false;
	}
	while (i <= str.size())
	{
		if (str[i] == '-' || str[i] == '+' || i == str.size())
		{
			end = i;

		}
		if (end > start)
		{
			int num = stoi(str.substr(start, end - start));
			if (start >= 1)
			{
				plus = str[start - 1] == '+';
			}
			ans = plus == true ? ans + num : ans - num;
			start = end + 1;
		}
		i++;
	}
	cout << ans;
	system("pause");
	return 0;
}