class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int sum = 0;
        /*if(nums.size() == 1){
            return nums[0];
        }
        
        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0;
            for(int j = i ; j < nums.size() ; j++){
                sum += nums[j];
                maxi = max(maxi , sum);
            }
        }

        return maxi;*/

    for (int i = 0; i < n; i++) {

        sum += nums[i];

        maxi = max(maxi , sum);
        if (sum < 0) {
            sum = 0;
        }
    }

    return maxi;
    }
};
