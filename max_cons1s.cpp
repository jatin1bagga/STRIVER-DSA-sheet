class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int size = nums.size();

        int max = 0;
        for(int i = 0 ; i < size ; i++){
            if(nums[i] == 1){
                count++;
                if(count >= max)
                    max = count;
            }
            else if(nums[i] != 1){
                count = 0;
            }
        }
        return max;
    }
};
