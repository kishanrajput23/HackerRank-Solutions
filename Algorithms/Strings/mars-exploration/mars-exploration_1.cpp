#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    
    for (int i=0; i<s.size(); i+=3) {
        if (s[i] != 'S') {
            count1++;
        }
    }
    
    for (int i=1; i<s.size(); i+=3) {
        if (s[i] != 'O') {
            count2++;
        }
    }
    
    for (int i=2; i<s.size(); i+=3) {
        if (s[i] != 'S') {
            count3++;
        }
    }
    
    return count1 + count2 + count3;   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
