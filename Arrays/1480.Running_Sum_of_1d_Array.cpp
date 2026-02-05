class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int i=0; i<nums.size()-1; i++){
            nums[i+1] += nums[i];
         }
         return nums;
    }
};
// we are using the concept of prefix sum , rather than taking an extra array we are making the changes in place 
