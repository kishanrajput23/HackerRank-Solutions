#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<int> v(26, -1);
    
    for (auto i : s) {
        v[tolower(i) - 'a']++;
    }
    
    for (auto i : v) {
        if (i == -1) {
            return "not pangram";
        }
    }
    
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
