#include <queue>
#include <vector>

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int l = rooms.size();
        queue<int> q;
        vector<bool> visited(l, false);
        for (int i : rooms[0]) {
            q.push(i);
        }
        visited[0] = true;

        while (!q.empty()) {
            int cn = q.front();
            q.pop();
            visited[cn] = true;
            for (int i : rooms[cn]) {
                if (!visited[i]) {
                    q.push(i);
                }
            }
        }

        for (bool v : visited) {
            if (!v) {
                return false;
            }
        }
        return true;
    }
};