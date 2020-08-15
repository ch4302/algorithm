#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if ((float)a / b > (float)c / d) cout << ">";
	else if ((float)a / b < (float)c / d) cout << "<";
	else cout << "=";
}