/*
https://leetcode.com/problems/container-with-most-water/

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/

#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area;
        int max_area = INT_MIN;
    
        /* Loop through all the possible containers */
        while(right != 0)
        {  
            area = (right-left) * min(height[left],height[right]); // Calculate Area width x height
            max_area = max(max_area, area); // Check is area is the largest yet

            if(height[left] < height[right])
            {
                left++; // Move left bound 
            }
            else
            {
                right--; // Move right bound
            }
        }
        return max_area;
    }
};