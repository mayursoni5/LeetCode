class Solution {
    public int findContentChildren(int[] g, int[] s) {
       Arrays.sort(g);
        Arrays.sort(s);

        int i = 0; // pointer for children
        int j = 0; // pointer for cookies

        while (i < g.length && j < s.length) {
            if (s[j] >= g[i]) {
                // cookie satisfies child
                i++;
            }
            j++; // move to next cookie
        }

        return i;
    }
    
}