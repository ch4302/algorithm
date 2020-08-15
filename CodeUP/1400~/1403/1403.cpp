#include <iostream>
using namespace std;

int main()
{
    int len, cnt = 0;
    cin >> len;

    int *arr = new int[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    while(cnt < 2) {  
        for(int i = 0; i < len; i++) {
            cout << arr[i] << endl;
        }
        cnt++;
    }

}