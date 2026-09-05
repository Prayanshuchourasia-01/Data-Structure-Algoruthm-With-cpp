#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {  // as the constrain is only 1500 then we can use the bruth force apprica here

        vector<int> veltanoric = nums;

        int n = nums.size();

        vector<long long> pref(n + 1, 0); // here we are using hte prefex sum.
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }

        int ans = 0;

        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                long long sum = pref[r + 1] - pref[l];

                if (sum % 10 != x) continue;

                long long firstDigit = sum;
                while (firstDigit >= 10) {
                    firstDigit /= 10;
                }

                if (firstDigit == x) {
                    ans++;
                }
            }
        }

        return ans;
    }
    
};


