class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        int l = nums.size();
        for(int a = 0; a<int(log2(l)); a++)
        {
            int put = 0;
            for(int i=0; i<nums.size(); i+=2){
            if(put%2==0)
                nums[put] = min(nums[i], nums[i+1]);
            else
                nums[put] = max(nums[i], nums[i+1]);
            // cout << nums[put] << " ";
            put++;
        }
        cout << endl;
        }
        return nums[0];
    }
};