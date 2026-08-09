#include <sstream>
#include<bits/stdc++.h>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> ans;
    string current = "";

    // Build each number until we encounter ','
    for (char ch : str) {

        if (ch == ',') {
            ans.push_back(stoi(current));
            current = "";
        }
        else {
            current += ch;
        }
    }

    // Add the last number
    ans.push_back(stoi(current));

    return ans;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
