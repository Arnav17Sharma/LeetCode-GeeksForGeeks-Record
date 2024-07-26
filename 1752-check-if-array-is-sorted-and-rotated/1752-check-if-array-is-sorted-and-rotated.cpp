class Solution {
public:
    bool check(vector<int>& nums) {
        int pivot = 0;
        int prev = nums[0];
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] < prev) {
                pivot = i;
                break;
            }
            prev = nums[i];
        }
        if(pivot != 0 && nums[0] < nums.back())
            return false;
        cout << pivot << endl;
        prev = nums[0];
        for(int i=1; i<pivot; i++) {
            if(nums[i] < prev)
                return false;
            prev = nums[i];
        }
        prev = nums[pivot];
        for(int i=pivot+1; i<nums.size(); i++) {
            if(nums[i] < prev)
                return false;
            prev = nums[i];
        }
        return true;
    }
};