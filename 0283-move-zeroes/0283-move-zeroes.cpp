class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count =0;//to track the count of non zero element 

        int n= nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[count]);
                count++;
            }
        }
        
    }
};