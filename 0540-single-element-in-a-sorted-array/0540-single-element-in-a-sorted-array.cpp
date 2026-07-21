class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int low=0;
        // int high = nums.size()-1;
        // while(low<=high){
        //     int mid = low+(high-low)/2;
        //     if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
        //         return mid;
        //     }
        // }
        unordered_map<int,int>map;
        for(int a : nums){
            map[a]++;
        }
        for(auto it : map){
            if(it.second==1){
                return it.first;
            }
        }
    return 0; 
    }
};