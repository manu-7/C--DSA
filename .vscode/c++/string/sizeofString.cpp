
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	
	string str = "GeeksforGeeks";

	int i = 0;
	while (str[i]!='\0')    // "\0"  is null character;
		i++;
	cout << i << endl;

	return 0;
}
