#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int arr[1000000];

int main()
{
	int num, max, min;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	min = arr[0], max = arr[0];
	for (int i = 0; i < num; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	printf("%d %d", min, max);
}