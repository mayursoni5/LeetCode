class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);

        int i = 0; // pointer for children
        int j = 0; // pointer for cookies

        while (j < s.length) { // Iterate through all cookies
            // The crucial change: check if child pointer 'i' is still within bounds
            if (i < g.length && s[j] >= g[i]) {
                // cookie satisfies child
                i++; // Move to the next child
            }
            j++; // Always move to the next cookie, regardless if it satisfied a child
        }

        return i; // 'i' represents the number of satisfied children
    }
}