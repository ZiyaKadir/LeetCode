#include <unordered_map>


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> rep;
        
        for (int i = 0; i < nums.size(); i++){
            auto it = rep.find(target - nums[i]);
            if ( it != rep.end()){
                return {it->second, i};
            }
            
            rep[nums[i]] = i;
        }


        return {};
    }
};