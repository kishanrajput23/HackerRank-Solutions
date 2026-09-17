#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    map<char, int> mp;
    
    for (auto i : s) {
        mp[i]++;
    }
    
    int oddCount = 0;
    
    for (auto i : mp) {
        if (i.second % 2 != 0) {
            oddCount++;
        }
    }
    
    if (oddCount >= 2) {
        return "NO";
    }
    
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
