#define MOD 1000000007
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int odd = 0;
        int even = 1;
        int sum = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            if (sum % 2 == 1) {
                ans = (ans + even) % MOD;
                odd += 1;
            }
            else {
                ans = (ans + odd) % MOD;
                even += 1;
            }
        }

        return ans;
    }
};