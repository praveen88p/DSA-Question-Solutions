class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size(); 
            vector<int> count(n * n + 1, 0);
            vector<int> answer(2); 
          
            for (auto& row : grid) {
                for (int number : row) {
                    count[number]++;
                    if (count[number] == 2) {
                        answer[0] = number;
                    }
                }
            }
          
            for (int number = 1; number <= n * n; ++number) {
                if (count[number] == 0) {
                    answer[1] = number;
                    break;
                }
            }
          
            return answer;
        }
    };