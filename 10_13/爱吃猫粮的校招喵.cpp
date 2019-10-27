#include <string>
#include <vector>
#include <iostream>
#include <istream>
#include <algorithm>
using namespace std;
/*  
С����ϲ���������������� N ���������� i ������ p[i] ���������������뿪�ˣ����� H Сʱ�������

С�������Ծ��������������ٶ� K ����λ����/Сʱ����
ÿ��Сʱ��������ѡ��һ�����������гԵ� K ������������������ K ���������Ե���ѵ�����������
Ȼ����һСʱ�ڲ����ٳԸ����������

С����ϲ�������ԣ�����Ȼ���������˻���ǰ�Ե����е�������

������������ H Сʱ�ڳԵ�������������С�ٶ� K��K Ϊ��������
 

̰��  + ���ֲ���
������С��ʳ�ٶȣ� ����������� / ������Сʱ��
��������ʳ�ٶȣ����ѵ�������
��������֮����ֲ�����Сʵ�ʿ��н�ʳ�ٶȼ���
ע������һ��lower_bound�Ķ������⣬�������������������ֵ  ��Ҫ��Ӧ�޸Ķ��ֲ��Ҵ���*/
vector<int> arr;
int H, tmp, sum = 0, mmax = 0, res, mmin;

bool solve(int x, int H)
{
	int res = 0;
	for (int i = 0; i < arr.size(); i++) 
	{
		res += (arr[i] % x == 0) ? arr[i] / x : arr[i] / x + 1;/* ���ѳ����ĵ�ʱ�� */
	}
	return res <= H;
}

int main() {
	string line; 
	getline(cin, line);
	for(int n=0;n<line.size();++n)
	{
		arr.push_back((int)line[n]);
		mmax = max(mmax, (int)line[n]);/* ��������ʳ�ٶ� */
		sum += (int)line[n];
	}

	scanf("\n%d", &H);
	mmin = (sum % H == 0) ? sum / H : sum / H + 1;//������С��ʳ�ٶ�
	while (mmin < mmax) 
	{
		/* ���ַ� */
		res = (mmin + mmax) / 2;/* �м�ֵ */
		if (solve(res, H)) 
			mmax = res;//��������ʱ ���ұ߽���Ϊ�м�ֵ
		else
			mmin = res + 1;
		if (solve(mmin, H)) 
			break;//��߽�����ʱ ��ֹ
	}
	cout << mmin << endl;//���Ϊ��߽�
	system("pause");
	return 0;
}