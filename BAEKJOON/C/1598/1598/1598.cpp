#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int dis = abs((a - 1) / 4 - (b - 1) / 4) + abs((a - 1) % 4 - (b - 1) % 4);
	cout << dis;
}