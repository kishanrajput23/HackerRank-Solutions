#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n > 9) {
        cout<<num[0]<<endl;
    }
    else {
        cout<<num[n]<<endl;
    }

    return 0;
}
