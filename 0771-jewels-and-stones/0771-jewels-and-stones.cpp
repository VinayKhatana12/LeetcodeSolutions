class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(char ch:jewels){
            for(char j:stones){
                if(ch==j)
                count++;
                }
            }
        return count;  
    }  
};