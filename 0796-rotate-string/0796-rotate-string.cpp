class Solution {
public:
    string rString(string s, int k) {
        k %= s.size();

        reverse(s.begin(), s.begin() + k);
        reverse(s.begin() + k, s.end());
        reverse(s.begin(), s.end());

        return s;
    }

    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        for (int k = 0; k < s.size(); k++) {
            if (rString(s, k) == goal)
                return true;
        }

        return false;
    }
};