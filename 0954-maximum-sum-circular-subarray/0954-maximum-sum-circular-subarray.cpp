class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int total_sum =0,curr_sum1=0,curr_sum2 =0,maxi = INT_MIN,mini = INT_MAX;
        for(auto it: nums){
            total_sum+=it,curr_sum1+=it,curr_sum2+=it;
            maxi = max(maxi,curr_sum1);
            if(curr_sum1<0) curr_sum1=0;

            mini = min(mini,curr_sum2);
            if(curr_sum2>0)curr_sum2=0;

        }
        return (total_sum==mini)?maxi: max(maxi,total_sum-mini);
        
    }
};