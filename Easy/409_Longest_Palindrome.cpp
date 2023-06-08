/*
https://leetcode.com/problems/longest-palindrome/
*/

#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int size = s.size();
        int answer = 0;
        map<char,int> hm; // Hash map that will have every character and its count

        if(size == 1) return 1;
    
        for(int i=0; i<size; i++) // Add every character to a hash map
        {
            hm[s[i]]++;
        }

        for(auto it : hm) // Iterate through the hash map
        {
            int k = it.second;
            answer += k - (k % 2);
        }

        if(answer == s.size()) return answer;
        else return (answer+1);

    }
};