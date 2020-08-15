#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num <= 10) cout << "정상";
	else if (num <= 20) cout << "과체중";
	else cout << "비만";
}