#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main() {
	long long length, b, c, x, sum = 0;
	
	scanf("%lld", &length);
	long long* arr = new long long[length];

	for (long long i = 0; i < length; i++) {
		scanf("%lld", &arr[i]);
	}
	cin >> b >> c;

	for (long long i = 0; i < length; i++) {
		long long t = abs(arr[i] - b);
		if(t % c == 0) x = t / c;
		else x = t / c + 1;
		
		if (arr[i] < b) sum += 1;
		else sum += x + 1;
	}
	printf("%lld", sum);
}