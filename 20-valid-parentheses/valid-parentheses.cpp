class Solution {
public:
    bool isValid(string s) {
           stack<char> st;
    
    for (char ch : s) {
        // Push opening brackets onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        // Check for matching closing brackets
        else {
            if (st.empty()) return false; // No matching opening bracket
            
            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop(); // Brackets match, pop from stack
            } else {
                return false; // Mismatched brackets
            }
        }
    }
    
    return st.empty(); 
    }
};