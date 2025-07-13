class Solution {
    public String removeStars(String s) {
        char[] chars = s.toCharArray();
        int n = chars.length, j=0;
        for(int i = 0; i<n; i++){
            if(chars[i] == '*'){
                if(j != 0){
                    j--;
                }
            }
            else{
                chars[j] = chars[i];
                j++;
            }
        }
        return new String(chars,0,j);
    }
}