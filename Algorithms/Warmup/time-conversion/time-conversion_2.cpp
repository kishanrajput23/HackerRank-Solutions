#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));

    if (s.substr(8) == "AM") {
        if (hour == 12) {
            return "00" + s.substr(2, 6);
        }
        return s.substr(0, 8);
    }

    // PM
    if (hour != 12)
        hour += 12;

    string hr = to_string(hour);
    return hr + s.substr(2, 6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
