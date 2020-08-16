#include <iostream>
using namespace std;

int main() {
	int x_t[3], y_t[3], max_x = -1, max_y = -1, min_x = 1001, min_y = 1001;
	int cnt_xmax = 0, cnt_xmin = 0, cnt_ymax = 0, cnt_ymin = 0;
	for (int i = 0; i < 3; i++) {
		cin >> x_t[i] >> y_t[i];
		if (x_t[i] > max_x) max_x = x_t[i];
		if (x_t[i] < min_x) min_x = x_t[i];
		if (y_t[i] > max_y) max_y = y_t[i];
		if (y_t[i] < min_y) min_y = y_t[i];
	}
	
	for (int i = 0; i < 3; i++) {
		if (x_t[i] == max_x) cnt_xmax++;
		else cnt_xmin++;
		if (y_t[i] == max_y) cnt_ymax++;
		else cnt_ymin++;
	}

	cout << (cnt_xmax < cnt_xmin ? max_x : min_x) << " " << (cnt_ymax < cnt_ymin ? max_y : min_y);

	
}