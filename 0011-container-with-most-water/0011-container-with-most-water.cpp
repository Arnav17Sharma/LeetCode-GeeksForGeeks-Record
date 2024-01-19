class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, ans = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            int d = j - i;
            int area = h * d;
            ans = max(ans, area);
            if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};