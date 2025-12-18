#include <vector>

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt = {0};

        for (int i=0;i<gain.size();i++) {
            alt.push_back(alt[i] + gain[i]);
        }

        int ans = *max_element(alt.begin(), alt.end());
        return ans;
    }
};