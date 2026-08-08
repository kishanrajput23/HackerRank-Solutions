#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;

    // Create n dynamic arrays
    vector<vector<int>> a(n);

    // Read each array
    for (int i = 0; i < n; i++) {

        int k;
        cin >> k;

        // Read k elements into a[i]
        for (int j = 0; j < k; j++) {
            int value;
            cin >> value;

            a[i].push_back(value);
        }
    }

    // Process queries
    for (int i = 0; i < q; i++) {

        int x, y;
        cin >> x >> y;

        // Print y-th element of x-th array
        cout << a[x][y] << endl;
    }

    return 0;
}
