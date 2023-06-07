/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hm; // Hash map to store each number and their index
        vector<int> result; 
        int size = nums.size();
        int diff;
        /* Iterate through the vector of integers*/
        for (int i=0; i<size; i++)
        {
            diff = target - nums[i]; // diff is the number we need add to our current number to match the target
            if(hm.find(diff) != hm.end()) // If diff is in the map, then we have a winner
            {
                auto p = hm.find(diff);
                result.push_back(p->second); // Add the index of diff into the result vector
                result.push_back(i); // Add the index of the current number into the result vector
            }
            hm.insert(make_pair(nums[i],i)); // If diff is not on the map, add the current number and its index to the map
        }
        return result;
    }
};