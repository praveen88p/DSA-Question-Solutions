class Solution {
    public:
        long long repairCars(vector<int>& ranks, int cars) {
            long long left = 1, right = 1LL * *min_element(ranks.begin(), ranks.end()) * cars * cars;
            long long answer = right;
    
            while (left <= right) {
                long long mid = left + (right - left) / 2;
                if (canRepair(ranks, cars, mid)) {
                    answer = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
    
            return answer;
        }
    
    private:
        bool canRepair(vector<int>& ranks, int cars, long long time) {
            long long totalCars = 0;
            for (int r : ranks) {
                totalCars += sqrt(time / r); // k = sqrt(time / r)
                if (totalCars >= cars) return true;
            }
            return false;
        }
    };
    