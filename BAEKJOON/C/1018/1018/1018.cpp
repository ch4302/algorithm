#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int res = 200;
	int cnt;
	
	// 배열 생성
	char arr[51][51];

	// 배열 초기화
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	// 적절한 횟수로만 8 * 8 크기만 탐색하기 위해
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			cnt = 0;
			// 8 * 8 크기 잘라내기
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
			// 체스판은 두 가지 경우의 수가 있기 때문에 두 번 최솟값 수행
			res = min(res, cnt);
			res = min(res, 64 - cnt);
		}
	}

	cout << res << endl;
}