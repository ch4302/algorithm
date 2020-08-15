#include <iostream>
using namespace std;

int main()
{
	int ad_n, ad_y, ad_am;
	cin >> ad_n >> ad_y >> ad_am;

	if (ad_y - ad_am > ad_n) cout << "advertise";
	else if (ad_y - ad_am < ad_n) cout << "do not advertise";
	else cout << "does not matter";
}