/* Enter your macros here */
#define FUNCTION(name, op) \
    void name(int& acc, const int val) { \
        if (val op acc) acc = val; \
    }

#define foreach(vec, idx) \
    for (size_t idx = 0; idx < vec.size(); ++idx) 

#define INF \
    numeric_limits<int>::max();

#define io(vec) \
    cin >> vec

#define toStr(str) \
    #str

#include <limits>

