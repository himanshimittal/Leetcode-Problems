class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int num = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=num){
                count--;
                if(count<1){
                    num = nums[i];
                    count=1;
                }
            }
            else{
                count++;
            }
        }
        return num;
    }
};