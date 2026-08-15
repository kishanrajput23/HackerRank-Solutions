#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int q;
    cin >> q;

    while (q--) {

        int x;
        cin >> x;

        // Returns iterator to the first element >= x
        auto it = lower_bound(v.begin(), v.end(), x);

        // Convert iterator to 0-based index
        int index = it - v.begin();

        // Element found
        if (it != v.end() && *it == x) {
            cout << "Yes " << index + 1 << endl;
        }
        // Element not found
        // lower_bound gives the next greater element
        else {
            cout << "No " << index + 1 << endl;
        }
    }
    return 0;
    
}
