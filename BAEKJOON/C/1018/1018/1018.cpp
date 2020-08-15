#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int res = 200;
	int cnt;
	
	// �迭 ����
	char arr[51][51];

	// �迭 �ʱ�ȭ
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	// ������ Ƚ���θ� 8 * 8 ũ�⸸ Ž���ϱ� ����
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			cnt = 0;
			// 8 * 8 ũ�� �߶󳻱�
			for (int r = i; r < i + 8; r++) {
				for (int c = j; c < j + 8; c++) {
					if ((r % 2) ^ (c % 2)) {
						if (arr[r][c] == 'W') cnt++;
					}
					else {
						if (arr[r][c] == 'B') cnt++;
					}
				}
			}
			// ü������ �� ���� ����� ���� �ֱ� ������ �� �� �ּڰ� ����
			res = min(res, cnt);
			res = min(res, 64 - cnt);
		}
	}

	cout << res << endl;
}