class Solution {
    int digitP(int n) {
        int product = 1;
        while (n > 0) {
            int digit = n % 10;
            product *= digit;
            n = n / 10;
        }
        return product;
    }

    public int smallestNumber(int n, int t) {
        int j=n;
        while(j>=n){
            if(digitP(j)%t==0) return j;
            else j++;
        }
        return -1 ;
    }
}