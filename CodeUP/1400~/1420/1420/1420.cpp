#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<pair<string, int> >arr;
	string name[50];
	int n, sc[50], min = 0, idx = 0, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name[i] >> sc[i];
		arr[i] = make_pair(name[i], sc[i]);
	}
	sort(arr.begin(), arr.end());
	arr.front();
}