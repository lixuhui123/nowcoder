#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
using namespace std;
int mainnhdvzdvsr()
{
	char str[] = "- This, a sample string.";
	char * pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(nullptr, " -.,");
	}


	/*string ok;
	ok = "- This, a sample string.";
	char* pch=ok.c_str();
	pch = strtok(pch, " ,.-");*/
	/* strtok���ַ�������в����� */
	system("pause");
	return 0;
}
