class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;
        vector<long long> freq(26, 0);
        
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        
        for (int step = 0; step < t; ++step) {
            vector<long long> next_freq(26, 0);
            for (int i = 0; i < 26; ++i) {
                if (freq[i] == 0) continue;

                if (i == 25) {
                   
                    next_freq[0] = (next_freq[0] + freq[i]) % MOD;
                    next_freq[1] = (next_freq[1] + freq[i]) % MOD;
                } else {
                   
                    next_freq[i + 1] = (next_freq[i + 1] + freq[i]) % MOD;
                }
            }
            freq = next_freq;
        }

        
        long long totalLength = 0;
        for (int i = 0; i < 26; ++i) {
            totalLength = (totalLength + freq[i]) % MOD;
        }

        return (int)totalLength;
    }
};
