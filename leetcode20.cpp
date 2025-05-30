#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    string x = "]"; // Try changing this to test
    stack<char> st;
    
     for (char ch : x)
    {
        
        if ( ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
            cout << ch << endl;
        }
        
        else
        {
            if(st.empty())
            {
                return false;
            }
            
            char top = st.top();
            
            if ((ch == ')' && top != '(') ||(ch == '}' && top != '{') || (ch == ']' && top != '['))
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
