class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = Integer.MIN_VALUE;
        int i=0;
        int minValue = prices[i];
        for( i=1;i<prices.length;i++){
            minValue=Math.min(minValue,prices[i-1]);
            int profit = prices[i]-minValue;
            maxProfit = Math.max(maxProfit,profit);
        }
    return maxProfit>=0?maxProfit:0;   
    }
}