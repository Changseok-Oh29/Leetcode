#include <vector>
#include <queue>

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();
        vector<vector<int>> dir = {{-1,0}, {0,1}, {1,0}, {0,-1}};
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});
        visited[entrance[0]][entrance[1]] = true;

        int count = 0;

        while(!q.empty()) {
            int sz = q.size();

            while (sz--) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                if ( (x==0 || x==m-1 || y==0 || y==n-1) && !(x==entrance[0] && y==entrance[1]) ) {
                    return count;
                }

                for (int i=0;i<4;i++) {
                    int nx = x + dir[i][0];
                    int ny = y + dir[i][1];
                    if (0 <= nx && nx < m && 0 <= ny && ny < n && maze[nx][ny] != '+' && visited[nx][ny] == false) {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }

            count++;
            
        }

        return -1;

    }
};