#include <iostream>
using namespace std;

int main()
{
    int num[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << num[i] << " ";
    }
}