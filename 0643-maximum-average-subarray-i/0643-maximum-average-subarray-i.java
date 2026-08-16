class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int left=0;
        int sum =0;
        int maxSum =Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
           sum += nums[i];
            if(i-left+1==k){
                maxSum = Math.max(maxSum,sum);
                sum -= nums[left];
                left++;
            } 
        }
    return (double)maxSum/k;    
    }
}