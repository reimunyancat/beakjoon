#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <list>

using namespace std;

int main() {
    int K, n, s, d;
    long long totalDucats;
    cin >> K;
    for (int k = 1; k <= K; ++k) {
        cin >> n >> s >> d;
        totalDucats = 0; 

        for (int i = 0; i < n; ++i) {
            int di, vi;
            cin >> di >> vi;
            if (di <= s * d) totalDucats += vi;
        }

        cout << "Data Set " << k << ":\n";
        cout << totalDucats << "\n\n";
    }
    return 0;
}
