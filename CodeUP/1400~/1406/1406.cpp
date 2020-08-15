#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[5];
    cin >> str;
    if(!(strcmp(str, "love"))) cout << "I " << str << " you.";
    else return 0;
}