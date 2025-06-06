class Solution {
public:
    int lengthOfLastWord(string s) {
        int e = 0;

        while (!s.empty() && s.back() == ' ')
            s.pop_back();

        int f = s.size();
        for (int i = f - 1; i >= 0; i--) {
            char c = s[i];
            if (c == ' ')
                break;
            else
                e++;
        }
        return e;
    }
};
