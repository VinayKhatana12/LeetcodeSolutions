class Solution {
public:
    int leftSum(vector<int>& arr, int target) {
        int sum = 0;
        for (int i = 0; i < target; i++) {
                sum += arr[i];
            
        }
        return sum;
    }

    int rightSum(vector<int>& arr, int target) {
        int sum = 0;
        for (int i = target+1; i <arr.size(); i++) {
            
                sum += arr[i];
            
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (leftSum(nums,i) == rightSum(nums,i)) {
                return i;
            }
        }
        return -1;
    }
};