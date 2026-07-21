class Solution {
public:
    void twoSum(vector<int>& nums, int a, int target,
                vector<vector<int>>& ans) {
        int i = a;
        int r = nums.size() - 1;
        while (i < r) {
            int sum = nums[i] + nums[r];
            if (sum == target) {
                ans.push_back({-target, nums[i], nums[r]});
                i++;
                r--;
                while (i < r && nums[i] == nums[i - 1])
                    i++;
                while (i < r && nums[r] == nums[r + 1])
                    r--;
            } else if (sum < target) {
                i++;
            } else {
                r--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if(i>0&& nums[i]==nums[i-1]) continue;
           // int n = nums[i];
            int target = -nums[i];
            twoSum(nums, i + 1, target, ans);
        }
        return ans;
    }
};