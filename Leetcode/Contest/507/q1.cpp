#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    int maxDistance(string moves) {  // if we move in increasing direction, then we suresly get the maximum distance from origin.
        
        int dx = 0, dy = 0, k = 0;

        for (char c : moves) {
            if (c == 'R') dx++;
            else if   (c == 'L')   dx--;
            else if   (c == 'U')    dy++;
            else if   (c == 'D')   dy--;
            else  k++; // '_'
        }

        return abs(dx) + abs(dy) + k; // as we can say that k is the number of any move wecan make so we just get it and then add in the final ans.

    }
};


int main() {
    
    string moves = "UDLR__";    
    int result = maxDistance(moves);
    cout << "Maximum distance from origin: " << result << endl;
    return 0;
}