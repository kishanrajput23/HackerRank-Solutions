#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    
    map<string, int> mp;
    
    while(q--) {
        int type;
        cin>>type;
        
        string X;
        if (type == 1) {
            int Y;
            cin>>X>>Y;
            mp[X] += Y;
        }
        else if (type == 2) {
            cin>>X;
            mp.erase(X);
        }
        else {
            cin>>X;
            
            if (mp.find(X) != mp.end()) {
                cout<<mp[X]<<endl;
            }
            else {
                cout<<0<<endl;
            }
        }   
    }
    
    return 0;
}
