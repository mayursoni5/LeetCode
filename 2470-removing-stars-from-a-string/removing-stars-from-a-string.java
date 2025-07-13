class Solution {
    public String removeStars(String s) {
        char[] chars = s.toCharArray();
        int n = chars.length, j=0;
        char[] ans= new char[n];;
        for(int i = 0; i<n; i++){
            if(chars[i] == '*'){
                if(j != 0){
                    j--;
                }
            }
            else{
                ans[j] = chars[i];
                j++;
            }
        }
        return new String(ans,0,j);
    }
}