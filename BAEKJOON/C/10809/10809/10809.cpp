#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	int arr_alpha[26];
	fill_n(arr_alpha, 26, -1);
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		if(arr_alpha[str[i] - 97] == -1) arr_alpha[str[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr_alpha[i] << " ";
	}
}