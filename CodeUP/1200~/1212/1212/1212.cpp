#include <iostream>
using namespace std;

int main()
{
	int num_arr[3], temp;

	for (int i = 0; i < 3; i++) {
		cin >> num_arr[i];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (num_arr[i] < num_arr[j]) {
				temp = num_arr[i];
				num_arr[i] = num_arr[j];
				num_arr[j] = temp;
			}
		}
	}
	
	if (num_arr[0] < num_arr[1] + num_arr[2]) cout << "yes";
	else cout << "no";
}