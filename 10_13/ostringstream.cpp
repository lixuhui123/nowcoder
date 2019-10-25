// using ostringstream constructors.
#include <iostream>
#include <sstream>
using namespace std;

int mainhfnbcvfsr() {

	ostringstream oss(ostringstream::out);

	oss << "This is a test\n";
	cout << oss.str();
	//cout << oss.str();
	system("pause");
	return 0;
}
