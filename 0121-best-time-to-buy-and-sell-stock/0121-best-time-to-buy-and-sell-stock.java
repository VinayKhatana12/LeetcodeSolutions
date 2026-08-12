class Solution {
    public int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int best =0;
        for(int price: prices){
            minPrice = Math.min(minPrice,price);
            int profit = price - minPrice;
            best = Math.max(best,profit);
        }
      return best;  
    }
}