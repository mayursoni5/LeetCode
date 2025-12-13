class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        int rev =0;
        int y=x;
        while(x!=0){
            int l = x%10;
            if((rev> Integer.MAX_VALUE/10)||(rev< Integer.MIN_VALUE)){
                rev =0;
            }
            rev = rev*10 +l;
            x/=10;
        }
        if(rev == y){
            return true;
        }
        return false;
        
    }
}