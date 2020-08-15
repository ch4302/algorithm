// hint: n이 10000까지 들어와서 long long을 넘기 때문에 문자열 사용해야 한다고 함.
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