// using istringstream constructors.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int maindwfhyufd() {

	int n;
	char val[10] = {};
	string strvalues;

	strvalues = "888 320 512 750 lll";
	istringstream iss(strvalues, istringstream::in);

	for (n = 0; n < 5; n++)
	{
		iss >> val;
		cout << val << endl;
	}


	/*putchar('\n');
	char str[50] = {};
	scanf("\n%s", str);*/
	system("pause");
	return 0;
}
