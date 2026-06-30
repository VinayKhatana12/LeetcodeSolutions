class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int maxW = 0;
       for(int i=0;i<accounts.size();i++){
        int w=0;
        for(int j=0;j<accounts[i].size();j++){
            w+= accounts[i][j];
        }
        maxW = max(maxW,w);
       }
    return maxW ; 
    }
};