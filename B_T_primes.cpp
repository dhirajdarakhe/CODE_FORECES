class Solution
{
public:
    bool isValid(int i, int j, int m, int n)
    {
        return (i >= 0 && j >= 0 && i < m && j < n);
    }
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    int nearestExit(vector<vector<char>> &maze, vector<int> &e)
    {
        queue<pair<int, int>> q;
        q.push({e[0], e[1]});
        vector<vector<int>> visi(maze.size(), vector<int>(maze[0].size(), 0));
        int m = maze.size();
        int n = maze[0].size();
        visi[e[0]][e[1]] = 1;
        int ans = 0;
        while (!q.empty())
        {

            int k = q.size();
            while (k--)
            {
                int x = q.top().first;
                int y = q.top().second;
                if (x == 0 || y == 0 || x == m - 1 || y == n - 1)
                {
                    return ans;
                }
                q.pop();
                for (int i = 0; i < 4; ++i)
                {
                    int xx = x + dx[i];
                    int yy = y + dy[i];
                    if (isValid(xx, yy, m, n) && visi[xx][yy] == 0)
                    {
                        q.push({xx, yy});
                        visi[xx][yy] = 1;
                    }
                }
            }
            ans++;
        }
    }
};