class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left=0;
        int maxCount=0;
        HashSet<Character>set = new HashSet<>();
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            while(set.contains(ch)){
                set.remove(s.charAt(left));
                left++;
            }
            set.add(ch);
    maxCount = Math.max(maxCount,i-left+1);
        }
    return maxCount;  
    }
}