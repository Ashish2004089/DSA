class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        
        for(int i = 0;i<nums.size();i++)
            
        {

        int value = target - nums[i];
            if(mpp.find(value)!=mpp.end())
            {
               ans.push_back(mpp[value]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};