class Solution {
    public int reverse(int x) {
        int rev=0;
        while(x != 0){
            int l = x%10;
            if((rev > Integer.MAX_VALUE/10) || (rev< Integer.MIN_VALUE/10)){
                return 0;
            }
            rev = (rev*10)+l;
            x /= 10;
        }
        return rev;
    }
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        int rev = reverse(x);
        if(x==rev) return true;
        else return false;
        
    }
}