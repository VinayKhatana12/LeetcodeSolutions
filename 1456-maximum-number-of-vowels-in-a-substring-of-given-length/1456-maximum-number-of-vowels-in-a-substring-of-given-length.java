class Solution {
    public int maxVowels(String s, int k) {
        int count =0;
        for(int i=0;i<k;i++){
            char ch = s.charAt(i);
            if("aeiou".indexOf(ch)!=-1){
                count++;
            }
        }
        int maxCount = count;

        for(int i=k;i<s.length();i++){
            char left = s.charAt(i-k);
            if("aeiou".indexOf(left)!=-1){
                count--;
            }
            char right = s.charAt(i);
            if("aeiou".indexOf(right)!=-1){
                count++;
            }
            maxCount = Math.max(maxCount,count);
        }
      
     return maxCount;   
    }
}