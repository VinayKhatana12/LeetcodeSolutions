class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] arr = new int[nums.length];
        int i=0;
        int j=nums.length-1;
        int pos = nums.length-1;
        while(i<=j){
            if(Math.abs(nums[i])<=Math.abs(nums[j])){
                arr[pos]=nums[j]*nums[j];
                j--;
                pos--;
            }
            else{
                arr[pos]=nums[i]*nums[i];
                i++;
                pos--;
            }
        }
     return arr;   
    }
}