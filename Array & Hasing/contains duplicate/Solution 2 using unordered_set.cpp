class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0) {
                return true; 
            } else {
                seen.insert(num);
            }
        }
        return false;
    }
};