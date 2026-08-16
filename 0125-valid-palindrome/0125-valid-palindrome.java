class Solution {
    public boolean isPalindrome(String s) {
        char[] ch = s.toCharArray();
        int i=0;
        int j=ch.length-1;
        while(i<j){
            while(i<j &&!Character.isLetterOrDigit(ch[j]))j--;
            while(i<j &&!Character.isLetterOrDigit(ch[i]))i++;
            if(Character.toLowerCase(ch[i])!=Character.toLowerCase(ch[j])){
                return false;
            }
            i++;
            j--;
        }
     return true;   
    }
}