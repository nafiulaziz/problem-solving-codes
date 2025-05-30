class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) 
        {
            int c = digits.back();
            int n = digits.size();
    
            if (c!= 9)
            {
                c=c+1;
                digits.pop_back();
                digits.push_back(c);
            }
            else
            {
              for (int i = n - 1; i >= 0; i--)
              {
                    if (digits[i] < 9)
                    {
                        digits[i] += 1;
                        break;
                    }
                    else 
                    {
                        digits[i] = 0; // carry over
                    }
              }
             if (digits[0] == 0) 
                {
                    digits.insert(digits.begin(), 1);
                }
            }   
            return digits;
        }
    };