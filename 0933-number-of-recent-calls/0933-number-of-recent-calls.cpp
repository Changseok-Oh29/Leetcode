#include <queue>

using namespace std;

class RecentCounter {
private:
    queue<int> timestamps;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        timestamps.push(t);
        while (!timestamps.empty() && t-3000 > timestamps.front()) {
            timestamps.pop();
        }

        return timestamps.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */