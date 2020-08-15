#define MAX_N 1000000
#include <iostream>
#include <math.h>
using namespace std;

unsigned char sieve[(MAX_N + 7) / 8];
// k�� �Ҽ����� Ȯ���Ѵ�.
inline bool isPrime(int k) {
	return sieve[k >> 3] & (1 << (k & 7));
}

// k�� �Ҽ��� �ƴ϶�� ǥ���Ѵ�.
inline void setComposite(int k) {
	sieve[k >> 3] &= ~(1 << (k & 7));
}

// ��Ʈ����ũ�� ����ϴ� �����佺�׳��� ü�� ����
// �� �Լ��� �����ϰ� �� ��, isPrime�� �̿��� �� ���� �Ҽ����� �� �� �ִ�.
void eratosthenes() {
	memset(sieve, 255, sizeof(sieve));
	setComposite(0);
	setComposite(1);
	int sqrtn = int(sqrt(MAX_N));

	for (int i = 2; i <= sqrtn; i++) {
		// �� ���� ���� �������� �ʾҴٸ�
		if (isPrime(i)) {
			// i�� ��� j�鿡 ���� isPrime[j] = false�� �д�.
			// i * i �̸��� ����� �̹� ���������Ƿ� �Ű澲�� �ʴ´�.
			for (int j = i * i; j <= MAX_N; j += i) {
				setComposite(j);
			}
		}
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	eratosthenes();
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
}