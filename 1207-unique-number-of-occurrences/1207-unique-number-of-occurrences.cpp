class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count=0;
        unordered_map<int,int>freq;
        unordered_set<int>s1;
        for(int it:arr){
            freq[it]++;
        }
        for(auto x :freq){
            if(s1.find(x.second)!=s1.end()){
                return false;
            }
            s1.insert(x.second);
        }
    return true;
    }
};