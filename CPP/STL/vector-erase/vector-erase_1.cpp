#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // First query: position to erase (1-based)
    int pos;
    cin >> pos;

    // Convert 1-based position to 0-based index
    v.erase(v.begin() + (pos - 1));

    // Second query: range [a, b)
    int a, b;
    cin >> a >> b;

    // Convert both positions to 0-based iterators
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    // Print remaining elements
    cout << v.size() << endl;

    for (auto x : v) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
