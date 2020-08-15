#include <iostream>
using namespace std;

int main()
{
	int num_grade, num_class, num_num, std;
	cin >> num_grade >> num_class >> num_num;

	if (num_num < 10) {
		cout << num_grade << num_class << "0" << num_num;
	}
	else
	{
		cout << num_grade << num_class << num_num;
	}
}