#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;

    set<int> st;

    while (q--) {

        int type, x;
        cin >> type >> x;

        if (type == 1) {
            st.insert(x);
        }
        else if (type == 2) {
            st.erase(x);
        }
        else {
            if (st.count(x)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}



