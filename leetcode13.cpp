class Solution 
{
public:
    int romanToInt(string name) 
    {
        int n = name.size();
        int res = 0;
     unordered_map<string, int> people = { {"I", 1}, {"V", 5}, {"X", 10}, {"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000} };
    
    for(int i=0; i<n; i++)
    {
        string c(1, name[i]); 
        int cval = people.at(c);
        int dval = 0;
        if (i+1<n)
        {
            string d(1, name[i+1]); 
            dval = people.at(d);
        }
        
        if (cval < dval)
           res -= cval;
        else 
           res += cval;
    }
  return res; 
    }
};
