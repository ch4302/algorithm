#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (c >= a + b) cout << "�ﰢ���ƴ�";
	else if (a == b && b == c && c == a) cout << "���ﰢ��";
	else if (a == b  || c == a || b == c) cout << "�̵�ﰢ��";
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2)) cout << "�����ﰢ��";
	else if (c < a + b) cout << "�ﰢ��";
}