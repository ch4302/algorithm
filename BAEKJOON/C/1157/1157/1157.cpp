#include <iostream>
using namespace std;

int main()
{
	int arr[26], max = 0, cnt = 0, idx;
	char max_alpha;
	fill_n(arr, 26, 0);
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 65 && str[i] <= 90) arr[str[i] - 65]++;
		else if (str[i] >= 97 && str[i] <= 122) arr[str[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == arr[i]) {
			cnt++;
			max_alpha = 65 + i;
		}
	}
	if (cnt != 1) cout << "?";
	else cout << max_alpha;
}