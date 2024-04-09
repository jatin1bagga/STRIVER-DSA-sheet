class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        /*set <int> s;
        for(int i = 0 ; i < size ; i++){
            s.insert(nums[i]);
        }
        int index = 0;
        for(auto it : s){
            nums[index] = it;
            index++;
        }

        return index;*/

       int i = 0;
       for(int j = 1 ; j < size ; j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
       }

       return i + 1;
    }
};
