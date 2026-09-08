#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<bool> seen(26, false);

    for (char c : s) {
        c = tolower(c);

        if (c >= 'a' && c <= 'z') {
            seen[c - 'a'] = true;
        }
    }

    for (bool present : seen) {
        if (!present) {
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
