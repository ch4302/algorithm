#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	vector<string> v;
	vector<string> v_res;
	string temp;
	cin >> n >> m;

	v.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++) {
		cin >> temp;

		if (binary_search(v.begin(), v.end(), temp)) {
			v_res.push_back(temp);
		}
	}
	
	sort(v_res.begin(), v_res.end());

	cout << v_res.size() << '\n';
	for (int i = 0; i < v_res.size(); i++) {
		cout << v_res[i].c_str() << '\n';
	}
}