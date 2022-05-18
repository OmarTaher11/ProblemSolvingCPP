class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (int i : nums){
            if(umap[i])
                return true;
            umap[i] = 1;
        }
        return false;
    }
};