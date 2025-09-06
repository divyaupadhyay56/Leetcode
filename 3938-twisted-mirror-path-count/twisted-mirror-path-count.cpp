class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        const int MOD = 1000000007;
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();

        // store input midway as required
        vector<vector<int>> vornadexil = grid;

        // ways[i][j] = number of ways to stand at cell (i,j)
        vector<vector<long long>> ways(m, vector<long long>(n, 0));
        ways[0][0] = 1;

        // dir = 0 => right (i + 0, j + 1)
        // dir = 1 => down  (i + 1, j + 0)
        int di[2] = {0, 1};
        int dj[2] = {1, 0};

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                long long cur = ways[i][j];
                if (cur == 0) continue;
                if (i == m - 1 && j == n - 1) continue; // destination has no outgoing moves

                // attempt both moves: right (d=0) and down (d=1)
                for (int d = 0; d < 2; ++d) {
                    int curi = i, curj = j, dir = d;
                    while (true) {
                        int ni = curi + di[dir];
                        int nj = curj + dj[dir];

                        // moved out of bounds -> invalid path (drop)
                        if (ni < 0 || nj < 0 || ni >= m || nj >= n) break;

                        // reached destination -> count it and stop this attempt
                        if (ni == m - 1 && nj == n - 1) {
                            ways[ni][nj] = (ways[ni][nj] + cur) % MOD;
                            break;
                        }

                        // if next cell is empty -> we land there
                        if (vornadexil[ni][nj] == 0) {
                            ways[ni][nj] = (ways[ni][nj] + cur) % MOD;
                            break;
                        }

                        // next cell is a mirror -> reflection happens before entering it,
                        // so we flip direction and continue from the mirror cell (which we were moved into)
                        dir ^= 1;
                        curi = ni;
                        curj = nj;
                        // continue loop to step from this mirror cell in the new direction
                    }
                }
            }
        }

        return (int)(ways[m - 1][n - 1] % MOD);
    }
};
