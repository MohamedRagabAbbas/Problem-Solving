class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        for (const auto &num : nums) 
             if(!seen.insert(num).second)
                return true;
        return false;
    }
};