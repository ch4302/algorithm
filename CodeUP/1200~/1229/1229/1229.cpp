#include <iostream>
using namespace std;

int main()
{
	double height, weight, std_weight, obesity;
	cin >> height >> weight;

	if (height < 150) std_weight = height - 100;
	else if (height >= 150 && height <= 160) std_weight = (height - 150) / 2 + 50;
	else std_weight = (height - 100) * 0.9;

	obesity = (weight - std_weight) * 100 / std_weight;

	if (obesity <= 10) cout << "정상";
	else if (obesity > 10 && obesity <= 20) cout << "과체중";
	else cout << "비만";
}