class Solution {
public:
    int divide(int dividend, int divisor) 
    {
      long long m = ((long long)dividend)/ ((long long)divisor);
      if(m > INT_MAX)
        m=m-1;
      return m;  
    }
};
