
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*������ö�̬�滮���
 *����������һ��˼·��
 *���ȴ���һ����ά���鱣�湫���Ӵ����ȣ��Խ�С���ĳ���+1Ϊ�������ϴ󴮵ĳ���+1Ϊ��������ʼֵȫΪ0
 *���Ǵӽ�С���ĵ�һ���ַ���ʼ�ڽϴ���ȫ������һ�飬����и��ַ�����������Ӧλ�õ�ֵ��ֱ����С�ַ���������
 *	���·�ʽΪ[i][j] = [i-1][j-i]+1;�ڴ˹����в��ϸ�������Ӵ��ĳ���max����ʼλ��start
 *���ӽ�С����startλ�ô�ӡ����Ϊmax���Ӵ�����*/

void deal(string str1, string str2)
{
	int l1 = str1.size(), l2 = str2.size(), max = 0, start = 0;
	int arr[100][100] = { 0 };
	//vector <vector<int>> arr(l1 + 1, vector<int>(l2 + 1, 0)); //����Ҫ+1����Ϊ�Ǵ�[0][0]��[l1][l2],��ʼȫΪ0
	for (int i = 1; i <= l1; ++i) //��ΪҪͨ��[i-1][j-1]������[i][j]�����������[1][1]��ʼ������Խ��
	{
		for (int j = 1; j <= l2; ++j)
		{
			if (str1[i - 1] == str2[j - 1]) //����ַ���ȣ�����¡�����λ�õĹ����Ӵ����ĳ���
				arr[i][j] = arr[i - 1][j - 1] + 1;
			if (arr[i][j] > max) //������󹫹��Ӵ����ȼ���ʼλ��
			{
				max = arr[i][j];
				start = i - max;
			}
		}
	}
	cout << str1.substr(start, max) << endl;
}

int maindcsasc()
{
	string str1, str2;
	while (cin>>str1>>str2)
	{
		if (str1.size() < str2.size()) //�ҵ��϶̵��ַ�����Ϊ�����str1
		{
			deal(str1, str2);
		}
		else
		{
			deal(str2, str1);
		}
	}
	return 0;
}

