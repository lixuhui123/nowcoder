// #include < string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int DeleteSpace(string s)
//{
//	int cnt = 1;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == ' ') cnt++;
//	}
//	return cnt;
//}
//
//vector<string> table = { "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2", "joker", "JOKER" };
//
//int Value(string s)
//{
//	int res;
//	if (s[0] == '1') res = 10;
//	else if (s[0] == '3') res = 3;
//	else if (s[0] == '4') res = 4;
//	else if (s[0] == '5') res = 5;
//	else if (s[0] == '6') res = 6;
//	else if (s[0] == '7') res = 7;
//	else if (s[0] == '8') res = 8;
//	else if (s[0] == '9') res = 9;
//	else if (s[0] == 'J') res = 11;
//	else if (s[0] == 'Q') res = 12;
//	else if (s[0] == 'K') res = 13;
//	else if (s[0] == 'A') res = 14;
//	else if (s[0] == '2') res = 15;
//	return res;
//}
//
//int mainreqwewtvgfr()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		string s1 = str.substr(0, str.find('-'));
//		string s2 = str.substr(str.find('-') + 1);//值得学习的亮点
//		int n1 = DeleteSpace(s1);
//		int n2 = DeleteSpace(s2);
//		string Joker = "joker JOKER";
//		string Poker = "345678910JQKA2";
//		if (s1 == Joker) cout << s1 << endl;
//		else if (s2 == Joker) cout << s2 << endl;
//		else if (n1 == n2)
//		{
//			string f1, f2;
//			//f1 = s1.substr(0, s1.find(" "));
//			//f1 = s2.substr(0, s2.find(" "));
//			int p1 = Value(s1);
//			int p2 = Value(s2);
//			//cout << p1 << endl;
//			//cout << p2 << endl;
//			//auto num1 = find(table.begin(), table.end(), f1);
//			//auto num2 = find(table.begin(), table.end(), f2);
//			if (p1 > p2) cout << s1 << endl;
//			else cout << s2 << endl;
//		}
//		else if (n1 == 4) cout << s1 << endl;
//		else if (n2 == 4) cout << s2 << endl;
//		else cout << "ERROR" << endl;
//		/* 值得学习的地方，首先逻辑非常清晰，肯定在做题之前经过充分的分析，预想好了每一个
//		模块的功能，给自己的启发是，做题之前先好好分析题意，抓住解题的特点，不要着急下笔
//		，没分析好就乱写，越写越乱，功夫花在研究题上，
//		技术方面；substr和find结合用的很好，if else if else 以前没咋用过，今天看到了它的
//		华丽用法，如果其中的某一个条件满足就执行，别的不会执行，这会提高效率*/
//	}
//	system("pause");
//	return 0;
//}