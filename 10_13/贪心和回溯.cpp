////#include <iostream>
////using namespace std;
/////* Ð¡Ò×ÌøÌ¨½×	 */
////int stepSearch(int N, int M)
////{
////	if (N > M) 
////	{
////		return -1;
////	}
////	if (N == M)
////	{
////		return 0;
////	}
////	int res = 0;
////	for (int i = 2; i < N; i++) 
////	{
////		if (i*(N / i) == N)
////		{
////			res++;
////			if (stepSearch(N + N / i, M) != -1)
////			{
////				res += stepSearch(N + N / i, M);
////				return res;
////			}
////			else 
////			{
////				res--;
////			}
////		}
////	}
////	return -1;
////}
////
////int main() {
////	int N, M;
////	while (cin >> N >> M) {
////		cout << stepSearch(N, M) << endl;
////	}
////	return 0;
////}
//
// 
//
//#include <iostream>
//#include <vector>
//#include <climits>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int N, M;
//	while (cin >> N >> M) {
//		vector<int> steps(M + 1, INT_MAX);
//		steps[N] = 0;
//		for (int i = N; i <= M; i++) {
//			if (steps[i] == INT_MAX) {
//				continue;
//			}
//			for (int j = 2; (j*j) <= i; j++) {
//				if (i%j == 0) {
//					if (i + j <= M) {
//						steps[i + j] = min(steps[i] + 1, steps[i + j]);
//					}
//					if (i + (i / j) <= M) {
//						steps[i + (i / j)] = min(steps[i] + 1, steps[i + (i / j)]);
//					}
//
//				}
//
//			}
//		}
//		if (steps[M] == INT_MAX) {
//			steps[M] = -1;
//		}
//		cout << steps[M] << endl;
//	}
//	return 0;
//}