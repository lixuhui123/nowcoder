#include <iostream>
#include <string>
using namespace std;
class solution
{
 
		  int maxLen=0;

public:
	int  longestPalindrome1(string s) 
	{
		if (s.empty() || s.length() < 2) 
			return s.length();
		for (int i = 0; i < s.length(); i++) 
		{
			//����������ɢ���������1:aba  �� 2: bb
			findMaxPalindrome(s, i, i);
			findMaxPalindrome(s, i, i + 1);
		}
		return maxLen;
	}

	 void findMaxPalindrome(string s, int i, int j) 
	 {
		 /* whileѭ���ڱ����о��Ա�for���ʺϣ���Ϊ������չ�㷨��Ҫ����м�
		 �����߶Աȣ�һֱ�����������Ϊֹ��Ҳ����˵��֤�������Ķ��ǻ��Ĵ���
		 ��ʱwhileѭ����ȷ��ѭ���������ǿ��Ը��ݱ��������Լ�����
		 ��ʵ����˵�����������ǻ����Ŀ�����䣬��ִ��˳�򣬻���Ҫ�����࿴����*/
		while (i >= 0 && j < s.length() && s[i] == s[j])
		{
			i--;//��������
			j++;//��������
			maxLen++;
		}
		//��¼ÿ����ʼ����չ�Ļ��Ĵ�����󳤶�
		/*if (maxLen < j - i - 1) 
		{
			start = i + 1;
			maxLen = j - i - 1;
		}*/
	 }

};
int main()
{
	string s;
	char tmp[55];
	cin >> tmp;
	int i = 0;
	while (tmp[i]!='\0')
	{
		s.push_back(tmp[i]);
		++i;
	}
	solution test;
	cout<<test.longestPalindrome1(s);
	system("pause"); 
	return 0;
}