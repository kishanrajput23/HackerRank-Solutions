#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'happyLadybugs' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING b as parameter.
 */

string happyLadybugs(string b) {
    map<char, int> mp;

    for (char c : b) {
        mp[c]++;
    }

    int emptycount = mp['_'];

    // Check if every ladybug color has at least 2
    for (auto [color, count] : mp) {
        if (color != '_' && count == 1) {
            return "NO";
        }
    }

    // If there are empty spaces, we can rearrange
    if (emptycount > 0) {
        return "YES";
    }

    // No empty spaces -> check current arrangement
    for (int i = 0; i < b.size(); i++) {
        if ((i > 0 && b[i] == b[i - 1]) ||
            (i + 1 < b.size() && b[i] == b[i + 1])) {
            continue;
        }
        return "NO";
    }

    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
