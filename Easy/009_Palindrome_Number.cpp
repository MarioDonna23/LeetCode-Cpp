/*
https://leetcode.com/problems/palindrome-number/

Given an integer x, return true if x is a palindrome, and false otherwise.
*/

#include<sstream> 
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        /* Convert the int to str */
        stringstream ss;  // String Stream Object
        ss<<x; // Add x to SS Object
        string s;  
        ss>>s; // Ouput the content into a string. 

        /* Reverse the string */
        string reverse = s;
        unsigned int size = s.size();
        int k = 0;
        for(int i = size-1; i>=0; i--)
        {    
            reverse[i] = s[k];
            k++;
        }

        /* Check if it is a palindrome */
        if(reverse == s)
        {
            return true;
        }  
        else
        {
            return false;
        }
    }
};