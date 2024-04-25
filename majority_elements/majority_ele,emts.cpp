class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        /*int count = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
                if(count > (n / 2)){
                    return nums[i];
                }
            }
            count = 0;
        }
        return 0;*/

        unordered_map<int , int> m;
        for(int i = 0 ; i < n ; i++){
            m[nums[i]]++;
        }

        n = n/2;

        for(auto x:m){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};
