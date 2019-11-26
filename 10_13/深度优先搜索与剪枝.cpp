//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct lxh 
//{
//
//	int flag = 0, sum = 0, add = 0;
//	lxh(int i, int s, int m) : flag(i), sum(s), add(m) {};
//
//};
//int main() 
//{
//
//	int n;
//	while (cin >> n) {
//		vector<int> da(n);
//		for (int i = 0; i < n; cin >> da[i], ++i);
//		sort(da.begin(), da.end());
//		queue<lxh> ns;
//		ns.push(lxh(0, da[0], da[0]));
//		int res = 0;
//		while (!ns.empty()) {
//		lxh sr = ns.front();
//			ns.pop();
//			for (int i = sr.flag + 1; i < n; ++i) 
//			{
//
//				if (i == sr.flag + 1 || da[i] != da[i - 1]) 
//				{
//					int s = sr.sum + da[i], m = sr.add*da[i];
//					if (s > m) {
//						res++;
//						ns.push(lxh(i, s, m));
//					}
//					else
//					{
//						break;
//					}
//				}
//			}
//
//		}
//
//		cout << res << endl;
//
//	}
//
//	return 0;
//
//}