#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string ioi;
	string s = "IOI";
	cin >> ioi;
	if (ioi.compare(s) == 0) cout << "IOI is the International Olympiad in Informatics.";
	else cout << "I don't care.";
}