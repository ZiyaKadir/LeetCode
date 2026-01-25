#include <iostream>
#include <unordered_set>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;

        for(auto it: nums){
            if (auto find = numbers.find(it) != numbers.end()) return true; 
            numbers.insert(it);
        }

        return false;
    }
};