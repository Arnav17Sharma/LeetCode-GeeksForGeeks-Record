class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prev = nums[0], s = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i] - prev == 1){
                s+=nums[i];
            }
            else {
                break;
            }
            prev = nums[i];
        }
        int ans = 1;
        while(true){
            if(find(nums.begin(), nums.end(), s) == nums.end()){
                return s;
            }
            s++;
        }
    }
};