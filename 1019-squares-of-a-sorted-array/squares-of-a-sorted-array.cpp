class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int j=0,k = nums.size()-1;
        for(int i = nums.size()-1; i>=0;i--){
            if(abs(nums[k])>abs(nums[j])){
                ans[i] = nums[k]*nums[k];
                k--;
            }
            else{
                ans[i] = nums[j]*nums[j];
                j++;
            }
        }
        return ans;
    }
};