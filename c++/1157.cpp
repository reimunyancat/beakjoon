#include <iostream>
#include <string.h>

using namespace std;
int main() {
    char a[1000001], ans;
    int arr[30], max = 0, size;

    cin >> a;
    size = strlen(a);

    for (int i = 0; i < size; i++)
        if (a[i] >= 'a') arr[a[i] - 'a']++;
        else arr[a[i] - 'A']++;

    for (int i = 0; i < 30; i++)
        if (arr[i] == max) {
            ans = '?';
        }
        else if (arr[i] > max) {
            max = arr[i];
            ans = 'A' + i;
        }

    cout << ans;

    return 0;
}