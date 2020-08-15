#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	if (str1.size() > str2.size()) cout << str2 << " " << str1;
	else if (str1.size() < str2.size()) cout << str1 << " " << str2;
	else {
		if (str1.compare(str2) == -1) cout << str1 << " " << str2;
		else if (str1.compare(str2) == 1) cout << str2 << " " << str1;
	}
}