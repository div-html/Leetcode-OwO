class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i] ; 
            if(mp.find(complement)!=mp.end()){
                indices.push_back(mp[complement]);
                indices.push_back(i);
            }
            else{
                    mp[nums[i]]=i;
            }
        }
        return indices;
    }
};