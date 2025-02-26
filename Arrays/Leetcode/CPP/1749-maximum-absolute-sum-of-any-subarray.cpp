class Solution { 
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            
            int maxSum  = INT_MIN;
            int minSum = INT_MAX;
            int n = nums.size();
            int currSumMax = 0;
            int currSumMin = 0;
    
            for(int i = 0; i < n; i++) {
                currSumMax += nums[i];
                maxSum = max(currSumMax, maxSum);
                if(currSumMax < 0) currSumMax = 0;
            }
    
            for(int i = 0; i < n; i++) {
                currSumMin += nums[i];
                minSum = min(currSumMin, minSum);  
                if(currSumMin > 0) currSumMin = 0; 
            }
    
            return max(abs(minSum), maxSum); 
        }
    };
    