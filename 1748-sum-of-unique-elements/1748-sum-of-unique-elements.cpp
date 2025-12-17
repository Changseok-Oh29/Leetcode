using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        map<int, int> n;
        
        for (auto i : nums) {
            n[i]++;
        }

        for (auto i : n) {
            if (i.second == 1) {
                sum += i.first;
            }
        }

        return sum;
        
    }
};