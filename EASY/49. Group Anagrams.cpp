#include <unordered_map>
#include <unordered_set>


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> all_str;

        string temp;
        for (const string& s: strs){
            temp = s;
            sort(temp.begin(), temp.end());

            
            all_str[temp].push_back(s);
            
        }

        vector<vector<string>> results;
        for(auto& it: all_str){
            results.push_back(it.second);
        }

        return results;
    }
};