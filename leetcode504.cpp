class Solution {
    public:
        string convertToBase7(int num) 
        {
            vector<int> step;
            ostringstream oss;
            string res;
    
            if (num > 0)
            {
                    while(num > 0)
                    {
                        int quo = num / 7;
                        int re = num % 7;
                        step.insert(step.begin(), re);
                        num = quo;
                    }
                    for (int digi : step)
                    {
                        oss << digi;
                    }
                    
                    res = oss.str();
            }
            
            else if (num < 0)
            {
                num = abs(num);
                while(num > 0)
                    {
                        int quo = num / 7;
                        int re = num % 7;
                        step.insert(step.begin(), re);
                        num = quo;
                    }
                    for (int digi : step)
                    {
                        oss << digi;
                    }
                    
                    res = oss.str();
                    res = "-" + res;
            }
            else if (step.empty()) 
            {
                    step.push_back(0);
                    
                    for (int digi : step)
                    {
                        oss << digi;
                    }
                    
                    res = oss.str();
            }
            return res;
        }
    };