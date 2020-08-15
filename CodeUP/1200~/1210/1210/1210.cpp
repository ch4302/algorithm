#include <iostream>
using namespace std;

int main()
{
	int num_arr[5] = { 400, 340, 170, 100, 70 };
	int num1, num2;

	cin >> num1 >> num2;
	if (num_arr[num1 - 1] + num_arr[num2 - 1] <= 500) cout << "no angry";
	else cout << "angry";

}