#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (c >= a + b) cout << "»ï°¢Çü¾Æ´Ô";
	else if (a == b && b == c && c == a) cout << "Á¤»ï°¢Çü";
	else if (a == b  || c == a || b == c) cout << "ÀÌµîº¯»ï°¢Çü";
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2)) cout << "Á÷°¢»ï°¢Çü";
	else if (c < a + b) cout << "»ï°¢Çü";
}