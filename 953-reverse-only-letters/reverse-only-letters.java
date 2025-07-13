class Solution {
    public String reverseOnlyLetters(String s) {
        char[] chars = s.toCharArray();
        int i=0, j = chars.length - 1;

        while(i<j){
            if(!Character.isLetter(chars[i])){
                i++;
            }
            else if(!Character.isLetter(chars[j])){
                j--;
            }
            else{
                char temp = chars[i];
                chars[i] = chars[j];
                chars[j] = temp;
                i++;
                j--;
            }
        }
        return new String(chars);
    }
}