#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num_arr[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num_arr[i]);
	}

	for (int i = 0; i < 3; i++) {
		int cnt_u = 0, cnt_d = 0;
		for (int j = 0; j < 3; j++) {
			if (num_arr[i] > num_arr[j]) cnt_u++;
			else if (num_arr[i] < num_arr[j]) cnt_d++;
		}
		if (cnt_u == cnt_d) {
			printf("%d", num_arr[i]);
			return 0;
		}
	}
}
