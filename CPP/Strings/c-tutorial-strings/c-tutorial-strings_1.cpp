#include <bits/stdc++.h>

using namespace std;

int main() {

    string a, b;
    cin >> a >> b;

    // Print lengths of both strings
    cout << a.size() << " " << b.size() << endl;

    // Concatenate both strings
    cout << a + b << endl;

    // Swap the first characters
    swap(a[0], b[0]);

    // Print the modified strings
    cout << a << " " << b << endl;

    return 0;
}
