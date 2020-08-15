#include <iostream>
using namespace std;

typedef unsigned long long uint64;

// mask의 index 위치에 쓰인 값을 반환한다.
int get(uint64 mask, int index) {
	return (mask >> (index << 2)) & 15;
}

// mask의 index 위치를 value로 바꾼 결과를 반환한다.
uint64 set(uint64 mask, int index, uint64 value) {
	return mask & ~(15LL << (index << 2)) | (value << (index << 2));
}