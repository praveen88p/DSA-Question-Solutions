class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> rearranged;
    
            for (int num : nums) {
                if (num < pivot) {
                    rearranged.push_back(num);
                }
            }
          
            for (int num : nums) {
                if (num == pivot) {
                    rearranged.push_back(num);
                }
            }
    
            for (int num : nums) {
                if (num > pivot) {
                    rearranged.push_back(num);
                }
            }
    
            return rearranged;
        }
    };