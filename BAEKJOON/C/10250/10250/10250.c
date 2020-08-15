#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, h, w, n, num_front, num_back;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		scanf("%d %d %d", &h, &w, &n);
		
		if (n % h == 0) {
			num_front = h;
			num_back = n / h;
		}
		else {
			num_front = n % h;
			num_back = n / h + 1;
		}

		if (num_back < 10) printf("%d0%d\n", num_front, num_back);
		else printf("%d%d\n", num_front, num_back);
	}
}