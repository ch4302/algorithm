#include <iostream>
using namespace std;

int main()
{
    int len;
    cin >> len;

    int *arr = new int[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len + i; j++) {
            if(j >= len) {
                cout << arr[j - len] << " ";
            }
            else {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}