//#include <iostream>
//#include <string>
//using namespace std;
///* ��Ϊ���ԡ���̬�滮���⡣����������ִ��ĳ���maxlen����������ִ�����ʼλ��start��
//��ʱ��������ִ�����ʼλ��tempindex����ʱ��������ִ��ĳ���templen�����ҵ���һ�����֣�
//����Ϊ��ʼλ���ҳ���ǰ����������ִ��ĳ���templen����templen>maxlen��
//�͸�����������ִ�����ʼλ�úͳ��ȡ������substr(start,maxlen)����ȡ����������ִ�����������ɡ�
//  */
//void deal_max_len()
//{
//	string line ;
//	getline(cin, line);
//
//	int start = 0;/* ��¼����Ӵ���ʼλ�ã���ʱ���� */
//	int maxlen = 0;/* ��¼��Ӵ��ĳ��ȣ���ʱ���� */
//	int tempindex = 0;
//	int templen = 0;
//	int tempdel=0;
//	/* ��string�����ң�����string */
//	int _strlen = line.length();
//	int i = 0;
//	for (i=0;i<_strlen;++i)
//	{
//		if (line[i]>='0' && line[i]<='9')
//		{
//			tempindex = i;
//			++i;
//			while (line[i] >= '0' && line[i] <= '9')
//			{
//					tempdel = i;
//                    ++i;
//			}
//			templen = tempdel - tempindex;
//			if (templen>maxlen)
//			{
//				start = tempindex;
//				maxlen = templen+1;
//			}
//		}
//	}
//	cout << line.substr(start, maxlen);
//}
//int main()
//{
//	deal_max_len();
//	system("pause"); 
//	return 0;
//}