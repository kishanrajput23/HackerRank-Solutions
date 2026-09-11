#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hr = s.substr(0, 2);
    string format = s.substr(8);
    
    if (stoi(hr) < 12 && format != "PM") {
        return s.substr(0, 8);
    }
    else if (stoi(hr) == 12 && format == "AM") {
        return "00" + s.substr(2, 6);
    }
    else if (stoi(hr) < 12 && format == "PM") {
        int t = stoi(hr) + 12;
        return to_string((t)) + s.substr(2, 6);
    }
    else {
        return s.substr(0, 8);
    }
    return "";
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
