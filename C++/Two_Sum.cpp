class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> index;
        for(int i=0;i<nums.size();i++){
            if(const auto iter = index.find(target-nums[i]); iter!=index.end()){
               return {iter->second,i}; 
            }
            index[nums[i]] = i;
        }
        // Space Complexity: O(n)
        // Time Complexity: O(n)
        throw;
    }
};
