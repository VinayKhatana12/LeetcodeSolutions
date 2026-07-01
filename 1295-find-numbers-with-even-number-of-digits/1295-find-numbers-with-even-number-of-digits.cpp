class Solution {
public:

    int countdigit(int n){
        int count =0;
        while(n>0){
        int digit = n%10;
        count++;
        n=n/10;
        }
     return count;
    }
    int findNumbers(vector<int>& nums) {
        int evenNumber=0;
        for(int i=0;i<nums.size();i++){
            if(countdigit(nums[i])%2==0)evenNumber++;
            
        }
        return evenNumber;
        
    }

};