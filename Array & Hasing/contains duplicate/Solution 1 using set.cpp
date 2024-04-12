class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int it : nums)
            s.insert(it);
        return s.size()==nums.size()? false:true;
    }
};