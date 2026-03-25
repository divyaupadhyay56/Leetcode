class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long double sum = 0.0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                sum += grid[i][j];
            }
        }

        long double horizontal_Sum = 0.0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                horizontal_Sum += grid[i][j];
            }
            if(horizontal_Sum == sum / 2) return true;
        }

        long double verticalSum = 0.0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                verticalSum += grid[j][i];
            }
            if(verticalSum == sum / 2) return true;
        }
        
        return false;
    }
};