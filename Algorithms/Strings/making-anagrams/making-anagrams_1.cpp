#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
    map<char, int> mp1, mp2;

    for (char c : s1)
        mp1[c]++;

    for (char c : s2)
        mp2[c]++;

    int count = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        count += abs(mp1[c] - mp2[c]);
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
