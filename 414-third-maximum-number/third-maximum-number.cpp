class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;

        for (int num : nums) {
            s.insert(num);
            if (s.size() > 3) {
                s.erase(*s.begin());
            }
        }

        if (s.size() == 3) {
            return *s.begin();
        }

        return *s.rbegin();
    }
};
