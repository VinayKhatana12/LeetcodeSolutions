class Solution {
    public int maxArea(int[] height) {
        int i=0;
        int j = height.length-1;
        int maxArea=0;
        while(i<j){
            int area = Math.min(height[i],height[j])*(j-i);
            maxArea = Math.max(area,maxArea);
            if(height[i]>=height[j]){
                j--;
            }
            else{
                area = height[i]*height[i];
                i++;
            }
        }
    return maxArea;  
    }
}