#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, C, D, sum1_s, sum2_s;
	long long sum1, sum2;
	cin >> A >> B >> C >> D;
	
	sum1_s = A + B;
	sum2_s = C + D;

	sum1 = stoll(sum1_s);
	sum2 = stoll(sum2_s);

	cout << sum1 + sum2;
}