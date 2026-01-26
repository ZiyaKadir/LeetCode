#include<unordered_map>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> numbers;
        int max = -1;
        vector<int> result;
        
        for(auto it: nums){
            numbers[it]++;
        }

        vector<vector<int>> frequency(nums.size() +1);

        for (auto it: numbers){
            int num = it.first;
            int freq = it.second;

            frequency[freq].push_back(num);
        }

        vector<int> results;

        for(int i = frequency.size() -1; i >= 0; i--){

            for (int l: frequency[i]){
                results.push_back(l);

                if(results.size() == k){
                    return results;
                }
            }
        } 

        return results;


    }
};