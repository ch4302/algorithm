#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int day;
	int math, kor, math_r, kor_r;

	cin >> day >> kor >> math >> kor_r >> math_r;
	int d_math = math % math_r == 0 ? math / math_r : math / math_r + 1;
	int d_kor = kor % kor_r == 0 ? kor / kor_r : kor / kor_r + 1;
	cout << day - max(d_math, d_kor);
}