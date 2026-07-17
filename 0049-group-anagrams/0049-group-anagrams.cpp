class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        for(string s:strs){
            string copy = s;
            sort(copy.begin(),copy.end());
            map[copy].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto entry:map){
            ans.push_back(entry.second);
        }
        return ans;
    }
};