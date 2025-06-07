class Solution {
public:
    bool isPerfectSquare(int num) {
         bool is = true;
        for(int i=1; i<=num; i++)
        {
            long long c = pow(i, 2);
            if(c == num)
            {    
                is = true;
                break;
            }
            else if(c > num)
            {
               is = false;
                break;
            }
        }
        return is;
    }
};
