#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    bool hasZero(int a) {
        while(a > 0) {
            if(a % 10 == 0) return true;
            a /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        int a, b;
        for(a = 1; a < n; a++) {
            b = n-a;
            if(!hasZero(a) && !hasZero(b)) 
                return {a, b};
        }
        return {};
    }
};
