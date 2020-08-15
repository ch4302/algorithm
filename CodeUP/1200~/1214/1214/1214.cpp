#include <iostream>
using namespace std;

int main()
{
	int year, month;
	cin >> year >> month;

	if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month == 2) cout << "29";
	else switch (month) {
	case 2:
		cout << "28";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30";
		break;
	default:
		cout << "31";
	}


}