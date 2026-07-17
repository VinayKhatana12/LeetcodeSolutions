class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int freq:nums){
            map[freq]++;
        }
        int maxFreq=0;
        int ans=-1;
        for(auto it:map){
            if(it.second>maxFreq){
                maxFreq=it.second;
                ans = it.first;
            }
        }
      return ans;  
    }
};