#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int N, S, P, Q;

    cin >> N >> S >> P >> Q;

    const unsigned int MOD = (1ULL << 31);

    vector<unsigned long long> seen(1ULL << 25, 0);

    unsigned int current = S;
    int distinct = 0;

    for (unsigned int i = 0; i < N; i++) {

        // Find which 64-bit block and which bit
        unsigned int block = current >> 6;
        unsigned int bit = current & 63;

        // Check if this number appeared before
        if ((seen[block] & (1ULL << bit)) == 0) {
            seen[block] |= (1ULL << bit);
            distinct++;
        }

        current = (current * 1ULL * P + Q) % MOD;
    }

    cout << distinct << endl;

    return 0;
}
