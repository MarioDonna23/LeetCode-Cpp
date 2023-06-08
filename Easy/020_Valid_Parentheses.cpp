/*
https://leetcode.com/problems/valid-parentheses/
*/

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int size = s.size();

        if(size<2) return false; // Valid expression needs at least two characters

        for(int i=0; i<size; i++) // Iterate through the string
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') stack.push(s[i]); // If opening expression, add it to stack
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}') // Else if closing expression then...
            {
                if(stack.empty()) return false; // Every closing statement needs to be opened first
                /* Depending on type of closing expression, it needs its opening counterpart */
                else if(s[i] == ')' && stack.top() != '(') return false;
                else if((s[i] == ']' && stack.top() != '[')) return false;
                else if((s[i] == '}' && stack.top() != '{')) return false;
                else stack.pop();
            }
        }
        if(stack.empty()) return true;
        else return false;
    }
};