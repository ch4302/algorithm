#include <iostream>
using namespace std;

typedef unsigned long long uint64;

// mask�� index ��ġ�� ���� ���� ��ȯ�Ѵ�.
int get(uint64 mask, int index) {
	return (mask >> (index << 2)) & 15;
}

// mask�� index ��ġ�� value�� �ٲ� ����� ��ȯ�Ѵ�.
uint64 set(uint64 mask, int index, uint64 value) {
	return mask & ~(15LL << (index << 2)) | (value << (index << 2));
}