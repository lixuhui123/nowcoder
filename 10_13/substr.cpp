#include <iostream>
#include <string>
using namespace std;
int main()
{
	string m_s;
	m_s = "11j11456789";
	int num = stoi(m_s.substr(1, 3));
	cout << num << endl;
	system("pause"); 
	return 0;
}