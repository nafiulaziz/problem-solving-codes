class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        vector<int> x;

        if (num2.size() < num1.size())
            swap(num1, num2);

        for (int i = 0; i < num2.size(); i++) {
            int k = num2[i];
            for (int j = 0; j < num1.size(); j++) {
                if (num1[j] == k) {
                    if (find(x.begin(), x.end(), k) == x.end())
                        x.push_back(k);
                    break;
                }
            }
        }
        return x;
    }
};
