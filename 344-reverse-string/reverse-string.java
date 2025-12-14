class Solution {
    public void reverseString(char[] s) {
        int left = 0, rigth = s.length-1;
        while(left<rigth){
            char temp = s[left];
            s[left]=s[rigth];
            s[rigth] = temp;
            left++;
            rigth--;
        }
    }
}