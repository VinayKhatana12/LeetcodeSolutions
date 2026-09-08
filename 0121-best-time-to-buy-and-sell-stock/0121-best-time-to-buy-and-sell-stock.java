class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int price = prices[0];
        for(int i=1;i<prices.length;i++){
             price = Math.min(price,prices[i]);
            int profit = prices[i]-price;
            maxProfit= Math.max(maxProfit,profit);
        }
    return maxProfit;   
    }
}