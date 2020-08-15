// hint: n�� 10000���� ���ͼ� long long�� �ѱ� ������ ���ڿ� ����ؾ� �Ѵٰ� ��.
#include <iostream>
using namespace std;

int f[10000];

int fib(int n) {

	if (n == 0) return 0;
	if (n == 1) return 1;
	else if (f[n] != -1) return f[n];
	else {
		f[n] = fib(n - 1) + fib(n - 2);
		return f[n];
	}
}

int main()
{
	fill_n(f, 10000, -1);
	int n;
	cin >> n;
	cout << fib(n);
}