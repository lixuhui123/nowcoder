//#include <iostream>
//using namespace std;
//int main()
//{
//	unsigned int temp = -1;
//	unsigned char c = -2;
//	/* 没有说明是无符号类型的时候，最高位默认是符号位 
//	为什么要有类型说名符呢，因为它决定了操作系统从内存中读入的二进制长度
//	整形提升补得是符号位，是正数就补0 是负数就补1，*/
//
//
//	cout << temp<<endl;
//	cout << (int)c << endl;
//	/* 在32 位系统下常数默认的类型是int */
//	/*输出为什么要指定长度呢，因为要告诉操作系统读多少位，以及有没有符号位  */
//	int t = 1;
//	printf("%d\n", (*(char *)&t));
//	system("pause"); 
//	return 0;
//}