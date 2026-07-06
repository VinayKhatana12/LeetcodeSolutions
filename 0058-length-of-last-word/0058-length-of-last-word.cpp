class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int count2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                count++;
            count2 =count;
            }
            else{
                count =0;
            }
        }
        return count2;
    }
};