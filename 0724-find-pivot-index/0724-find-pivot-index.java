class Solution {

    int leftSum(int[] nums , int j){
        int sum=0;
        for(int i=0;i<j;i++){
            sum += nums[i];
        }
     return sum;
    }
     int rightSum(int[] nums , int j){
        int sum=0;
        for(int i=j+1;i<nums.length;i++){
            sum += nums[i];
        }
     return sum;
    }
    public int pivotIndex(int[] nums) {
        for(int i=0;i<nums.length;i++){
            if(leftSum(nums,i)==rightSum(nums,i)) return i;
        }
    return -1;  
    }
}