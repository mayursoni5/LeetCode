class Solution {
public:
    bool isAlpha(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

    string reverseOnlyLetters(string s) {
        int left = 0, right = s.size() - 1;

        while(left < right){
            if(!isAlpha(s[left])){
                left++;
            }
            else if(!isAlpha(s[right])){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};