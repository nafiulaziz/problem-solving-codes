class Solution {
    public:
        int differenceOfSums(int n, int m) 
        {
                int i, num1=0, num2=0, ans=0;
            for(i = 0; i <=n;i++)
            {
                if(i % m != 0)
                num1=num1+i;
                else
                num2=num2+i;  
            }
            ans = num1 - num2;
            return ans;   
        }
    };