class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            int j= i+1;
            int k = nums.size()-1;
            int sum = 0;
            while(j<k){
                int target = nums[i]+nums[j]+nums[k];
                if(target>sum){
                    k--;
                }
                else if(target<sum){
                    j++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(nums[j]==nums[j-1]&&j<k){j++;}
                }
            }
        }
    return ans;  
    }
};