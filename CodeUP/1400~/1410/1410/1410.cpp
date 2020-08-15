#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int cnt_lft = 0, cnt_rgt = 0;
	char bck[100000];
	cin >> bck;
	for (int i = 0; i < strlen(bck); i++) {
		if (bck[i] == '(') cnt_lft++;
		else cnt_rgt++;
	}
	cout << cnt_lft << " " << cnt_rgt;
}